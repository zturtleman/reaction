//-----------------------------------------------------------------------------
//
// $Id$
//
//-----------------------------------------------------------------------------
//
// $Log$
// Revision 1.14  2002/03/31 03:31:24  jbravo
// Compiler warning cleanups
//
// Revision 1.13  2002/03/24 21:24:51  makro
// Added a drop-shadow effect to the loading screen
//
// Revision 1.12  2002/03/03 18:10:20  makro
// Changed the colors for the 'loading map' screen a bit
//
// Revision 1.11  2002/01/11 20:20:57  jbravo
// Adding TP to main branch
//
// Revision 1.10  2002/01/11 19:48:29  jbravo
// Formatted the source in non DOS format.
//
// Revision 1.9  2001/12/31 16:28:41  jbravo
// I made a Booboo with the Log tag.
//
//
//-----------------------------------------------------------------------------
// Copyright (C) 1999-2000 Id Software, Inc.
//
// cg_info.c -- display information while data is being loading

#include "cg_local.h"

#define MAX_LOADING_PLAYER_ICONS	16
#define MAX_LOADING_ITEM_ICONS		26

static int			loadingPlayerIconCount;
static int			loadingItemIconCount;
static qhandle_t	loadingPlayerIcons[MAX_LOADING_PLAYER_ICONS];
static qhandle_t	loadingItemIcons[MAX_LOADING_ITEM_ICONS];


/*
===================
CG_DrawLoadingIcons
===================
// JBravo: apparently not used.
*/
/*
static void CG_DrawLoadingIcons( void ) {
	int		n;
	int		x, y;

	for( n = 0; n < loadingPlayerIconCount; n++ ) {
		x = 16 + n * 78;
		y = 324-40;
		CG_DrawPic( x, y, 64, 64, loadingPlayerIcons[n] );
	}

	for( n = 0; n < loadingItemIconCount; n++ ) {
		y = 400-40;
		if( n >= 13 ) {
			y += 40;
		}
		x = 16 + n % 13 * 48;
		CG_DrawPic( x, y, 32, 32, loadingItemIcons[n] );
	}
}
*/

/*
======================
CG_LoadingString

======================
*/
void CG_LoadingString( const char *s ) {
	Q_strncpyz( cg.infoScreenText, s, sizeof( cg.infoScreenText ) );

	trap_UpdateScreen();
}

/*
===================
CG_LoadingItem
===================
*/
void CG_LoadingItem( int itemNum ) {
	gitem_t		*item;

	item = &bg_itemlist[itemNum];
	
	if ( item->icon && loadingItemIconCount < MAX_LOADING_ITEM_ICONS ) {
		loadingItemIcons[loadingItemIconCount++] = trap_R_RegisterShaderNoMip( item->icon );
	}

	CG_LoadingString( item->pickup_name );
}

/*
===================
CG_LoadingClient
===================
*/
void CG_LoadingClient( int clientNum ) {
	const char		*info;
	char			*skin;
	char			personality[MAX_QPATH];
	char			model[MAX_QPATH];
	char			iconName[MAX_QPATH];

	info = CG_ConfigString( CS_PLAYERS + clientNum );

	if ( loadingPlayerIconCount < MAX_LOADING_PLAYER_ICONS ) {
		Q_strncpyz( model, Info_ValueForKey( info, "model" ), sizeof( model ) );
		skin = Q_strrchr( model, '/' );
		if ( skin ) {
			*skin++ = '\0';
		} else {
			skin = "default";
		}

		Com_sprintf( iconName, MAX_QPATH, "models/players/%s/icon_%s.tga", model, skin );
		
		loadingPlayerIcons[loadingPlayerIconCount] = trap_R_RegisterShaderNoMip( iconName );
		if ( !loadingPlayerIcons[loadingPlayerIconCount] ) {
			Com_sprintf( iconName, MAX_QPATH, "models/players/characters/%s/icon_%s.tga", model, skin );
			loadingPlayerIcons[loadingPlayerIconCount] = trap_R_RegisterShaderNoMip( iconName );
		}
		if ( !loadingPlayerIcons[loadingPlayerIconCount] ) {
			// Elder: changed
			Com_sprintf( iconName, MAX_QPATH, "models/players/%s/icon_%s.tga", DEFAULT_MODEL, DEFAULT_SKIN );
			//Com_sprintf( iconName, MAX_QPATH, "models/players/%s/icon_%s.tga", DEFAULT_MODEL, "default" );
			loadingPlayerIcons[loadingPlayerIconCount] = trap_R_RegisterShaderNoMip( iconName );
		}
		if ( loadingPlayerIcons[loadingPlayerIconCount] ) {
			loadingPlayerIconCount++;
		}
	}

	Q_strncpyz( personality, Info_ValueForKey( info, "n" ), sizeof(personality) );
	Q_CleanStr( personality );

	if( cgs.gametype == GT_SINGLE_PLAYER ) {
		trap_S_RegisterSound( va( "sound/player/announce/%s.wav", personality ), qtrue );
	}

	CG_LoadingString( personality );
}


