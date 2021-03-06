//-----------------------------------------------------------------------------
//
// $Id$
//
//-----------------------------------------------------------------------------
//
// $Log$
// Revision 1.23  2002/10/26 22:03:43  jbravo
// Made TeamDM work RQ3 style.
//
// Revision 1.22  2002/10/21 21:00:39  slicer
// New MM features and bug fixes
//
// Revision 1.21  2002/09/29 16:06:45  jbravo
// Work done at the HPWorld expo
//
// Revision 1.20  2002/08/23 14:25:05  slicer
// Added a new Referee System with multiple ref support
//
// Revision 1.19  2002/08/21 07:00:07  jbravo
// Added CTB respawn queue and fixed game <-> cgame synch problem in CTB
//
// Revision 1.18  2002/07/20 05:06:01  niceass
// scoreboard remembering your team in CTB but lying is fixed
//
// Revision 1.17  2002/07/11 04:29:41  niceass
// removed auto-joining teams for things like ctb
//
// Revision 1.16  2002/06/16 20:06:14  jbravo
// Reindented all the source files with "indent -kr -ut -i8 -l120 -lc120 -sob -bad -bap"
//
// Revision 1.15  2002/05/11 15:00:04  jbravo
// Fix for autojoin and a very minir for for Obits
//
// Revision 1.14  2002/05/05 15:51:16  slicer
// Captain and subs get saved on map_restarts ( moved to "sess" )
//
// Revision 1.13  2002/03/30 21:51:42  jbravo
// Removed all those ifdefs for zcam.
//
// Revision 1.12  2002/03/26 11:32:05  jbravo
// Remember specstate between rounds.
//
// Revision 1.11  2002/03/18 17:52:36  slicer
// Saved sess.savedTeam throught map changes for matchmode
//
// Revision 1.10  2002/03/11 18:02:33  slicer
// Fixed team changes and scoreboard bugs
//
// Revision 1.9  2002/02/25 19:41:53  jbravo
// Fixed the use ESC and join menu to join teams when dead players are
// spectating in TP mode.
// Tuned the autorespawn system a bit.  Now dead ppl. are dead for a very
// small time before they are made into spectators.
//
// Revision 1.8  2002/02/09 00:10:12  jbravo
// Fixed spectator follow and free and updated zcam to 1.04 and added the
// missing zcam files.
//
// Revision 1.7  2002/02/03 21:23:51  slicer
// More Matchmode code and fixed 2 bugs in TP
//
// Revision 1.5  2002/01/11 19:48:30  jbravo
// Formatted the source in non DOS format.
//
// Revision 1.4  2001/12/31 16:28:42  jbravo
// I made a Booboo with the Log tag.
//
//
//-----------------------------------------------------------------------------
// Copyright (C) 1999-2000 Id Software, Inc.
//
#include "g_local.h"
#include "zcam.h"

/*
=======================================================================

  SESSION DATA

Session data is the only data that stays persistant across level loads
and tournament restarts.
=======================================================================
*/

/*
================
G_WriteClientSessionData

Called on game shutdown
================
*/
void G_WriteClientSessionData(gclient_t * client)
{
	const char *s;
	const char *var;

	//Slicer how about savedTeam ?!

	if (!g_RQ3_matchmode.integer && g_gametype.integer >= GT_TEAM) {
		//Reset teams on map changes / map_restarts, except on matchmode
		client->sess.savedTeam = TEAM_SPECTATOR;
	}
	s = va("%i %i %i %i %i %i %i %i %i %i %i",
	       client->sess.sessionTeam,
	       client->sess.spectatorTime,
	       client->sess.spectatorState,
	       client->sess.spectatorClient, client->sess.wins, client->sess.losses, client->sess.teamLeader,
	       //Adding saved Team
	       client->sess.savedTeam, client->sess.captain, client->sess.sub,client->sess.referee 
	       //Captain and sub
	    );

	var = va( "session%i", (int)(client - level.clients) );

	trap_Cvar_Set(var, s);

	camera_state_save(client);
}

/*
================
G_ReadSessionData

Called on a reconnect
================
*/
void G_ReadSessionData(gclient_t * client)
{
	char s[MAX_STRING_CHARS];
	const char *var;

	// bk001205 - format
	int teamLeader;
	int spectatorState;
	int sessionTeam;

	//Slicer
	int savedTeam;
	int captain;
	int sub;
	int ref;

	var = va("session%i", (int)(client - level.clients));
	trap_Cvar_VariableStringBuffer(var, s, sizeof(s));
//Slicer: Reading savedTeam also.
	sscanf(s, "%i %i %i %i %i %i %i %i %i %i %i", &sessionTeam,	// bk010221 - format
	       &client->sess.spectatorTime, &spectatorState,	// bk010221 - format
	       &client->sess.spectatorClient, &client->sess.wins, &client->sess.losses, &teamLeader,	// bk010221 - format
	       &savedTeam, &captain, &sub, &ref);

	// bk001205 - format issues

	// Only noticable on non-roundbased games like CTB.
	 client->sess.sessionTeam = (team_t) sessionTeam;

	client->sess.spectatorState = (spectatorState_t) spectatorState;
	client->sess.teamLeader = (qboolean) teamLeader;

	client->sess.savedTeam = (team_t) savedTeam;
	client->sess.captain = (team_t) captain;
	client->sess.sub = (team_t) sub;
	client->sess.referee = ref;

	if (g_gametype.integer == GT_CTF) {
		client->sess.sessionTeam = TEAM_SPECTATOR;
		client->sess.savedTeam = TEAM_SPECTATOR;
		client->sess.captain = TEAM_FREE;
		client->sess.sub = TEAM_FREE;
	}

	camera_state_load(client);
}

/*
================
G_InitSessionData

Called on a first-time connect
================
*/
void G_InitSessionData(gclient_t * client, char *userinfo)
{
	clientSession_t *sess;
	const char *value;

	sess = &client->sess;

	//Slicer: init savedTeam also

	sess->savedTeam = TEAM_SPECTATOR;

	//Slicer: init Matchmode stuff

	sess->captain = TEAM_FREE;
	sess->sub = TEAM_FREE;
	sess->referee = 0;
	sess->refHear = qfalse;
	sess->refReady = 0;

// JBravo: adding PERS_SAVEDTEAM
	client->ps.persistant[PERS_SAVEDTEAM] = TEAM_SPECTATOR;

	// initial team determination
	if (g_gametype.integer >= GT_TEAM) {
		if ( g_teamAutoJoin.integer && !(g_entities[ client - level.clients ].r.svFlags & SVF_BOT) ) {
			if (g_gametype.integer == GT_TEAMPLAY) {
				sess->savedTeam = PickTeam(-1);
				client->ps.persistant[PERS_SAVEDTEAM] = sess->savedTeam;
			} else if (g_gametype.integer == GT_CTF || g_gametype.integer == GT_TEAM) {
				sess->savedTeam = PickTeam(-1);
				client->ps.persistant[PERS_SAVEDTEAM] = sess->savedTeam;
				sess->sessionTeam = sess->savedTeam;
			} else
				sess->sessionTeam = PickTeam(-1);
			BroadcastTeamChange(client, -1);
		} else {
			// always spawn as spectator in team games
			sess->sessionTeam = TEAM_SPECTATOR;
		}
	} else {
		value = Info_ValueForKey(userinfo, "team");
		if (value[0] == 's') {
			// a willing spectator, not a waiting-in-line
			sess->sessionTeam = TEAM_SPECTATOR;
		} else {
			switch (g_gametype.integer) {
			default:
			case GT_FFA:
			case GT_SINGLE_PLAYER:
				if (g_maxGameClients.integer > 0 &&
				    level.numNonSpectatorClients >= g_maxGameClients.integer) {
					sess->sessionTeam = TEAM_SPECTATOR;
				} else {
					sess->sessionTeam = TEAM_FREE;
				}
				break;
			case GT_TOURNAMENT:
				// if the game is full, go into a waiting mode
				if (level.numNonSpectatorClients >= 2) {
					sess->sessionTeam = TEAM_SPECTATOR;
				} else {
					sess->sessionTeam = TEAM_FREE;
				}
				break;
			}
		}
	}

	sess->spectatorState = SPECTATOR_FREE;
	client->specMode = SPECTATOR_FREE;
	sess->spectatorTime = level.time;

	G_WriteClientSessionData(client);
}

/*
==================
G_InitWorldSession

==================
*/
void G_InitWorldSession(void)
{
	char s[MAX_STRING_CHARS];
	int gt;

	trap_Cvar_VariableStringBuffer("session", s, sizeof(s));
	gt = atoi(s);

	// if the gametype changed since the last session, don't use any
	// client sessions
	if (g_gametype.integer != gt) {
		level.newSession = qtrue;
		G_Printf("Gametype changed, clearing session data.\n");
	}
}

/*
==================
G_WriteSessionData

==================
*/
void G_WriteSessionData(void)
{
	int i;

	trap_Cvar_Set("session", va("%i", g_gametype.integer));

	for (i = 0; i < level.maxclients; i++) {
		if (level.clients[i].pers.connected == CON_CONNECTED) {
			G_WriteClientSessionData(&level.clients[i]);
		}
	}
}