/*
====================
CG_DrawInformation

Draw all the status / pacifier stuff during level loading
====================
*/
void CG_DrawInformation( void ) {
	const char	*s;
	const char	*info;
	const char	*sysInfo;
	int			x = 8;
	int			y;
	int			value;
	qhandle_t	levelshot, shadow;
	qhandle_t	detail;
	char		buf[1024];
	qboolean	skipdetail;

	skipdetail = qfalse;

	info = CG_ConfigString( CS_SERVERINFO );
	sysInfo = CG_ConfigString( CS_SYSTEMINFO );

	s = Info_ValueForKey( info, "mapname" );
	shadow = trap_R_RegisterShaderNoMip("ui/assets/rq3-main-shadow-1.tga");
	levelshot = trap_R_RegisterShaderNoMip( va( "levelshots/%s.tga", s ) );
	if ( !levelshot ) {
		//Elder: changed
		levelshot = trap_R_RegisterShaderNoMip( "levelshots/rq3-unknownmap.tga" );
		skipdetail = qtrue;
		//levelshot = trap_R_RegisterShaderNoMip( "menu/art/unknownmap" );
	}
	trap_R_SetColor( NULL );
	CG_DrawPic( 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, levelshot );

	// blend a detail texture over it
	//Elder: changed to RQ3 detail overlay
	if (!skipdetail) {
		detail = trap_R_RegisterShader( "rq3-levelShotDetail" );
		trap_R_DrawStretchPic( 0, 0, cgs.glconfig.vidWidth, cgs.glconfig.vidHeight, 0, 0, 2.5, 2, detail );
	}

	//Elder: "Letterbox" mask
	//Makro - changed it a bit
	CG_FillRect( 0, 0, SCREEN_WIDTH, 56, colorBlack);
	CG_FillRect( 0, 426, SCREEN_WIDTH, 54, colorBlack);
	CG_FillRect( 0, 56, SCREEN_WIDTH, 2, colorMdGrey);
	CG_FillRect( 0, 426, SCREEN_WIDTH, 2, colorMdGrey);
	//Makro - shadow
	CG_DrawPic( 0, 58, 640, 12, shadow );

	//Elder: mapname
	UI_DrawProportionalString(x, 26, s, UI_LEFT|UI_DROPSHADOW, colorDkGrey);
	//CG_DrawBigStringColor(4, 24, s, color_red);

	//Elder: removed
	// draw the icons of things as they are loaded
	//CG_DrawLoadingIcons();

	// the first 150 rows are reserved for the client connection
	// screen to write into
	if ( cg.infoScreenText[0] ) {
		//UI_DrawProportionalString( 320, 128-32, va("Loading... %s", cg.infoScreenText),
			//UI_CENTER|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
		CG_DrawSmallStringColor(x, 434, va("LOADING... %s", Q_strupr(cg.infoScreenText)), colorWhite);
	} else {
		//UI_DrawProportionalString( 320, 128-32, "Awaiting snapshot...",
			//UI_CENTER|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
		CG_DrawSmallStringColor( x, 434, "AWAITING SNAPSHOT...", colorWhite);
	}

	// draw info string information

	//y = 180-32;
	//Elder: Initial y-position
	y = 96;

	// map-specific message (long map name)
	s = CG_ConfigString( CS_MESSAGE );
	if ( s[0] ) {
		//UI_DrawProportionalString( 4, y, s,
			//UI_LEFT|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
		//Q_strncpyz(buf, s, 1024);
		//Q_CleanStr(buf);
		
		//Makro - allow color-coded texts
		//CG_DrawSmallStringColor(x, y, s, colorMdGrey);
		CG_DrawStringExt(x, y, s, colorLtGrey, qfalse, qfalse, SMALLCHAR_WIDTH, SMALLCHAR_HEIGHT, 0);

		y += SMALLCHAR_HEIGHT;
	}

	// don't print server lines if playing a local game
	trap_Cvar_VariableStringBuffer( "sv_running", buf, sizeof( buf ) );
	if ( !atoi( buf ) ) {
	
		// server hostname
		Q_strncpyz(buf, Info_ValueForKey( info, "sv_hostname" ), 1024);
		Q_CleanStr(buf);
		//UI_DrawProportionalString( x, y, buf,
			//UI_LEFT|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
		CG_DrawSmallStringColor(x, y, buf, colorWhite);
		y += SMALLCHAR_HEIGHT;

		// pure server
		s = Info_ValueForKey( sysInfo, "sv_pure" );
		if ( s[0] == '1' ) {
			//UI_DrawProportionalString( 4, y, "Pure Server",
				//UI_LEFT|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
			CG_DrawSmallStringColor(x, y, "PURE SERVER", colorWhite);
			y += SMALLCHAR_HEIGHT;
		}

		// server-specific message of the day
		s = CG_ConfigString( CS_MOTD );
		if ( s[0] ) {
			UI_DrawProportionalString( x, 360, s,
				UI_LEFT|UI_SMALLFONT, colorWhite );
			y += PROP_HEIGHT;
		}

		// some extra space after hostname and motd
		//y += 10;
	}

	// cheats warning
	s = Info_ValueForKey( sysInfo, "sv_cheats" );
	if ( s[0] == '1' ) {
		//UI_DrawProportionalString( x, y, "CHEATS ARE ENABLED",
			//UI_LEFT|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
		CG_DrawSmallStringColor(x, y, "CHEATS ARE ENABLED", colorWhite);
		y += SMALLCHAR_HEIGHT;
	}

	y += SMALLCHAR_HEIGHT;
	// game type
	switch ( cgs.gametype ) {
	case GT_FFA:
		s = "CLASSIC ACTION DEATHMATCH";
		break;
	case GT_SINGLE_PLAYER:
		s = "Single Player";
		break;
	case GT_TOURNAMENT:
		s = "Tournament";
		break;
	case GT_TEAM:
		s = "Team Deathmatch";
		break;
// JBravo: teamplay stuff.
	case GT_TEAMPLAY:
		s = "RQ3 Teamplay";
		break;
	case GT_CTF:
		s = "Capture The Flag";
		break;
#ifdef MISSIONPACK
	case GT_1FCTF:
		s = "One Flag CTF";
		break;
	case GT_OBELISK:
		s = "Overload";
		break;
	case GT_HARVESTER:
		s = "Harvester";
		break;
#endif
	default:
		s = "Unknown Gametype";
		break;
	}
	//UI_DrawProportionalString( x, y, s,
		//UI_LEFT|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
	CG_DrawSmallStringColor(x, y, s, colorWhite);
	y += SMALLCHAR_HEIGHT;
		
	value = atoi( Info_ValueForKey( info, "timelimit" ) );
	if ( value ) {
		//UI_DrawProportionalString( x, y, va( "timelimit %i", value ),
			//UI_LEFT|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
		CG_DrawSmallStringColor(x, y, va( "TIMELIMIT %i", value ), colorWhite);
		y += SMALLCHAR_HEIGHT;
	}

	if (cgs.gametype < GT_CTF ) {
		value = atoi( Info_ValueForKey( info, "fraglimit" ) );
		if ( value ) {
			//UI_DrawProportionalString( x, y, va( "fraglimit %i", value ),
				//UI_LEFT|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
			CG_DrawSmallStringColor(x, y, va( "FRAGLIMIT %i", value ), colorWhite);
			y += SMALLCHAR_HEIGHT;
		}
	}

	if (cgs.gametype >= GT_CTF) {
		value = atoi( Info_ValueForKey( info, "capturelimit" ) );
		if ( value ) {
			//UI_DrawProportionalString( x, y, va( "capturelimit %i", value ),
				//UI_LEFT|UI_SMALLFONT|UI_DROPSHADOW, colorWhite );
			CG_DrawSmallStringColor(x, y, va( "CAPTURELIMIT %i", value ), colorWhite);
			y += SMALLCHAR_HEIGHT;
		}
	}
}

