//-----------------------------------------------------------------------------
//
// $Id$
//
//-----------------------------------------------------------------------------
//
// $Log$
// Revision 1.98  2002/10/26 00:37:18  jbravo
// New multiple item code and added PB support to the UI
//
// Revision 1.97  2002/10/20 21:24:32  blaze
// Added cg_rq3_gunname cvars.  These can be used to choose weapon replacements.  You will need 3 icons that I will upload to the ftp.  These should go in the next pk3
//
// Revision 1.96  2002/09/09 06:40:35  niceass
// smoke puff less intrusive
//
// Revision 1.95  2002/09/08 23:23:49  niceass
// no first person pistol action when firing in semi-auto with predictweapons 0 fixed
//
// Revision 1.94  2002/09/08 03:14:17  niceass
// tracerchance now can be 0.0 to 0.4
//
// Revision 1.93  2002/08/29 04:42:41  blaze
// Anti OGC code
//
// Revision 1.92  2002/08/25 03:34:11  niceass
// puff added to silencer
//
// Revision 1.91  2002/07/22 06:30:12  niceass
// cleaned up the powerup code
//
// Revision 1.90  2002/07/13 22:42:18  makro
// Semi-working fog hull, semi-working sky portals (cgame code commented out)
// Basically, semi-working stuff :P
//
// Revision 1.89  2002/07/08 04:41:12  niceass
// no more shell ejection on LCA, I hope
//
// Revision 1.88  2002/06/29 21:57:18  niceass
// shotgun fixes
//
// Revision 1.87  2002/06/29 20:56:23  niceass
// Change to the way HC/Shotty act
//
// Revision 1.86  2002/06/29 04:15:15  jbravo
// CTF is now CTB.  no weapons while the case is in hand other than pistol or knife
//
// Revision 1.85  2002/06/23 04:34:54  niceass
// change to foglaser
//
// Revision 1.84  2002/06/21 04:09:44  niceass
// fog laser
//
// Revision 1.83  2002/06/17 03:53:31  niceass
// m4 muzzle flash is smaller
//
// Revision 1.82  2002/06/16 20:06:13  jbravo
// Reindented all the source files with "indent -kr -ut -i8 -l120 -lc120 -sob -bad -bap"
//
// Revision 1.81  2002/06/16 19:12:52  jbravo
// Removed the MISSIONPACK ifdefs and missionpack only code.
//
// Revision 1.80  2002/06/12 17:05:14  slicer
// Fixed a couple of problems related to the sniper zooming
//
// Revision 1.79  2002/06/11 21:50:51  niceass
// HC changes
//
// Revision 1.78  2002/06/06 00:29:14  blaze
// got rid of the out of ammo shader
//
// Revision 1.77  2002/06/05 09:40:10  niceass
// tracer fix
//
// Revision 1.76  2002/06/03 01:09:33  niceass
// silencer scale changes
//
// Revision 1.75  2002/05/29 03:52:21  niceass
// LAM code
//
// Revision 1.74  2002/05/27 17:47:19  jbravo
// Fixes and cleanups
//
// Revision 1.73  2002/05/27 06:58:40  niceass
// removed reflection stuff. Silencer stuff added
//
// Revision 1.72  2002/05/18 03:55:35  niceass
// many misc. changes
//
// Revision 1.71  2002/05/12 14:39:48  makro
// Wood, brick & ceramic impact sounds
//
// Revision 1.70  2002/05/09 06:40:37  niceass
// New tracers
//
// Revision 1.69  2002/05/01 17:46:00  slicer
// Only calling "unzoom" when switching from ssg ( less lag )
//
// Revision 1.68  2002/05/01 03:28:07  niceass
// mp5 scale change for silencer
//
// Revision 1.67  2002/04/29 06:10:09  niceass
// visible silencer
//
// Revision 1.66  2002/04/07 02:10:42  niceass
// shell ejection bug fixed
//
// Revision 1.65  2002/04/06 21:43:59  makro
// New surfaceparm system
//
// Revision 1.64  2002/04/05 18:53:26  jbravo
// Warning fixes
//
// Revision 1.63  2002/04/03 03:13:49  blaze
// NEW BREAKABLE CODE - will break all old breakables(wont appear in maps)
//
// Revision 1.62  2002/04/01 22:23:38  slicer
// Added "weapon" command buffering
//
// Revision 1.61  2002/03/31 13:52:48  jbravo
// More cleanups
//
// Revision 1.60  2002/03/31 03:31:24  jbravo
// Compiler warning cleanups
//
// Revision 1.59  2002/03/31 02:00:42  niceass
// shell stuff
//
// Revision 1.58  2002/03/24 22:46:23  niceass
// shell ejection stuff/handcannon fix
//
// Revision 1.57  2002/03/21 02:17:39  blaze
// more func_explosive goodness
//
// Revision 1.56  2002/03/21 00:26:11  blaze
// some fixing of func_explosive
//
// Revision 1.55  2002/03/18 19:19:08  slicer
// Fixed bandage bugs ( i hope )
//
// Revision 1.54  2002/03/16 21:48:39  niceass
// All new shell ejection code
//
// Revision 1.53  2002/03/13 18:41:18  slicer
// Adjusted some of elder's unzoom code for the new sniper system ( server side )
//
// Revision 1.52  2002/03/11 03:25:41  jbravo
// Minor fix for NA
//
// Revision 1.51  2002/03/11 02:22:45  niceass
// tag shell ejections
//
// Revision 1.50  2002/02/24 20:49:07  slicer
// Follow Spect Players- Draws the gun
//
// Revision 1.49  2002/02/23 18:07:46  slicer
// Changed Sniper code and Cam code
//
// Revision 1.48  2002/02/08 18:00:34  jbravo
// Fixing "No newline at end of file" Warnings Linux keeps giving me
//
// Revision 1.47  2002/01/14 01:19:23  niceass
// No more default 800 gravity on items - NiceAss
//
// Revision 1.46  2002/01/12 15:18:20  jbravo
// Added a fix from Niceass. (cg_drawgun affecting other player models)
//
// Revision 1.45  2002/01/11 19:48:29  jbravo
// Formatted the source in non DOS format.
//
// Revision 1.44  2001/12/31 16:28:41  jbravo
// I made a Booboo with the Log tag.
//
//
//-----------------------------------------------------------------------------
	// Copyright (C) 1999-2000 Id Software, Inc.
//
// cg_weapons.c -- events and effects dealing with weapons
#include "cg_local.h"

/*
==========================
CG_ParseWeaponSoundFile

Added by Elder
Reads information for frame-sound timing
==========================
*/
static qboolean CG_ParseWeaponSoundFile(const char *filename, weaponInfo_t * weapon)
{
	char *text_p;
	int len;
	int i;
	char *token;

//      float                   fps;
	int skip;		// Elder: What's this for?
	char text[20000];
	fileHandle_t f;
	sfxWeapTiming_t *weapTiming;

	weapTiming = weapon->animationSounds;

	// load the file
	len = trap_FS_FOpenFile(filename, &f, FS_READ);
	if (len <= 0) {
		return qfalse;
	}
	if (len >= sizeof(text) - 1) {
		CG_Printf("File %s too long\n", filename);
		return qfalse;
	}
	trap_FS_Read(text, len, f);
	text[len] = 0;
	trap_FS_FCloseFile(f);

	// parse the text
	text_p = text;
	// Elder: uhh, what was this for?
	skip = 0;		// quite the compiler warning

	for (i = 0; i < MAX_ANIM_SOUNDS; i++) {
		// Grab frame number
		token = COM_Parse(&text_p);
		if (!token)
			break;
		// Add it to the array
		if (atoi(token)) {
			//Com_Printf("(%i): %s\n", i, token);
			weapTiming->sfxInfo[i].frame = atoi(token);
		} else
			break;
		//return qfalse;

		// Grab sound file path
		token = COM_Parse(&text_p);
		if (!token)
			break;
		//return qfalse;

		//Com_Printf("(%i): %s\n", i, token);
		weapTiming->sfxInfo[i].sound = trap_S_RegisterSound(token, qfalse);
	}

	// Store total number
	weapTiming->numFrames = i;
	//Com_Printf("Total Frames: %i\n", weapTiming->numFrames);

	return qtrue;
}

/*
======================
CG_CalcMuzzlePoint
======================
*/
static qboolean CG_CalcMuzzlePoint(int entityNum, vec3_t muzzle)
{
	vec3_t forward;
	centity_t *cent;
	int anim;

	if (entityNum == cg.snap->ps.clientNum) {
		VectorCopy(cg.snap->ps.origin, muzzle);
		muzzle[2] += cg.snap->ps.viewheight;
		AngleVectors(cg.snap->ps.viewangles, forward, NULL, NULL);
		VectorMA(muzzle, 14, forward, muzzle);
		return qtrue;
	}

	cent = &cg_entities[entityNum];
	if (!cent->currentValid) {
		return qfalse;
	}

	VectorCopy(cent->currentState.pos.trBase, muzzle);

	AngleVectors(cent->currentState.apos.trBase, forward, NULL, NULL);
	anim = cent->currentState.legsAnim & ~ANIM_TOGGLEBIT;
	if (anim == LEGS_WALKCR || anim == LEGS_IDLECR) {
		muzzle[2] += CROUCH_VIEWHEIGHT;
	} else {
		muzzle[2] += DEFAULT_VIEWHEIGHT;
	}

	VectorMA(muzzle, 14, forward, muzzle);

	return qtrue;

}

/* [QUARANTINE] - Weapon Animations - CG_ParseWeaponAnimFile
==========================
CG_ParseWeaponAnimFile
==========================
*/
static qboolean CG_ParseWeaponAnimFile(const char *filename, weaponInfo_t * weapon)
{
	char *text_p;
	int len;
	int i;
	int skip;
	char *token;
	float fps;
	char text[20000];
	fileHandle_t f;
	animation_t *animations;

	animations = weapon->animations;

	// load the file
	len = trap_FS_FOpenFile(filename, &f, FS_READ);
	if (len <= 0) {
		return qfalse;
	}
	if (len >= sizeof(text) - 1) {
		CG_Printf("File %s too long\n", filename);
		return qfalse;
	}
	trap_FS_Read(text, len, f);
	text[len] = 0;
	trap_FS_FCloseFile(f);

	// parse the text
	text_p = text;
	skip = 0;		// quite the compiler warning

	// read information for each frame
	for (i = 0; i < MAX_WEAPON_ANIMATIONS; i++) {
		token = COM_Parse(&text_p);
		if (!token)
			break;
		animations[i].firstFrame = atoi(token);
		token = COM_Parse(&text_p);
		if (!token)
			break;
		animations[i].numFrames = atoi(token);
		token = COM_Parse(&text_p);
		if (!token)
			break;
		animations[i].loopFrames = atoi(token);
		token = COM_Parse(&text_p);
		if (!token)
			break;
		fps = atof(token);
		if (fps == 0)
			fps = 1;
		animations[i].frameLerp = 1000 / fps;
		animations[i].initialLerp = 1000 / fps;
	}
	if (i != MAX_WEAPON_ANIMATIONS) {
		CG_Printf("Error parsing weapon animation file: %s", filename);
		return qfalse;
	}

	return qtrue;
}

// END

/*
==========================
CG_MachineGunEjectBrass
==========================
*/
localEntity_t *CG_MachineGunEjectBrass(centity_t * cent)
{
	localEntity_t *le;
	refEntity_t *re;

//      vec3_t                  velocity, xvelocity;
//      vec3_t                  offset, xoffset;
//      float                   waterScale = 1.0f;
//      vec3_t                  v[3];

	if (cg_brassTime.integer <= 0) {
		return NULL;
	}

	le = CG_AllocLocalEntity();
	re = &le->refEntity;

	le->leType = LE_FRAGMENT;
	le->startTime = cg.time;
	le->endTime = le->startTime + cg_brassTime.integer + (cg_brassTime.integer / 4) * random();

	le->pos.trType = TR_GRAVITY;
	le->pos.trTime = cg.time - (rand() & 15);

	AxisCopy(axisDefault, re->axis);

	le->bounceFactor = 0.5;

	if (cent->currentState.weapon == WP_M4 || cent->currentState.weapon == WP_SSG3000) {
		re->hModel = cgs.media.largeBrassModel;
		le->bounceFactor *= 0.75;
	} else
		re->hModel = cgs.media.machinegunBrassModel;

	le->angles.trType = TR_LINEAR;
	le->angles.trTime = cg.time;

	le->angles.trDelta[0] = rand() % 200 - 100;
	le->angles.trDelta[1] = rand() % 200 - 100;
	le->angles.trDelta[2] = rand() % 200 - 100;

	le->leFlags = LEF_TUMBLE;
	le->leBounceSoundType = LEBS_BRASS;
	le->leMarkType = LEMT_NONE;
	return le;
}

/*
==========================
CG_ShotgunEjectBrass
==========================
*/
localEntity_t *CG_ShotgunEjectBrass(centity_t * cent)
{
	localEntity_t *le;
	refEntity_t *re;
	int isHC;

//      vec3_t                  velocity, xvelocity;
//      vec3_t                  offset, xoffset;
//      vec3_t                  v[3];
//      int                             i;//, isHC;
//      float   waterScale = 1.0f;

	if (cent->currentState.weapon == WP_HANDCANNON)
		isHC = 1;
	else
		isHC = 0;

	if (cg_brassTime.integer <= 0) {
		return NULL;
	}
	//for ( i = 0; i < isHC + 1; i++ ) {

	le = CG_AllocLocalEntity();
	re = &le->refEntity;

	le->leType = LE_FRAGMENT;
	le->startTime = cg.time;
	le->endTime = le->startTime + cg_brassTime.integer * 3 + cg_brassTime.integer * random();

	le->pos.trType = TR_GRAVITY;
	le->pos.trTime = cg.time;

	AxisCopy(axisDefault, re->axis);

	if (isHC)
		re->hModel = cgs.media.HCBrassModel;
	else
		re->hModel = cgs.media.shotgunBrassModel;

	le->bounceFactor = 0.3f;

	le->angles.trType = TR_LINEAR;
	le->angles.trTime = cg.time;

	le->angles.trDelta[0] = rand() % 200 - 100;
	le->angles.trDelta[1] = rand() % 200 - 100;
	le->angles.trDelta[2] = rand() % 200 - 100;

	le->leFlags = LEF_TUMBLE;
	le->leBounceSoundType = LEBS_BRASS;
	le->leMarkType = LEMT_NONE;
	//}
	return le;
}

/*
==========================
CG_RailTrail
==========================
*/
void CG_RailTrail(clientInfo_t * ci, vec3_t start, vec3_t end)
{
	vec3_t axis[36], move, move2, next_move, vec, temp;
	float len;
	int i, j, skip;

	localEntity_t *le;
	refEntity_t *re;

#define RADIUS   4
#define ROTATION 1
#define SPACING  5

	start[2] -= 4;
	VectorCopy(start, move);
	VectorSubtract(end, start, vec);
	len = VectorNormalize(vec);
	PerpendicularVector(temp, vec);
	for (i = 0; i < 36; i++) {
		RotatePointAroundVector(axis[i], vec, temp, i * 10);	//banshee 2.4 was 10
	}

	le = CG_AllocLocalEntity();
	re = &le->refEntity;

	le->leType = LE_FADE_RGB;
	le->startTime = cg.time;
	le->endTime = cg.time + cg_railTrailTime.value;
	le->lifeRate = 1.0 / (le->endTime - le->startTime);

	re->shaderTime = cg.time / 1000.0f;
	re->reType = RT_RAIL_CORE;
	re->customShader = cgs.media.railCoreShader;

	VectorCopy(start, re->origin);
	VectorCopy(end, re->oldorigin);

	re->shaderRGBA[0] = ci->color1[0] * 255;
	re->shaderRGBA[1] = ci->color1[1] * 255;
	re->shaderRGBA[2] = ci->color1[2] * 255;
	re->shaderRGBA[3] = 255;

	le->color[0] = ci->color1[0] * 0.75;
	le->color[1] = ci->color1[1] * 0.75;
	le->color[2] = ci->color1[2] * 0.75;
	le->color[3] = 1.0f;

	AxisClear(re->axis);

	VectorMA(move, 20, vec, move);
	VectorCopy(move, next_move);
	VectorScale(vec, SPACING, vec);

	if (cg_oldRail.integer != 0) {
		// nudge down a bit so it isn't exactly in center
		re->origin[2] -= 8;
		re->oldorigin[2] -= 8;
		return;
	}
	skip = -1;

	j = 18;
	for (i = 0; i < len; i += SPACING) {
		if (i != skip) {
			skip = i + SPACING;
			le = CG_AllocLocalEntity();
			re = &le->refEntity;
			le->leFlags = LEF_PUFF_DONT_SCALE;
			le->leType = LE_MOVE_SCALE_FADE;
			le->startTime = cg.time;
			le->endTime = cg.time + (i >> 1) + 600;
			le->lifeRate = 1.0 / (le->endTime - le->startTime);

			re->shaderTime = cg.time / 1000.0f;
			re->reType = RT_SPRITE;
			re->radius = 1.1f;
			re->customShader = cgs.media.railRingsShader;

			re->shaderRGBA[0] = ci->color2[0] * 255;
			re->shaderRGBA[1] = ci->color2[1] * 255;
			re->shaderRGBA[2] = ci->color2[2] * 255;
			re->shaderRGBA[3] = 255;

			le->color[0] = ci->color2[0] * 0.75;
			le->color[1] = ci->color2[1] * 0.75;
			le->color[2] = ci->color2[2] * 0.75;
			le->color[3] = 1.0f;

			le->pos.trType = TR_LINEAR;
			le->pos.trTime = cg.time;

			VectorCopy(move, move2);
			VectorMA(move2, RADIUS, axis[j], move2);
			VectorCopy(move2, le->pos.trBase);

			le->pos.trDelta[0] = axis[j][0] * 6;
			le->pos.trDelta[1] = axis[j][1] * 6;
			le->pos.trDelta[2] = axis[j][2] * 6;
		}

		VectorAdd(move, vec, move);

		j = j + ROTATION < 36 ? j + ROTATION : (j + ROTATION) % 36;
	}
}

/*
==========================
CG_RocketTrail
==========================
*/
// JBravo: not used
/*
static void CG_RocketTrail( centity_t *ent, const weaponInfo_t *wi ) {
	int		step;
	vec3_t	origin, lastPos;
	int		t;
	int		startTime, contents;
	int		lastContents;
	entityState_t	*es;
	vec3_t	up;
	localEntity_t	*smoke;

	if ( cg_noProjectileTrail.integer ) {
		return;
	}

	up[0] = 0;
	up[1] = 0;
	up[2] = 0;

	step = 50;

	es = &ent->currentState;
	startTime = ent->trailTime;
	t = step * ( (startTime + step) / step );

	CG_EvaluateTrajectory( &es->pos, cg.time, origin );
	contents = CG_PointContents( origin, -1 );

	// if object (e.g. grenade) is stationary, don't toss up smoke
	if ( es->pos.trType == TR_STATIONARY ) {
		ent->trailTime = cg.time;
		return;
	}

	CG_EvaluateTrajectory( &es->pos, ent->trailTime, lastPos );
	lastContents = CG_PointContents( lastPos, -1 );

	ent->trailTime = cg.time;

	if ( contents & ( CONTENTS_WATER | CONTENTS_SLIME | CONTENTS_LAVA ) ) {
		if ( contents & lastContents & CONTENTS_WATER ) {
			CG_BubbleTrail( lastPos, origin, 8 );
		}
		return;
	}

	for ( ; t <= ent->trailTime ; t += step ) {
		CG_EvaluateTrajectory( &es->pos, t, lastPos );

		smoke = CG_SmokePuff( lastPos, up,
					  wi->trailRadius,
					  1, 1, 1, 0.33f,
					  wi->wiTrailTime,
					  t,
					  0,
					  0,
					  cgs.media.smokePuffShader );
		// use the optimized local entity add
		smoke->leType = LE_SCALE_FADE;
	}

}
*/

/*
==========================
CG_NailTrail
==========================
*/
// JBravo: apparently not used.
/*
static void CG_PlasmaTrail( centity_t *cent, const weaponInfo_t *wi ) {
	localEntity_t	*le;
	refEntity_t		*re;
	entityState_t	*es;
	vec3_t			velocity, xvelocity, origin;
	vec3_t			offset, xoffset;
	vec3_t			v[3];
	int				t, startTime, step;

	float	waterScale = 1.0f;

	if ( cg_noProjectileTrail.integer || cg_oldPlasma.integer ) {
		return;
	}

	step = 50;

	es = &cent->currentState;
	startTime = cent->trailTime;
	t = step * ( (startTime + step) / step );

	CG_EvaluateTrajectory( &es->pos, cg.time, origin );

	le = CG_AllocLocalEntity();
	re = &le->refEntity;

	velocity[0] = 60 - 120 * crandom();
	velocity[1] = 40 - 80 * crandom();
	velocity[2] = 100 - 200 * crandom();

	le->leType = LE_MOVE_SCALE_FADE;
	le->leFlags = LEF_TUMBLE;
	le->leBounceSoundType = LEBS_NONE;
	le->leMarkType = LEMT_NONE;

	le->startTime = cg.time;
	le->endTime = le->startTime + 600;

	le->pos.trType = TR_GRAVITY;
	le->pos.trTime = cg.time;

	AnglesToAxis( cent->lerpAngles, v );

	offset[0] = 2;
	offset[1] = 2;
	offset[2] = 2;

	xoffset[0] = offset[0] * v[0][0] + offset[1] * v[1][0] + offset[2] * v[2][0];
	xoffset[1] = offset[0] * v[0][1] + offset[1] * v[1][1] + offset[2] * v[2][1];
	xoffset[2] = offset[0] * v[0][2] + offset[1] * v[1][2] + offset[2] * v[2][2];

	VectorAdd( origin, xoffset, re->origin );
	VectorCopy( re->origin, le->pos.trBase );

	if ( CG_PointContents( re->origin, -1 ) & CONTENTS_WATER ) {
		waterScale = 0.10f;
	}

	xvelocity[0] = velocity[0] * v[0][0] + velocity[1] * v[1][0] + velocity[2] * v[2][0];
	xvelocity[1] = velocity[0] * v[0][1] + velocity[1] * v[1][1] + velocity[2] * v[2][1];
	xvelocity[2] = velocity[0] * v[0][2] + velocity[1] * v[1][2] + velocity[2] * v[2][2];
	VectorScale( xvelocity, waterScale, le->pos.trDelta );

	AxisCopy( axisDefault, re->axis );
    re->shaderTime = cg.time / 1000.0f;
    re->reType = RT_SPRITE;
    re->radius = 0.25f;
	re->customShader = cgs.media.railRingsShader;
	le->bounceFactor = 0.3f;

    re->shaderRGBA[0] = wi->flashDlightColor[0] * 63;
    re->shaderRGBA[1] = wi->flashDlightColor[1] * 63;
    re->shaderRGBA[2] = wi->flashDlightColor[2] * 63;
    re->shaderRGBA[3] = 63;

    le->color[0] = wi->flashDlightColor[0] * 0.2;
    le->color[1] = wi->flashDlightColor[1] * 0.2;
    le->color[2] = wi->flashDlightColor[2] * 0.2;
    le->color[3] = 0.25f;

	le->angles.trType = TR_LINEAR;
	le->angles.trTime = cg.time;
	le->angles.trBase[0] = rand()&31;
	le->angles.trBase[1] = rand()&31;
	le->angles.trBase[2] = rand()&31;
	le->angles.trDelta[0] = 1;
	le->angles.trDelta[1] = 0.5;
	le->angles.trDelta[2] = 0;

}
*/

/*
==========================
CG_GrappleTrail
==========================
*/
void CG_GrappleTrail(centity_t * ent, const weaponInfo_t * wi)
{
	vec3_t origin;
	entityState_t *es;
	vec3_t forward, up;
	refEntity_t beam;

	es = &ent->currentState;

	CG_EvaluateTrajectory(&es->pos, cg.time, origin);
	ent->trailTime = cg.time;

	memset(&beam, 0, sizeof(beam));
	//FIXME adjust for muzzle position
	VectorCopy(cg_entities[ent->currentState.otherEntityNum].lerpOrigin, beam.origin);
	beam.origin[2] += 26;
	AngleVectors(cg_entities[ent->currentState.otherEntityNum].lerpAngles, forward, NULL, up);
	VectorMA(beam.origin, -6, up, beam.origin);
	VectorCopy(origin, beam.oldorigin);

	if (Distance(beam.origin, beam.oldorigin) < 64)
		return;		// Don't draw if close

	beam.reType = RT_LIGHTNING;
	beam.customShader = cgs.media.lightningShader;

	AxisClear(beam.axis);
	beam.shaderRGBA[0] = 0xff;
	beam.shaderRGBA[1] = 0xff;
	beam.shaderRGBA[2] = 0xff;
	beam.shaderRGBA[3] = 0xff;
	trap_R_AddRefEntityToScene(&beam);
}

/*
==========================
CG_GrenadeTrail
JBravo: not used
==========================
*/
/*
static void CG_GrenadeTrail( centity_t *ent, const weaponInfo_t *wi ) {
	CG_RocketTrail( ent, wi );
}
*/

/*
=================
CG_RegisterWeapon

The server says this item is used on this level
=================
*/
void CG_RegisterWeapon(int weaponNum)
{
	weaponInfo_t *weaponInfo;
	gitem_t *item, *ammo;
	char path[MAX_QPATH];
	vec3_t mins, maxs;

	// QUARANTINE - Weapon Animations - Added Variable
	char filename[MAX_QPATH];	//Used to open animation.cfg files
	char mname[MAX_QPATH];
	char md3name[MAX_QPATH];
	char newname[MAX_QPATH];
	char newicon[MAX_QPATH];
//	char teststuff[MAX_QPATH];
	// END

	int i;
	qboolean weapAnimLoad = qtrue;

	weaponInfo = &cg_weapons[weaponNum];

	if (weaponNum == 0) {
		return;
	}

	if (weaponInfo->registered) {
		return;
	}

	memset(weaponInfo, 0, sizeof(*weaponInfo));
	weaponInfo->registered = qtrue;

	for (item = bg_itemlist + 1; item->classname; item++) {
		if (item->giType == IT_WEAPON && item->giTag == weaponNum) {
			weaponInfo->item = item;
			break;
		}
	}
	if (!item->classname) {
		CG_Error("Couldn't find weapon %i", weaponNum);
	}
	CG_RegisterItemVisuals(item - bg_itemlist);
	strcpy(mname,item->world_model[0]+16);
	mname[strstr(mname,"/")-mname] = '\0';
	strcpy(md3name,item->world_model[0]+16+strlen(mname)+1);
	//CG_Printf("Weapon: (%s) (%s) (%s) (%s)\n",mname, md3name,item->icon, item->world_model[0]);
	// load cmodel before model so filecache works
	if (!strcmp(mname,"knife"))
	{
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_knife.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_knife.string) + 13, "icons/iconw_%s",cg_rq3_knife.string);
	}
	else if (!strcmp(mname,"mk23"))
	{
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_mk23.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_mk23.string) + 13, "icons/iconw_%s",cg_rq3_mk23.string);
	}
	else if (!strcmp(mname,"m4"))
	{
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_m4.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_m4.string) + 13, "icons/iconw_%s",cg_rq3_m4.string);
	}
	else if (!strcmp(mname,"ssg3000"))
	{
		Com_Printf("hmm: (%s)\n",md3name);
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_ssg3000.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_ssg3000.string) + 13, "icons/iconw_%s",cg_rq3_ssg3000.string);
	}
	else if (!strcmp(mname,"mp5"))
	{
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_mp5.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_mp5.string) + 13, "icons/iconw_%s",cg_rq3_mp5.string);
	}
	else if (!strcmp(mname,"handcannon"))
	{
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_handcannon.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_handcannon.string) + 13, "icons/iconw_%s",cg_rq3_handcannon.string);
	}
	else if (!strcmp(mname,"m3"))
	{
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_m3.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_m3.string) + 13, "icons/iconw_%s",cg_rq3_m3.string);
	}
	else if (!strcmp(mname,"akimbo"))
	{
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_akimbo.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_akimbo.string) + 13, "icons/iconw_%s",cg_rq3_akimbo.string);
	}
	else if (!strcmp(mname,"grenade"))
	{
		Com_sprintf(newname,MAX_QPATH,"models/weapons2/%s/%s",cg_rq3_grenade.string,md3name);
		Com_sprintf(newicon,strlen(cg_rq3_grenade.string) + 13, "icons/iconw_%s",cg_rq3_grenade.string);
	}
	//Com_Printf("Loading (%s) instead of (%s)\n",newname,item->world_model[0]);
	weaponInfo->weaponModel = trap_R_RegisterModel(newname);

	// calc midpoint for rotation
	trap_R_ModelBounds(weaponInfo->weaponModel, mins, maxs);
	for (i = 0; i < 3; i++) {
		weaponInfo->weaponMidpoint[i] = mins[i] + 0.5 * (maxs[i] - mins[i]);
	}

	weaponInfo->weaponIcon = trap_R_RegisterShader(newicon);
	weaponInfo->ammoIcon = trap_R_RegisterShader(newicon);

	for (ammo = bg_itemlist + 1; ammo->classname; ammo++) {
		if (ammo->giType == IT_AMMO && ammo->giTag == weaponNum) {
			break;
		}
		//Elder: hack for handcannon to use M3 ammo icon
		else if (weaponNum == WP_HANDCANNON && ammo->giType == IT_AMMO && ammo->giTag == WP_M3) {
			break;
		}
		//Elder: hack for akimbos to use MK23 ammo icon
		else if (weaponNum == WP_AKIMBO && ammo->giType == IT_AMMO && ammo->giTag == WP_PISTOL) {
			break;
		}
	}
	if (ammo->classname && ammo->world_model[0]) {
		weaponInfo->ammoModel = trap_R_RegisterModel(ammo->world_model[0]);
		//Elder: added
		weaponInfo->ammoIcon = trap_R_RegisterShader(ammo->icon);
	}

	strcpy(path, newname);
	COM_StripExtension(path, path);
	strcat(path, "_flash.md3");
	weaponInfo->flashModel = trap_R_RegisterModel(path);

	strcpy(path, newname);
	COM_StripExtension(path, path);
	strcat(path, "_barrel.md3");
	weaponInfo->barrelModel = trap_R_RegisterModel(path);

	strcpy(path, newname);
	COM_StripExtension(path, path);
	strcat(path, "_hand.md3");
	weaponInfo->handsModel = trap_R_RegisterModel(path);

	//Elder: added to cache 1st-person models
	strcpy(path, newname);
	COM_StripExtension(path, path);
	strcat(path, "_1st.md3");
	weaponInfo->firstModel = trap_R_RegisterModel(path);

	if (!weaponInfo->handsModel) {
		weaponInfo->handsModel = trap_R_RegisterModel("models/weapons2/shotgun/shotgun_hand.md3");
	}
	//Elder: if no _1st model, point to the weaponModel... this may get funky :)
	if (!weaponInfo->firstModel) {
		// Added warning message
		CG_Printf(" ^3Warning: %s first-person model not found; using world model^7\n",
			  weaponInfo->item->pickup_name);
		weaponInfo->firstModel = weaponInfo->weaponModel;
	}

	weaponInfo->loopFireSound = qfalse;

	switch (weaponNum) {

		//Blaze: Reaction Pistol
	case WP_PISTOL:
		MAKERGB(weaponInfo->flashDlightColor, 1, 1, 0);
		weaponInfo->flashSound[0] = trap_S_RegisterSound("sound/weapons/mk23/mk23fire.wav", qfalse);
		weaponInfo->worldReloadSound[0] = trap_S_RegisterSound("sound/weapons/mk23/mk23reload.wav", qfalse);
		weaponInfo->ejectBrassFunc = CG_MachineGunEjectBrass;
		cgs.media.bulletExplosionShader = trap_R_RegisterShader("bulletExplosion");

		// Load the animation information
		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_mk23.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
			weapAnimLoad = qfalse;
		}
		// Load sound information -- ALWAYS DO THIS AFTER THE ANIMATION
		if (weapAnimLoad) {
			Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/sound.cfg",cg_rq3_mk23.string);
			if (!CG_ParseWeaponSoundFile(filename, weaponInfo)) {
				Com_Printf("Failed to load weapon sound file %s\n", filename);
			}
		} else {
			Com_Printf("Could not load sound.cfg because animation.cfg loading failed\n");
		}

		break;

	case WP_KNIFE:
		MAKERGB(weaponInfo->flashDlightColor, 1, 0.70f, 0);
		weaponInfo->flashSound[0] = trap_S_RegisterSound("sound/weapons/knife/slash.wav", qfalse);
		weaponInfo->missileModel = trap_R_RegisterModel(va("models/weapons2/%s/knife.md3",cg_rq3_knife.string));

		// Load the animation information
		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_knife.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
			weapAnimLoad = qfalse;
		}
		//weaponInfo->missileTrailFunc = CG_GrenadeTrail;
		//cgs.media.grenadeExplosionShader = trap_R_RegisterShader( "grenadeExplosion" );
		//weaponInfo->wiTrailTime = 700;
		//weaponInfo->trailRadius = 32;
		break;

	case WP_M4:
		//Elder: added
		MAKERGB(weaponInfo->flashDlightColor, 1, 1, 0);
		weaponInfo->flashSound[0] = trap_S_RegisterSound("sound/weapons/m4/m4fire.wav", qfalse);
		weaponInfo->worldReloadSound[0] = trap_S_RegisterSound("sound/weapons/m4/m4reload.wav", qfalse);
		weaponInfo->ejectBrassFunc = CG_MachineGunEjectBrass;
		cgs.media.bulletExplosionShader = trap_R_RegisterShader("bulletExplosion");

		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_m4.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
			weapAnimLoad = qfalse;
		}

		if (weapAnimLoad) {
			Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/sound.cfg",cg_rq3_m4.string);
			if (!CG_ParseWeaponSoundFile(filename, weaponInfo)) {
				Com_Printf("Failed to load weapon sound file %s\n", filename);
			}
		} else {
			Com_Printf("Could not load sound.cfg because animation.cfg loading failed\n");
		}

		break;

	case WP_SSG3000:
		//Elder: added
		MAKERGB(weaponInfo->flashDlightColor, 1, 0.5f, 0);
		weaponInfo->flashSound[0] = trap_S_RegisterSound("sound/weapons/ssg3000/ssgfire.wav", qfalse);
		weaponInfo->worldReloadSound[0] = trap_S_RegisterSound("sound/weapons/ssg3000/ssgbolt.wav", qfalse);
		weaponInfo->worldReloadSound[1] = trap_S_RegisterSound("sound/weapons/ssg3000/ssgin.wav", qfalse);
		weaponInfo->worldReloadSound[2] = trap_S_RegisterSound("sound/weapons/ssg3000/ssgbolt.wav", qfalse);
		weaponInfo->ejectBrassFunc = CG_MachineGunEjectBrass;
		cgs.media.bulletExplosionShader = trap_R_RegisterShader("bulletExplosion");
		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_ssg3000.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
		}
		// Load sound information -- ALWAYS DO THIS AFTER THE ANIMATION
		if (weapAnimLoad) {
			Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/sound.cfg",cg_rq3_ssg3000.string);
			if (!CG_ParseWeaponSoundFile(filename, weaponInfo)) {
				Com_Printf("Failed to load weapon sound file %s\n", filename);
			}
		} else {
			Com_Printf("Could not load sound.cfg because animation.cfg loading failed\n");
		}
		break;

	case WP_MP5:
		//Elder: added
		MAKERGB(weaponInfo->flashDlightColor, 1, 0.75f, 0);
		weaponInfo->flashSound[0] = trap_S_RegisterSound("sound/weapons/mp5/mp5fire.wav", qfalse);
		weaponInfo->worldReloadSound[0] = trap_S_RegisterSound("sound/weapons/mp5/mp5reload.wav", qfalse);
		weaponInfo->ejectBrassFunc = CG_MachineGunEjectBrass;
		cgs.media.bulletExplosionShader = trap_R_RegisterShader("bulletExplosion");

		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_mp5.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
			weapAnimLoad = qfalse;
		}

		if (weapAnimLoad) {
			Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/sound.cfg",cg_rq3_mp5.string);
			if (!CG_ParseWeaponSoundFile(filename, weaponInfo)) {
				Com_Printf("Failed to load weapon sound file %s\n", filename);
			}
		} else {
			Com_Printf("Could not load sound.cfg because animation.cfg loading failed\n");
		}
		break;

	case WP_HANDCANNON:
		//Elder: added
		MAKERGB(weaponInfo->flashDlightColor, 1, 1, 0);
		//Elder: changed to hcfire from cannon_fire
		weaponInfo->flashSound[0] = trap_S_RegisterSound("sound/weapons/handcannon/hcfire.wav", qfalse);
		weaponInfo->worldReloadSound[0] = trap_S_RegisterSound("sound/weapons/handcannon/hcreload.wav", qfalse);
		weaponInfo->ejectBrassFunc = CG_ShotgunEjectBrass;
		cgs.media.bulletExplosionShader = trap_R_RegisterShader("bulletExplosion");

		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_handcannon.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
			weapAnimLoad = qfalse;
		}

		if (weapAnimLoad) {
			Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/sound.cfg",cg_rq3_handcannon.string);
			if (!CG_ParseWeaponSoundFile(filename, weaponInfo)) {
				Com_Printf("Failed to load weapon sound file %s\n", filename);
			}
		} else {
			Com_Printf("Could not load sound.cfg because animation.cfg loading failed\n");
		}

		break;

	case WP_M3:
		MAKERGB(weaponInfo->flashDlightColor, 1, 1, 0);
		weaponInfo->flashSound[0] = trap_S_RegisterSound("sound/weapons/m3/m3fire.wav", qfalse);
		weaponInfo->worldReloadSound[1] = trap_S_RegisterSound("sound/weapons/m3/m3in.wav", qfalse);
		weaponInfo->ejectBrassFunc = CG_ShotgunEjectBrass;

		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_m3.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
			weapAnimLoad = qfalse;
		}

		if (weapAnimLoad) {
			Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/sound.cfg",cg_rq3_m3.string);
			if (!CG_ParseWeaponSoundFile(filename, weaponInfo)) {
				Com_Printf("Failed to load weapon sound file %s\n", filename);
			}
		} else {
			Com_Printf("Could not load sound.cfg because animation.cfg loading failed\n");
		}

		break;

	case WP_AKIMBO:
		//Elder: added
		MAKERGB(weaponInfo->flashDlightColor, 1, 1, 0.5f);
		// Elder: no more pseudo-dual sound needed :)
		weaponInfo->flashSound[0] = trap_S_RegisterSound("sound/weapons/mk23/mk23fire.wav", qfalse);
		weaponInfo->worldReloadSound[0] = trap_S_RegisterSound("sound/weapons/akimbo/akimboreload.wav", qfalse);
		weaponInfo->ejectBrassFunc = CG_MachineGunEjectBrass;
		cgs.media.bulletExplosionShader = trap_R_RegisterShader("bulletExplosion");
		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_akimbo.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
			weapAnimLoad = qfalse;
		}
		// Load sound information -- ALWAYS DO THIS AFTER THE ANIMATION
		if (weapAnimLoad) {
			Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/sound.cfg",cg_rq3_akimbo.string);
			if (!CG_ParseWeaponSoundFile(filename, weaponInfo)) {
				Com_Printf("Failed to load weapon sound file %s\n", filename);
			}
		} else {
			Com_Printf("Could not load sound.cfg because animation.cfg loading failed\n");
		}

		break;

	case WP_GRENADE:
		//Use the projectile model
		weaponInfo->missileModel = trap_R_RegisterModel("models/weapons2/grenade/gren_projectile.md3");
		//Elder: removed smoke for the last time! :)
		//weaponInfo->missileTrailFunc = CG_GrenadeTrail;
		weaponInfo->wiTrailTime = 700;
		weaponInfo->trailRadius = 32;
		MAKERGB(weaponInfo->flashDlightColor, 1, 0.70f, 0);
		//weaponInfo->flashSound[0] = trap_S_RegisterSound( "sound/weapons/grenade/gren_throw.wav", qfalse );
		//Blaze: Make sure we load this as we may have exploding crates
		//cgs.media.grenadeExplosionShader = trap_R_RegisterShader( "grenadeExplosion" );

		// Load the animation information
		Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/animation.cfg",cg_rq3_grenade.string);
		if (!CG_ParseWeaponAnimFile(filename, weaponInfo)) {
			Com_Printf("Failed to load weapon animation file %s\n", filename);
			weapAnimLoad = qfalse;
		}
		// Load sound information -- ALWAYS DO THIS AFTER THE ANIMATION
		if (weapAnimLoad) {
			Com_sprintf(filename, sizeof(filename), "models/weapons2/%s/sound.cfg",cg_rq3_grenade.string);
			if (!CG_ParseWeaponSoundFile(filename, weaponInfo)) {
				Com_Printf("Failed to load weapon sound file %s\n", filename);
			}
		} else {
			Com_Printf("Could not load sound.cfg because animation.cfg loading failed\n");
		}
		break;

	default:
		//MAKERGB( weaponInfo->flashDlightColor, 1, 1, 1 );
		//weaponInfo->flashSound[0] = trap_S_RegisterSound( "sound/weapons/rocket/rocklf1a.wav", qfalse );
		break;
	}
}

/*
=================
CG_RegisterItemVisuals

The server says this item is used on this level
=================
*/
void CG_RegisterItemVisuals(int itemNum)
{
	itemInfo_t *itemInfo;
	gitem_t *item;

	itemInfo = &cg_items[itemNum];
	if (itemInfo->registered) {
		return;
	}

	item = &bg_itemlist[itemNum];

	memset(itemInfo, 0, sizeof(&itemInfo));
	itemInfo->registered = qtrue;
	
	itemInfo->models[0] = trap_R_RegisterModel(item->world_model[0]);

	itemInfo->icon = trap_R_RegisterShader(item->icon);

	if (item->giType == IT_WEAPON) {
		CG_RegisterWeapon(item->giTag);
	}
	//
	// powerups have an accompanying ring or sphere
	//
	if (item->giType == IT_POWERUP || item->giType == IT_HEALTH ||
	    item->giType == IT_ARMOR || item->giType == IT_HOLDABLE) {
		if (item->world_model[1]) {
			itemInfo->models[1] = trap_R_RegisterModel(item->world_model[1]);
		}
	}
}

/*
========================================================================================

VIEW WEAPON

========================================================================================
*/

/*
=================
CG_MapTorsoToWeaponFrame
// JBravo: not used.
=================
*/
/*
static int CG_MapTorsoToWeaponFrame( clientInfo_t *ci, int frame ) {

	// change weapon
	if ( frame >= ci->animations[TORSO_DROP].firstFrame
		&& frame < ci->animations[TORSO_DROP].firstFrame + 9 ) {
		return frame - ci->animations[TORSO_DROP].firstFrame + 6;
	}

	// stand attack
	if ( frame >= ci->animations[TORSO_ATTACK].firstFrame
		&& frame < ci->animations[TORSO_ATTACK].firstFrame + 6 ) {
		return 1 + frame - ci->animations[TORSO_ATTACK].firstFrame;
	}

	// stand attack 2
	if ( frame >= ci->animations[TORSO_ATTACK2].firstFrame
		&& frame < ci->animations[TORSO_ATTACK2].firstFrame + 6 ) {
		return 1 + frame - ci->animations[TORSO_ATTACK2].firstFrame;
	}

	return 0;
}
*/

/*
==============
CG_CalculateWeaponPosition
==============
*/
static void CG_CalculateWeaponPosition(vec3_t origin, vec3_t angles)
{
	float scale;
	int delta;
	float fracsin;

	VectorCopy(cg.refdef.vieworg, origin);
	VectorCopy(cg.refdefViewAngles, angles);

	// on odd legs, invert some angles
	if (cg.bobcycle & 1) {
		scale = -cg.xyspeed;
	} else {
		scale = cg.xyspeed;
	}

	// gun angles from bobbing
	angles[ROLL] += scale * cg.bobfracsin * 0.005;
	angles[YAW] += scale * cg.bobfracsin * 0.01;
	angles[PITCH] += cg.xyspeed * cg.bobfracsin * 0.005;

	// drop the weapon when landing
	delta = cg.time - cg.landTime;
	if (delta < LAND_DEFLECT_TIME) {
		origin[2] += cg.landChange * 0.25 * delta / LAND_DEFLECT_TIME;
	} else if (delta < LAND_DEFLECT_TIME + LAND_RETURN_TIME) {
		origin[2] += cg.landChange * 0.25 * (LAND_DEFLECT_TIME + LAND_RETURN_TIME - delta) / LAND_RETURN_TIME;
	}
#if 0
	// drop the weapon when stair climbing
	delta = cg.time - cg.stepTime;
	if (delta < STEP_TIME / 2) {
		origin[2] -= cg.stepChange * 0.25 * delta / (STEP_TIME / 2);
	} else if (delta < STEP_TIME) {
		origin[2] -= cg.stepChange * 0.25 * (STEP_TIME - delta) / (STEP_TIME / 2);
	}
#endif

	// idle drift
	scale = cg.xyspeed + 40;
	fracsin = sin(cg.time * 0.001);
	angles[ROLL] += scale * fracsin * 0.01;
	angles[YAW] += scale * fracsin * 0.01;
	angles[PITCH] += scale * fracsin * 0.01;
}

/*
===============
CG_LightningBolt

Origin will be the exact tag point, which is slightly
different than the muzzle point used for determining hits.
The cent should be the non-predicted cent if it is from the player,
so the endpoint will reflect the simulated strike (lagging the predicted
angle)

NiceAss; I've torn this function up with testing... ignore it =P
===============
*/
/*
static void CG_LightningBolt( centity_t *cent, vec3_t origin ) {
	trace_t		trace;
	refEntity_t		beam;
	vec3_t			forward;
	vec3_t			muzzlePoint, endPoint;
	centity_t		*client;
//Blaze: LG No longer exists
//	if ( cent->currentState.weapon != WP_LIGHTNING ) {
//		return;
//	}

	memset( &beam, 0, sizeof( beam ) );
	//client = &cg_entities[cg.predictedPlayerState.clientNum];

	//CG_Printf("%d \n", cg.predictedPlayerState.clientNum);

	// find muzzle point for this frame
	//CG_EvaluateTrajectory( &cent->currentState.apos, cg.time, cent->lerpAngles );
	AngleVectors( cent->lerpAngles, forward, NULL, NULL );

	// project forward by the lightning range
	VectorMA( muzzlePoint, 8192, forward, endPoint );

	// see if it hit a wall
	CG_Trace( &trace, muzzlePoint, vec3_origin, vec3_origin, endPoint,
		cent->currentState.number, MASK_SHOT );

	// this is the endpoint
	VectorCopy( trace.endpos, beam.oldorigin );

	// use the provided origin, even though it may be slightly
	// different than the muzzle origin
	VectorCopy( origin, beam.origin );

	beam.reType = RT_LIGHTNING;
	beam.customShader = cgs.media.lightningShader;
	trap_R_AddRefEntityToScene( &beam );

	// add the impact flare if it hit something
	if ( trace.fraction < 1.0 ) {

	}
}
*/

/*
===============
CG_SpawnRailTrail

Origin will be the exact tag point, which is slightly
different than the muzzle point used for determining hits.
===============
*/
// JBravo: not used.
/*
static void CG_SpawnRailTrail( centity_t *cent, vec3_t origin ) {
	clientInfo_t	*ci;

	//Blaze: No more rail gun
	//if ( cent->currentState.weapon != WP_RAILGUN ) {
	//	return;
	//}
	if ( !cent->pe.railgunFlash ) {
		return;
	}
	cent->pe.railgunFlash = qtrue;
	ci = &cgs.clientinfo[ cent->currentState.clientNum ];
	//Blaze: No Rail Trail
	//CG_RailTrail( ci, origin, cent->pe.railgunImpact );
}
*/

/*
======================
CG_MachinegunSpinAngle
======================
*/
// JBravo: not used.
/*
#define		SPIN_SPEED	0.9
#define		COAST_TIME	1000
static float	CG_MachinegunSpinAngle( centity_t *cent ) {
	int		delta;
	float	angle;
	float	speed;

	delta = cg.time - cent->pe.barrelTime;
	if ( cent->pe.barrelSpinning ) {
		angle = cent->pe.barrelAngle + delta * SPIN_SPEED;
	} else {
		if ( delta > COAST_TIME ) {
			delta = COAST_TIME;
		}

		speed = 0.5 * ( SPIN_SPEED + (float)( COAST_TIME - delta ) / COAST_TIME );
		angle = cent->pe.barrelAngle + delta * speed;
	}

	if ( cent->pe.barrelSpinning == !(cent->currentState.eFlags & EF_FIRING) ) {
		cent->pe.barrelTime = cg.time;
		cent->pe.barrelAngle = AngleMod( angle );
		cent->pe.barrelSpinning = !!(cent->currentState.eFlags & EF_FIRING);
	}

	return angle;
}
*/

/*
========================
CG_AddWeaponWithPowerups
========================
*/
static void CG_AddWeaponWithPowerups(refEntity_t * gun, int powerups)
{
	trap_R_AddRefEntityToScene(gun);
}

/*
=============
CG_AddPlayerWeapon

Used for both the view weapon (ps is valid) and the world modelother character models (ps is NULL)
The main player will have this called for BOTH cases, so effects like light and
sound should only be done on the world model case.
=============
*/
void CG_AddPlayerWeapon(refEntity_t * parent, playerState_t * ps, centity_t * cent, int team)
{
	refEntity_t gun;

//      Blaze: Can remove this because no more spinning barrel
//      refEntity_t     barrel;
	refEntity_t flash;
	refEntity_t silencer, laser;
	vec3_t angles;
	weapon_t weaponNum;
	weaponInfo_t *weapon;
	centity_t *nonPredictedCent;
	localEntity_t *shell = NULL;

	weaponNum = cent->currentState.weapon;

	CG_RegisterWeapon(weaponNum);
	weapon = &cg_weapons[weaponNum];

	// add the weapon
	memset(&gun, 0, sizeof(gun));
	VectorCopy(parent->lightingOrigin, gun.lightingOrigin);
	gun.shadowPlane = parent->shadowPlane;
	gun.renderfx = parent->renderfx;

	// set custom shading for railgun refire rate
	//if ( ps ) {
	//Blaze: No Railgun
	//if ( cg.predictedPlayerState.weapon == WP_RAILGUN
	//      && cg.predictedPlayerState.weaponstate == WEAPON_FIRING ) {
	//      float   f;

	//      f = (float)cg.predictedPlayerState.weaponTime / 1500;
	//      gun.shaderRGBA[1] = 0;
	//      gun.shaderRGBA[0] =
	//      gun.shaderRGBA[2] = 255 * ( 1.0 - f );
	//} else {
	gun.shaderRGBA[0] = 255;
	gun.shaderRGBA[1] = 255;
	gun.shaderRGBA[2] = 255;
	gun.shaderRGBA[3] = 255;
	//}
	//}
	if (ps == NULL) {
		//Elder: We are in third person, use the third-person model (DEFAULT)
		gun.hModel = weapon->weaponModel;
	} else {
		//Elder: we are in first-person, use the first-person (NOT default) model
		gun.hModel = weapon->firstModel;
	}

	if (!gun.hModel) {
		return;
	}

	if (!ps) {
		// add weapon ready sound
		cent->pe.lightningFiring = qfalse;
		if ((cent->currentState.eFlags & EF_FIRING) && weapon->firingSound) {
			// lightning gun and guantlet make a different sound when fire is held down
			trap_S_AddLoopingSound(cent->currentState.number, cent->lerpOrigin, vec3_origin,
					       weapon->firingSound);
			cent->pe.lightningFiring = qtrue;
		} else if (weapon->readySound) {
			trap_S_AddLoopingSound(cent->currentState.number, cent->lerpOrigin, vec3_origin,
					       weapon->readySound);
		}
	}
	//if (ps == NULL)
	//{
	/*      resizing code
	   msec = cg.time - cent->miscTime;
	   if ( msec >= 0 && msec < ITEM_SCALEUP_TIME ) {
	   frac = (float)msec / ITEM_SCALEUP_TIME;
	   VectorScale( ent.axis[0], frac, ent.axis[0] );
	   VectorScale( ent.axis[1], frac, ent.axis[1] );
	   VectorScale( ent.axis[2], frac, ent.axis[2] );
	   ent.nonNormalizedAxes = qtrue;
	   } else {
	   frac = 1.0;
	   }
	 */
	//Elder: shouldn't have to do this anymore
	/*
	   if (weaponNum == 4)//Blaze: Scale the Sniper Rifle down a bit
	   {
	   frac = 0.8f;
	   VectorScale(parent->axis[0], frac, parent->axis[0]);
	   //VectorScale(parent->axis[1], frac, parent->axis[1]);
	   //VectorScale(parent->axis[2], frac, parent->axis[2]);
	   }
	 */

	//}
	if (!ps) {
		CG_PositionEntityOnTag(&gun, parent, parent->hModel, "tag_weapon");
	} else {
		CG_WeaponAnimation(cent, &gun.oldframe, &gun.frame, &gun.backlerp);
		CG_PositionWeaponOnTag(&gun, parent, parent->hModel, "tag_weapon");

		// Elder: Local sound events will sync perfectly here
		// However, we must remember to ignore the ones pmove will generate
		// (for other clients to hear) or we'll get some nasty echo

		// Temp hack because it isn't fully implemented
		if (weapon->item->giTag == WP_PISTOL ||
		    weapon->item->giTag == WP_AKIMBO ||
		    weapon->item->giTag == WP_M4 ||
		    weapon->item->giTag == WP_MP5 ||
		    weapon->item->giTag == WP_M3 ||
		    weapon->item->giTag == WP_HANDCANNON ||
		    weapon->item->giTag == WP_SSG3000 || weapon->item->giTag == WP_GRENADE) {
			int i = 0;
			qboolean noSound = qfalse;

			while (gun.frame != weapon->animationSounds->sfxInfo[i].frame) {
				if (++i == weapon->animationSounds->numFrames) {
					noSound = qtrue;
					break;
				}
			}

			// reset the current sound
			if (cg.curSyncSound.played && cg.curSyncSound.frame != gun.frame)
				cg.curSyncSound.played = qfalse;

			if (!noSound) {
				// copy the struct to reset it
				if (cg.curSyncSound.frame != gun.frame)
					cg.curSyncSound = weapon->animationSounds->sfxInfo[i];

				if (cg.curSyncSound.played == qfalse) {
					cg.curSyncSound.played = qtrue;

					//CG_Printf("Playing a timed sound (%i %i %1.1f)\n", gun.frame, gun.oldframe, gun.backlerp);
					trap_S_StartLocalSound(cg.curSyncSound.sound, CHAN_WEAPON);
				}
			}
		}
	}

	// Elder: break off here so we still have weapon animations on bolt out
	// Elder: added ps so we see SSG in third-person zoomed
	if (cg.zoomed && ps)
		return;

// JBravo: Adding a fix from NiceAss (cg_drawgun affecting other player models)
	if (!cg_drawGun.integer && ps)
		return;

	CG_AddWeaponWithPowerups(&gun, cent->currentState.powerups);

	// add the spinning barrel
	//Blaze: No Spinning Barrel
	/*
	   if ( weapon->barrelModel ) {
	   memset( &barrel, 0, sizeof( barrel ) );
	   VectorCopy( parent->lightingOrigin, barrel.lightingOrigin );
	   barrel.shadowPlane = parent->shadowPlane;
	   barrel.renderfx = parent->renderfx;

	   barrel.hModel = weapon->barrelModel;
	   angles[YAW] = 0;
	   angles[PITCH] = 0;
	   angles[ROLL] = CG_MachinegunSpinAngle( cent );
	   AnglesToAxis( angles, barrel.axis );

	   CG_PositionRotatedEntityOnTag( &barrel, &gun, weapon->weaponModel, "tag_barrel" );

	   CG_AddWeaponWithPowerups( &barrel, cent->currentState.powerups );
	   } */

	// make sure we aren't looking at cg.predictedPlayerEntity for LG
	nonPredictedCent = &cg_entities[cent->currentState.clientNum];

	// if the index of the nonPredictedCent is not the same as the clientNum
	// then this is a fake player (like on teh single player podiums), so
	// go ahead and use the cent
	if ((nonPredictedCent - cg_entities) != cent->currentState.clientNum) {
		nonPredictedCent = cent;
	}
	// add the flash
	//Blaze: no more of these
	/*
	   if ( ( weaponNum == WP_LIGHTNING || weaponNum == WP_GAUNTLET || weaponNum == WP_GRAPPLING_HOOK )
	   && ( nonPredictedCent->currentState.eFlags & EF_FIRING ) )
	   {
	   // continuous flash
	   } else {
	   // impulse flash
	   if ( cg.time - cent->muzzleFlashTime > MUZZLE_FLASH_TIME && !cent->pe.railgunFlash ) {
	   return;
	   }
	   }
	 */

	//CG_LightningBolt( nonPredictedCent, parent->lightingOrigin );
	if (ps && (cg.snap->ps.stats[STAT_HOLDABLE_ITEM] & (1 << HI_SILENCER)) &&
	    (weaponNum == WP_PISTOL || weaponNum == WP_MP5 || weaponNum == WP_SSG3000)) {
		//Makro - wasn't initialized, caused a warning in MSVC
		vec3_t silencerEnd;
		float scale = 0.0f;
		vec3_t angles;

		if (weaponNum == WP_PISTOL)
			scale = 1.2f;
		if (weaponNum == WP_SSG3000)
			scale = 2.5f;
		if (weaponNum == WP_MP5)
			scale = 1.3f;

		memset(&silencer, 0, sizeof(silencer));
		silencer.hModel = cgs.media.rq3_silencerModel;
		silencer.shadowPlane = parent->shadowPlane;
		silencer.renderfx = parent->renderfx;

		angles[YAW] = 90;
		angles[PITCH] = 0;
		angles[ROLL] = 0;
		AnglesToAxis(angles, silencer.axis);

		VectorScale(silencer.axis[0], scale, silencer.axis[0]);
		VectorScale(silencer.axis[1], scale, silencer.axis[1]);
		VectorScale(silencer.axis[2], scale, silencer.axis[2]);

		CG_PositionRotatedOffsetEntityOnTag(&silencer, &gun, weapon->firstModel, "tag_silencer", vec3_origin);
		// Offset weapon
		VectorMA(silencer.origin, -7.2f, silencer.axis[1], silencer.origin);
		VectorMA(silencer.origin, 10.0f, silencer.axis[1], silencerEnd);
		silencer.nonNormalizedAxes = qtrue;

		CG_AddWeaponWithPowerups(&silencer, cent->currentState.powerups);

		// NiceAss: Add a puff of smoke at the end of the silencer when fired. Not alligned properly and looks bad.
		if (cent->muzzleFlashTime == -1) {
			localEntity_t	*smoke;
			vec3_t			up;

			// Move the puff over to center on silencer end.
			VectorMA(silencerEnd, 5, cg.refdef.viewaxis[1], silencerEnd);
			VectorMA(silencerEnd, 5, cg.refdef.viewaxis[2], silencerEnd);

			VectorSet(up, 0.0f, 0.0f, 15.0f);
			smoke = CG_SmokePuff( silencerEnd, up, 0.5f, 1, 1, 1, 0.5f, 300, cg.time, 0, 0, cgs.media.shotgunSmokePuffShader );
			smoke->leType = LE_SCALE_FADE;

			cent->muzzleFlashTime = 0;
		}
	}

	if (ps && (cg.snap->ps.stats[STAT_HOLDABLE_ITEM] & (1 << HI_LASER)) &&
	    (weaponNum == WP_PISTOL || weaponNum == WP_MP5 || weaponNum == WP_M4)) {
		float scale = 0.0f;
		vec3_t angles;

		if (weaponNum == WP_PISTOL)
			scale = 0.66f;
		if (weaponNum == WP_MP5)
			scale = 0.675f;
		if (weaponNum == WP_M4)
			scale = 0.79f;

		memset(&laser, 0, sizeof(laser));
		laser.hModel = cgs.media.rq3_laserModel;
		laser.shadowPlane = parent->shadowPlane;
		laser.renderfx = parent->renderfx;

		angles[YAW] = 90;
		angles[PITCH] = 0;
		angles[ROLL] = 0;
		AnglesToAxis(angles, laser.axis);

		VectorScale(laser.axis[0], scale, laser.axis[0]);
		VectorScale(laser.axis[1], scale, laser.axis[1]);
		VectorScale(laser.axis[2], scale, laser.axis[2]);

		CG_PositionRotatedOffsetEntityOnTag(&laser, &gun, weapon->firstModel, "tag_laser", vec3_origin);

		laser.nonNormalizedAxes = qtrue;
		CG_AddWeaponWithPowerups(&laser, cent->currentState.powerups);
	}

	// NiceAss: fix for brass ejecting on LCA
	if (cg.lca)
		cent->ejectBrassTime = 0;

	// NiceAss: Tag locations used for shell ejection
	// The handcannon hacks have ruined my beautiful code =(
	if (cg.time > cent->ejectBrassTime && cent->ejectBrassTime && weapon->ejectBrassFunc &&
	    (ps || cg.renderingThirdPerson || cent->currentState.number != cg.predictedPlayerState.clientNum)) {

		shell = weapon->ejectBrassFunc(cent);

		if (shell != NULL) {
			float speed = 1.0f;
			int axis1 = 0, axis2 = 0;

			if (ps) {
				if (weapon->item->giTag == WP_AKIMBO && !ps->stats[STAT_BURST])
					CG_PositionRotatedEntityOnTag(&shell->refEntity, &gun, gun.hModel,
								      "tag_shell2");
				else
					CG_PositionRotatedEntityOnTag(&shell->refEntity, &gun, gun.hModel, "tag_shell");
			} else {
				if (weapon->item->giTag == WP_AKIMBO && cg.akimboFlash)
					CG_PositionRotatedEntityOnTag(&shell->refEntity, &gun, gun.hModel,
								      "tag_shell2");
				else
					CG_PositionRotatedEntityOnTag(&shell->refEntity, &gun, gun.hModel, "tag_shell");

			}

			VectorCopy(shell->refEntity.origin, shell->pos.trBase);

			if (trap_CM_PointContents(shell->pos.trBase, 0) == CONTENTS_WATER)
				speed = 0.5f;

			if (weaponNum == WP_HANDCANNON) {
				speed = -speed;	// horrible hacks
				axis1 = 1;
			}

			vectoangles(shell->refEntity.axis[axis1], shell->angles.trBase);
			VectorScale(shell->refEntity.axis[axis2], 160 * speed, shell->pos.trDelta);
			VectorAdd(shell->pos.trDelta, cent->currentState.pos.trDelta, shell->pos.trDelta);
		}
		// All this code for a SECOND shell on the HC
		if (weaponNum == WP_HANDCANNON) {
			float speed = -1.0f;

			shell = weapon->ejectBrassFunc(cent);
			if (shell != NULL) {
				CG_PositionRotatedEntityOnTag(&shell->refEntity, &gun, gun.hModel, "tag_shell2");

				VectorCopy(shell->refEntity.origin, shell->pos.trBase);

				if (trap_CM_PointContents(shell->pos.trBase, 0) == CONTENTS_WATER)
					speed = -0.5f;

				vectoangles(shell->refEntity.axis[1], shell->angles.trBase);
				VectorScale(shell->refEntity.axis[0], 160 * speed, shell->pos.trDelta);
				VectorAdd(shell->pos.trDelta, cent->currentState.pos.trDelta, shell->pos.trDelta);
			}
		}

		cent->ejectBrassTime = 0;
	}


	if ( cent->currentState.number != cg.predictedPlayerState.clientNum ) {
		refEntity_t muzzle;
		memset(&muzzle, 0, sizeof(muzzle));
		CG_PositionEntityOnTag(&muzzle, &gun, weapon->weaponModel, "tag_flash");
		
		CG_DrawVisibleLaser(muzzle.origin, cent->currentState.clientNum, muzzle.axis[0]);
	}

	//Elder: re-added to fix loss of muzzle flashes!
	// impulse flash

	if (cg.time - cent->muzzleFlashTime > MUZZLE_FLASH_TIME && !cent->pe.railgunFlash) {
		return;
	}

	memset(&flash, 0, sizeof(flash));

	VectorCopy(parent->lightingOrigin, flash.lightingOrigin);
	flash.shadowPlane = parent->shadowPlane;
	flash.renderfx = parent->renderfx;

	flash.hModel = weapon->flashModel;
	if (!flash.hModel) {
		return;
	}

	angles[YAW] = 0;
	angles[PITCH] = 0;
	angles[ROLL] = crandom() * 10;
	AnglesToAxis(angles, flash.axis);

	// colorize the railgun blast
	//Blaze: No more railgun
	/*
	   if ( weaponNum == WP_RAILGUN ) {
	   clientInfo_t *ci;

	   ci = &cgs.clientinfo[ cent->currentState.clientNum ];
	   flash.shaderRGBA[0] = 255 * ci->color1[0];
	   flash.shaderRGBA[1] = 255 * ci->color1[1];
	   flash.shaderRGBA[2] = 255 * ci->color1[2];
	   }
	 */
	//Blaze: No flash
	//Elder: Yes flash - try this

	//Elder: add conditional here so the dlight is still drawn when cg_RQ3_flash is 0

	if (cg_RQ3_flash.integer) {
		if (ps) {
			float scale = 2.0f;

			if (ps->weapon == WP_M4) scale = 1.5f;

			// Elder: draw flash based on first-person view
			if (ps->weapon == WP_AKIMBO) {
				// choose tag for akimbos
				if (ps->stats[STAT_BURST])
					CG_PositionRotatedEntityOnTag(&flash, &gun, weapon->firstModel, "tag_flash");
				else
					CG_PositionRotatedEntityOnTag(&flash, &gun, weapon->firstModel, "tag_flash2");
			} else
				CG_PositionRotatedEntityOnTag(&flash, &gun, weapon->firstModel, "tag_flash");

			// Make flash larger to compensate for depth hack
			VectorScale(flash.axis[0], scale, flash.axis[0]);
			VectorScale(flash.axis[1], scale, flash.axis[1]);
			VectorScale(flash.axis[2], scale, flash.axis[2]);
			flash.nonNormalizedAxes = qtrue;
		} else {
			//Elder: draw flash based on 3rd-person view
			if (weapon->item->giTag == WP_AKIMBO) {
				// choose tag for akimbos
				if (cg.akimboFlash)
					CG_PositionRotatedEntityOnTag(&flash, &gun, weapon->weaponModel, "tag_flash");
				else
					CG_PositionRotatedEntityOnTag(&flash, &gun, weapon->weaponModel, "tag_flash2");
			} else
				CG_PositionRotatedEntityOnTag(&flash, &gun, weapon->weaponModel, "tag_flash");
		}
		trap_R_AddRefEntityToScene(&flash);
	} else {
		//Elder: crappy way to get the dlight working w/o the flash model
		if (ps || cg.renderingThirdPerson || cent->currentState.number != cg.predictedPlayerState.clientNum) {
			if (weapon->flashDlightColor[0] || weapon->flashDlightColor[1] || weapon->flashDlightColor[2]) {
				if (!cg_drawGun.value)
					trap_R_AddLightToScene(gun.origin, 300 + (rand() & 31),
							       weapon->flashDlightColor[0], weapon->flashDlightColor[1],
							       weapon->flashDlightColor[2]);
			}
		}
		return;
	}

	if (ps || cg.renderingThirdPerson || cent->currentState.number != cg.predictedPlayerState.clientNum) {
		// add lightning bolt
		//Blaze: No need for this

		// add rail trail
		//Blaze: no need for this
		//CG_SpawnRailTrail( cent, flash.origin );

		if (weapon->flashDlightColor[0] || weapon->flashDlightColor[1] || weapon->flashDlightColor[2]) {
			trap_R_AddLightToScene(flash.origin, 300 + (rand() & 31), weapon->flashDlightColor[0],
					       weapon->flashDlightColor[1], weapon->flashDlightColor[2]);
		}
	}
}

/*
==============
CG_AddViewWeapon

Add the weapon, and flash for the player's view
==============
*/
void CG_AddViewWeapon(playerState_t * ps)
{
	refEntity_t hand;
	centity_t *cent;

	//clientInfo_t  *ci;
	float fovOffset;
	vec3_t angles;
	weaponInfo_t *weapon;

	// remove this:
	//vec3_t                origin;

	//Blaze: Reaction vars for gun positions
	//float rxn_gunx, rxn_guny, rxn_gunz;

	//Slicer - Spect code for follow
	if (ps->persistant[PERS_TEAM] == TEAM_SPECTATOR && !(ps->pm_flags & PMF_FOLLOW)) {
		return;
	}

	if (ps->pm_type == PM_INTERMISSION) {
		return;
	}
	// no gun if in third person view or a camera is active
	//if ( cg.renderingThirdPerson || cg.cameraMode) {
	if (cg.renderingThirdPerson) {
		return;
	}
	// allow the gun to be completely removed
	// Elder: don't draw if throwing
//      if ( !cg_drawGun.integer || (cg.snap->ps.stats[STAT_RQ3] & RQ3_THROWWEAPON) == RQ3_THROWWEAPON) {
	//Blaze: removed cg_drawGun checks and moved into other code.
	if ((cg.snap->ps.stats[STAT_RQ3] & RQ3_THROWWEAPON) == RQ3_THROWWEAPON) {
//Blaze: Removed these
		if (cg.predictedPlayerState.eFlags & EF_FIRING) {
			// special hack for lightning gun...
			//VectorCopy( cg.refdef.vieworg, origin );
			//VectorMA( origin, -8, cg.refdef.viewaxis[2], origin );
			//CG_LightningBolt( &cg_entities[ps->clientNum], origin );
		}
		return;
	}
// Hawkins- don't draw gun if zoomed
// Elder: we'll break it off later because we still need to perform animation operations
	/*
	   if(cg.zoomed)
	   return;
	 */
	// don't draw if testing a gun model
	if (cg.testGun) {
		return;
	}
	// Elder: temporarily removed because we never used it anyways
	/*
	   //Blaze start: Reaction gun positioning
	   rxn_gunx = cg_gun_x.value;
	   rxn_guny = cg_gun_y.value;
	   rxn_gunz = cg_gun_z.value;
	   //Blaze: Gun xyz coords changes
	   switch(ps->weapon)
	   {
	   case WP_PISTOL:
	   rxn_gunx += 10;
	   break;
	   case WP_M4:
	   rxn_gunx += 10;
	   break;
	   case WP_SSG3000:
	   rxn_gunx += 10;
	   break;
	   case WP_AKIMBO:
	   rxn_gunx += 10;
	   }

	   if ((cg_RQ3_drawWeapon.integer > 1 ) && (cg_RQ3_drawWeapon.integer < 4 ))
	   {
	   rxn_guny = cg_gun_y.value + 4*(cg_RQ3_drawWeapon.integer-1);
	   }
	 */

	//Blaze end:

	// drop gun lower at higher fov
	if (cg_fov.integer > 90) {
		fovOffset = -0.2 * (cg_fov.integer - 90);
	} else {
		fovOffset = 0;
	}

	cent = &cg.predictedPlayerEntity;	// &cg_entities[cg.snap->ps.clientNum];
	CG_RegisterWeapon(ps->weapon);
	weapon = &cg_weapons[ps->weapon];

	memset(&hand, 0, sizeof(hand));

	// set up gun position
	CG_CalculateWeaponPosition(hand.origin, angles);
//Blaze start: reaction gun positioning
//      VectorMA( hand.origin, rxn_gunx, cg.refdef.viewaxis[0], hand.origin );
//      VectorMA( hand.origin, rxn_guny, cg.refdef.viewaxis[1], hand.origin );
//      VectorMA( hand.origin, (rxn_gunz + fovOffset), cg.refdef.viewaxis[2], hand.origin );
//Blaze end:

//Blaze: Use above code instead
//Elder: reused so Cloud can adjust the models manually
	VectorMA(hand.origin, cg_gun_x.value, cg.refdef.viewaxis[0], hand.origin);
	VectorMA(hand.origin, cg_gun_y.value, cg.refdef.viewaxis[1], hand.origin);
	VectorMA(hand.origin, (cg_gun_z.value + fovOffset), cg.refdef.viewaxis[2], hand.origin);

	AnglesToAxis(angles, hand.axis);

	//Elder: temp hack
	// map torso animations to weapon animations
	/*
	   if ( cg_gun_frame.integer ||
	   ps->weapon == WP_PISTOL ||
	   ps->weapon == WP_M3 ||
	   ps->weapon == WP_HANDCANNON ||
	   ps->weapon == WP_SSG3000 ||
	   ps->weapon == WP_M4 ||
	   ps->weapon == WP_MP5 ||
	   ps->weapon == WP_AKIMBO ||
	   ps->weapon == WP_GRENADE ||
	   ps->weapon == WP_KNIFE ) {
	 */
	// development tool
	hand.frame = hand.oldframe = cg_gun_frame.integer;
	hand.backlerp = 0;
	/*
	   } else {
	   // get clientinfo for animation map
	   ci = &cgs.clientinfo[ cent->currentState.clientNum ];
	   hand.frame = CG_MapTorsoToWeaponFrame( ci, cent->pe.torso.frame );
	   hand.oldframe = CG_MapTorsoToWeaponFrame( ci, cent->pe.torso.oldFrame );
	   hand.backlerp = cent->pe.torso.backlerp;
	   }
	 */

	hand.hModel = weapon->handsModel;
	hand.renderfx = RF_DEPTHHACK | RF_FIRST_PERSON | RF_MINLIGHT;

	// add everything onto the hand
	CG_AddPlayerWeapon(&hand, ps, &cg.predictedPlayerEntity, ps->persistant[PERS_TEAM]);
}

/*
==============================================================================

WEAPON SELECTION

==============================================================================
*/

/*
===================
CG_DrawWeaponSelect
===================
*/
void CG_DrawWeaponSelect(void)
{
	int i;
	int bits;
	int count;
	int x, y, w;
	char *name;
	float *color;

	// don't display if dead
	if (cg.predictedPlayerState.stats[STAT_HEALTH] <= 0) {
		return;
	}

	color = CG_FadeColor(cg.weaponSelectTime, WEAPON_SELECT_TIME);
	if (!color) {
		return;
	}
	trap_R_SetColor(color);

	// showing weapon select clears pickup item display, but not the blend blob
	cg.itemPickupTime = 0;

	// count the number of weapons owned
	bits = cg.snap->ps.stats[STAT_WEAPONS];
	count = 0;
	for (i = 1; i < 16; i++) {
		if (bits & (1 << i)) {
			count++;
		}
	}

	x = 320 - count * 20;
	y = 380;

	for (i = 1; i < 16; i++) {
		if (!(bits & (1 << i))) {
			continue;
		}

		CG_RegisterWeapon(i);

		// draw weapon icon
		CG_DrawPic(x, y, 32, 32, cg_weapons[i].weaponIcon);

		// draw selection marker
		if (i == cg.weaponSelect) {
			CG_DrawPic(x - 4, y - 4, 40, 40, cgs.media.selectShader);
		}
		// no ammo cross on top
//              if ( !cg.snap->ps.ammo[ i ] ) {
//                      CG_DrawPic( x, y, 32, 32, cgs.media.noammoShader );
//              }

		x += 40;
	}

	// draw the selected name
	if (cg_weapons[cg.weaponSelect].item) {
		name = cg_weapons[cg.weaponSelect].item->pickup_name;
		if (name) {
			w = CG_DrawStrlen(name) * BIGCHAR_WIDTH;
			x = (SCREEN_WIDTH - w) / 2;
			CG_DrawBigStringColor(x, y - 22, name, color);
		}
	}

	trap_R_SetColor(NULL);
}

/*
===============
CG_WeaponSelectable
===============
*/
static qboolean CG_WeaponSelectable(int i)
{
	//Elder: never switch to empty grenades/knives
	if (!cg.snap->ps.ammo[i] && (i == WP_GRENADE || i == WP_KNIFE)) {
		return qfalse;
	}
	//Blaze: Check the amount of clips too for the weapon rotate code
	//Elder: this won't work plus AQ2 lets you select empty weapons
	//if ( !cg.snap->ps.ammo[i] && !cg.snap->ps.stats[STAT_CLIPS] ) {
	//return qfalse;
	//}
	// JBravo: lets not allow switching to weapons other than pistol or knife if the player has a case
	if (cg.snap->ps.powerups[PW_BLUEFLAG] || cg.snap->ps.powerups[PW_REDFLAG]) {
		if (i != WP_PISTOL && i != WP_KNIFE)
			return qfalse;
	}
	if (!(cg.snap->ps.stats[STAT_WEAPONS] & (1 << i))) {
		return qfalse;
	}

	return qtrue;
}

/*
===============
CG_NextWeapon_f
===============
*/
void CG_NextWeapon_f(void)
{
	int i;
	int original;

	if (!cg.snap) {
		return;
	}
	if (cg.snap->ps.pm_flags & PMF_FOLLOW) {
		return;
	}
	// if we are going into the intermission, don't do anything
	if (cg.intermissionStarted) {
		return;
	}
	//Elder: added
//      if ( (cg.snap->ps.stats[STAT_RQ3] & RQ3_BANDAGE_WORK) == RQ3_BANDAGE_WORK) {
	if (cg.snap->ps.weaponstate == WEAPON_BANDAGING) {
		CG_Printf("You are too busy bandaging...\n");
		return;
	}
	//Elder: don't allow weapon switching when in the middle of bursts
	if (cg.snap->ps.stats[STAT_BURST] > 0)
		return;

	//Elder: in the middle of firing, reloading or weapon-switching
	/*
	   if (cg.snap->ps.weaponstate == WEAPON_RELOADING && cg.snap->ps.weaponTime > 0) {
	   return;
	   } */

	//Elder: added
	//cg.zoomed = qfalse;
	//cg.zoomLevel = 0;

	cg.weaponSelectTime = cg.time;
	original = cg.weaponSelect;

	for (i = 0; i < 16; i++) {
		cg.weaponSelect++;
		if (cg.weaponSelect == 16) {
			cg.weaponSelect = 0;
		}
		//Blaze: Allow full Cycle
		//if ( cg.weaponSelect == WP_GAUNTLET ) {
		//      continue;               // never cycle to gauntlet
		//}
		if (CG_WeaponSelectable(cg.weaponSelect)) {
			break;
		}
	}
	if (i == 16) {
		cg.weaponSelect = original;
	}
//Slicer: Done Server Side
	else {
//              CG_RQ3_Zoom1x();
		//Slicer lets call unzoom for SSG only
		if (original == WP_SSG3000)
			trap_SendClientCommand("unzoom");
	}
}

/*
===============
CG_PrevWeapon_f
===============
*/
void CG_PrevWeapon_f(void)
{
	int i;
	int original;

	if (!cg.snap) {
		return;
	}
	if (cg.snap->ps.pm_flags & PMF_FOLLOW) {
		return;
	}
// if we are going into the intermission, don't do anything
	if (cg.intermissionStarted) {
		return;
	}
	//Elder: added
// if ( (cg.snap->ps.stats[STAT_RQ3] & RQ3_BANDAGE_WORK) == RQ3_BANDAGE_WORK) {
	if (cg.snap->ps.weaponstate == WEAPON_BANDAGING) {
		CG_Printf("You are too busy bandaging...\n");
		return;
	}
	//Elder: don't allow weapon switching when in the middle of bursts
	if (cg.snap->ps.stats[STAT_BURST] > 0)
		return;

	//Elder: in the middle of firing, reloading or weapon-switching
	//cg.snap->ps.weaponstate == WEAPON_RELOADING when it's in
	/*
	   if (cg.snap->ps.weaponstate == WEAPON_RELOADING && cg.snap->ps.weaponTime > 0) {
	   return;
	   }
	 */

	//Elder: added
	//cg.zoomed = qfalse;
	//cg.zoomLevel = 0;

	cg.weaponSelectTime = cg.time;
	original = cg.weaponSelect;

	for (i = 0; i < 16; i++) {
		cg.weaponSelect--;
		if (cg.weaponSelect == -1) {
			cg.weaponSelect = 15;
		}
		//Blaze: Allow full Cycle
		//if ( cg.weaponSelect == WP_GAUNTLET ) {
		//      continue;               // never cycle to gauntlet
		//}
		if (CG_WeaponSelectable(cg.weaponSelect)) {
			break;
		}
	}
	if (i == 16) {
		cg.weaponSelect = original;
	} else {
//Slicer: Done Server Side
		//CG_RQ3_Zoom1x();
		//Slicer lets call unzoom for SSG only
		if (original == WP_SSG3000)
			trap_SendClientCommand("unzoom");
	}
}

/*
===============
Added by Elder

CG_SpecialWeapon_f
===============
*/
void CG_SpecialWeapon_f(void)
{
	int i;
	int original;

	if (!cg.snap) {
		//CG_Printf("No snapshot: normally exiting\n");
		return;
	}

	if (cg.snap->ps.pm_flags & PMF_FOLLOW) {
		return;
	}
	// if we are going into the intermission, don't do anything
	if (cg.intermissionStarted) {
		return;
	}
	//Elder: added
//      if ( (cg.snap->ps.stats[STAT_RQ3] & RQ3_BANDAGE_WORK) == RQ3_BANDAGE_WORK) {
	if (cg.snap->ps.weaponstate == WEAPON_BANDAGING) {
		CG_Printf("You are too busy bandaging...\n");
		return;
	}
	//Elder: don't allow weapon switching when in the middle of bursts
	if (cg.snap->ps.stats[STAT_BURST] > 0)
		return;

	// JBravo: not in CTF
	if (cg.snap->ps.powerups[PW_BLUEFLAG] || cg.snap->ps.powerups[PW_REDFLAG])
		return;

	//Elder: in the middle of firing, reloading or weapon-switching
	//cg.snap->ps.weaponstate == WEAPON_RELOADING when it's in
	/*
	   if (cg.snap->ps.weaponstate == WEAPON_RELOADING && cg.snap->ps.weaponTime > 0) {
	   return;
	   }
	 */

	cg.weaponSelectTime = cg.time;
	original = cg.weaponSelect;

	for (i = 0; i < 16; i++) {
		cg.weaponSelect++;
		if (cg.weaponSelect == 16) {
			cg.weaponSelect = 0;
		}
		//Skip normal weapons
		switch (cg.weaponSelect) {
		case WP_PISTOL:
		case WP_AKIMBO:
		case WP_KNIFE:
		case WP_GRENADE:
			continue;
			break;
		}

		if (CG_WeaponSelectable(cg.weaponSelect)) {
			break;
		}
	}

	// FIXME: 15 because of the stupid continue I used
	if (i >= 15) {
		cg.weaponSelect = original;
	} else {
//Slicer: Done Server Side
		//      CG_RQ3_Zoom1x();
		//Slicer lets call unzoom for SSG only
		if (original == WP_SSG3000)
			trap_SendClientCommand("unzoom");
	}
}

//Elder: for returning to the zoom state in ps stats
void CG_RQ3_SyncZoom(void)
{
	if ((cg.snap->ps.stats[STAT_RQ3] & RQ3_ZOOM_LOW) == RQ3_ZOOM_LOW &&
	    (cg.snap->ps.stats[STAT_RQ3] & RQ3_ZOOM_MED) == RQ3_ZOOM_MED) {
		//CG_Printf("Zoomed to 6x\n");
		cg.zoomLevel = RQ3_ZOOM_LOW | RQ3_ZOOM_MED;
	} else if ((cg.snap->ps.stats[STAT_RQ3] & RQ3_ZOOM_LOW) == RQ3_ZOOM_LOW) {
		//CG_Printf("Zoomed to 2x\n");
		cg.zoomLevel = RQ3_ZOOM_LOW;
	} else if ((cg.snap->ps.stats[STAT_RQ3] & RQ3_ZOOM_MED) == RQ3_ZOOM_MED) {
		//CG_Printf("Zoomed to 4x\n");
		cg.zoomLevel = RQ3_ZOOM_MED;
	} else {
		//CG_Printf("Zoomed out\n");
		cg.zoomLevel = 0;
	}
}

//Elder: save zoom level and do any other necessary housekeeping
void CG_RQ3_SaveZoomLevel()
{
	cg.lastZoomLevel = cg.zoomLevel;
}

/*
void CG_RQ3_SyncZoom2 ( void ) {
	int statZoom;

	if ( (cg.snap->ps.stats[STAT_RQ3] & RQ3_ZOOM_LOW) == RQ3_ZOOM_LOW &&
		(cg.snap->ps.stats[STAT_RQ3] & RQ3_ZOOM_MED) == RQ3_ZOOM_MED ) {
		statZoom = RQ3_ZOOM_LOW|RQ3_ZOOM_MED;
	}
	else if ( (cg.snap->ps.stats[STAT_RQ3] & RQ3_ZOOM_LOW) == RQ3_ZOOM_LOW) {
		statZoom = RQ3_ZOOM_LOW;
	}
	else if ( (cg.snap->ps.stats[STAT_RQ3] & RQ3_ZOOM_MED) == RQ3_ZOOM_MED) {
		statZoom = RQ3_ZOOM_MED;
	}
	else {
		statZoom = 0;
	}

	if (statZoom != cg.zoomLevel)
		cg.zoomLevel = statZoom;
}*/

//Elder: This should identical to the portion inside
//the weapon function in g_cmds.c
void CG_RQ3_Zoom(void)
{
	//Elder: reworked SSG zoom
	if (cg.snap->ps.weapon == WP_SSG3000) {
		CG_RQ3_SaveZoomLevel();

		if ((cg.zoomLevel & RQ3_ZOOM_LOW) == RQ3_ZOOM_LOW && (cg.zoomLevel & RQ3_ZOOM_MED) == RQ3_ZOOM_MED) {
			//Elder: zoom 1x
			cg.zoomLevel &= ~RQ3_ZOOM_LOW;
			cg.zoomLevel &= ~RQ3_ZOOM_MED;
		} else if ((cg.zoomLevel & RQ3_ZOOM_MED) == RQ3_ZOOM_MED) {
			//Elder: zoom 6x
			cg.zoomLevel |= RQ3_ZOOM_LOW;
		} else if ((cg.zoomLevel & RQ3_ZOOM_LOW) == RQ3_ZOOM_LOW) {
			//Elder: zoom 4x
			cg.zoomLevel |= RQ3_ZOOM_MED;
			cg.zoomLevel &= ~RQ3_ZOOM_LOW;
		} else {
			//Elder: zoom 2x
			cg.zoomLevel |= RQ3_ZOOM_LOW;
		}

		cg.zoomTime = cg.time;
	}

	/*
	   if(cg.snap->ps.weapon==WP_SSG3000) {
	   cg.zoomLevel++;
	   if (cg.zoomLevel == 4) {
	   cg.zoomed = qfalse;
	   cg.zoomLevel = 0;
	   CG_Printf("Zoomed out\n");
	   }
	   else {
	   cg.zoomed = qtrue;
	   CG_Printf("Zoomed to %dx\n", cg.zoomLevel * 2);
	   }
	   cg.zoomTime = cg.time;
	   }
	 */
}

//Elder: reset locally and send server message
void CG_RQ3_Zoom1x()
{
	if (cg_RQ3_ssgZoomAssist.integer) {
		cg.lastZoomLevel = cg.zoomLevel;
		cg.zoomLevel = 0;
		cg.zoomTime = cg.time;
	}
	//trap_SendClientCommand("unzoom");
}

int CG_RQ3_GetGrenadeMode()
{
	int grenMode = 0;

	if ((cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_GRENSHORT) == RQ3_GRENSHORT)
		grenMode |= RQ3_GRENSHORT;

	if ((cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_GRENMED) == RQ3_GRENMED)
		grenMode |= RQ3_GRENMED;

	return grenMode;
}

//Print grenade mode message
void CG_RQ3_GrenadeMode()
{
	//Print a message for the next mode in line
	if ((cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_GRENSHORT) == RQ3_GRENSHORT &&
	    (cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_GRENMED) == RQ3_GRENMED) {
		CG_Printf("Prepared to make a short range throw\n");
		//cg.grenadeMode = RQ3_GRENSHORT|RQ3_GRENMED;
	} else if ((cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_GRENSHORT) == RQ3_GRENSHORT) {
		CG_Printf("Prepared to make a medium range throw\n");
		//cg.grenadeMode = RQ3_GRENSHORT;
	} else if ((cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_GRENMED) == RQ3_GRENMED) {
		CG_Printf("Prepared to make a long range throw\n");
		//cg.grenadeMode = RQ3_GRENMED;
	}
}

/*
===============
CG_Weapon_f

Elder: does local stuff, then proceeds to server
Used with Q3's internal weapon switching "e.g. weapon 10"
===============
*/
void CG_Weapon_f(void)
{
	int num;

	if (!cg.snap) {
		//CG_Printf("No snapshot: normally exiting\n");
		return;
	}
	// if we are going into the intermission, don't do anything
	if (cg.intermissionStarted) {
		return;
	}
	// Hawkins (give 'weapon' dual meaning)
	if (trap_Argc() == 1) {
		//Elder: in the middle of firing, reloading or weapon-switching
		//      if (cg.snap->ps.weaponTime > 0 || cg.snap->ps.stats[STAT_RELOADTIME] > 0) {
		//              return;
		//      }

		if (cg.snap->ps.weapon == WP_SSG3000) {
			//Slicer : had to comment this, it caused a bug on the zooming, and it really didn't make much sense for lagged players
			//      has it would get out of synch !

			//Save the time..
			//      cg.zoomTime = cg.time;

			//Slicer- Changing Sniper stuff- some to game.

			/*              trap_S_StartLocalSound( cgs.media.lensSound, CHAN_ITEM);
			   if (cg_RQ3_ssgZoomAssist.integer)
			   CG_RQ3_Zoom();
			 */
			//Let's sound it..
			//      trap_S_StartLocalSound( cgs.media.lensSound, CHAN_ITEM);

		}
		/*      else if (cg.snap->ps.weapon == WP_GRENADE)
		   {
		   CG_RQ3_GrenadeMode();
		   } */
		// only play "click" sound for M4/MP5/Pistol
		/*      else if (cg.snap->ps.weapon == WP_M4 || cg.snap->ps.weapon == WP_MP5 ||
		   cg.snap->ps.weapon == WP_PISTOL )
		   {
		   trap_S_StartLocalSound( cgs.media.weapToggleSound, CHAN_ITEM);
		   } */
		trap_SendClientCommand("weapon");

		//Elder: added to get out of function at this point
		return;
	}
	//Elder: added to prevent weapon switching while bandaging
//      if ( (cg.snap->ps.stats[STAT_RQ3] & RQ3_BANDAGE_WORK) == RQ3_BANDAGE_WORK) {
	if (cg.snap->ps.weaponstate == WEAPON_BANDAGING) {
		CG_Printf("You are too busy bandaging...\n");
		return;
	}
	//Elder: don't allow weapon switching when in the middle of bursts
	if (cg.snap->ps.stats[STAT_BURST] > 0)
		return;

	/*
	   //Elder: in the middle of firing, reloading or weapon-switching
	   if (cg.snap->ps.weaponTime > 0 || cg.snap->ps.stats[STAT_RELOADTIME] > 0) {
	   return;
	   }
	 */

	///Elder: spectator?
	if (cg.snap->ps.pm_flags & PMF_FOLLOW) {
		return;
	}

	num = atoi(CG_Argv(1));

	if (num < 1 || num > 15) {
		return;
	}
	// JBravo: CTB provisions
	if (cg.snap->ps.powerups[PW_BLUEFLAG] || cg.snap->ps.powerups[PW_REDFLAG]) {
		if (num != WP_PISTOL && num != WP_KNIFE)
			return;
	}
	//Elder: this point on is the regular Q3 weapon function - weird

	cg.weaponSelectTime = cg.time;

	if (!(cg.snap->ps.stats[STAT_WEAPONS] & (1 << num))) {
		return;		// don't have the weapon
	}
	//Elder: If re-selecting SSG - leave function
	if ((1 << num) == (1 << WP_SSG3000) && cg.snap->ps.weapon == WP_SSG3000) {
		//CG_Printf("Selecting SSG\n");
		return;
	}
	//cg.zoomed = qfalse;
	//cg.zoomLevel = 0;
//Slicer : Done Server Side
//      CG_RQ3_Zoom1x();
	//Slicer lets call unzoom for SSG only
	if (cg.weaponSelect == WP_SSG3000)
		trap_SendClientCommand("unzoom");
	cg.weaponSelect = num;
}

/*
===================
CG_OutOfAmmoChange

The current weapon has just run out of ammo
===================
*/
void CG_OutOfAmmoChange(void)
{
	//int           i;

	if (!cg.snap)
		return;

	//Select the pistol when we run out of grenades or knives
	if (cg.snap->ps.weapon == WP_KNIFE || cg.snap->ps.weapon == WP_GRENADE) {
		cg.weaponSelectTime = cg.time;
		cg.weaponSelect = WP_PISTOL;
	}

	/* Elder: disable auto-switch
	   cg.weaponSelectTime = cg.time;

	   //Elder: we'll have to change this to
	   //a) show the empty gun animation if gun's ammo = 0
	   //b) NOT auto-switch to another weapon

	   for ( i = 15 ; i > 0 ; i-- ) {
	   if ( CG_WeaponSelectable( i ) ) {
	   cg.weaponSelect = i;
	   break;
	   }
	   }
	 */
}

/*
===================================================================================================

WEAPON EVENTS

===================================================================================================
*/

/*
================
CG_FireWeapon

Caused by an EV_FIRE_WEAPON event
================
*/
void CG_FireWeapon(centity_t * cent, int weapModification)
{
	entityState_t *ent;
	int c, i;
	weaponInfo_t *weap;

	ent = &cent->currentState;
	if (ent->weapon == WP_NONE) {
		return;
	}
	if (ent->weapon >= WP_NUM_WEAPONS) {
		CG_Error("CG_FireWeapon: ent->weapon >= WP_NUM_WEAPONS");
		return;
	}


	weap = &cg_weapons[ent->weapon];

	//Elder: added to supress burst mode flashes + sounds when 'predicting'
	// M4
	if (cg.snap->ps.weapon == WP_M4 &&
	    (cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_M4MODE) == RQ3_M4MODE &&
	    cg.snap->ps.stats[STAT_BURST] > 2 && cg_RQ3_predictWeapons.integer == 1) {
		return;
	}
	// MP5
	if (cg.snap->ps.weapon == WP_MP5 &&
	    (cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_MP5MODE) == RQ3_MP5MODE &&
	    cg.snap->ps.stats[STAT_BURST] > 2 && cg_RQ3_predictWeapons.integer == 1) {
		return;
	}
	// MK23
	if (cg.snap->ps.weapon == WP_PISTOL &&
	    (cg.snap->ps.persistant[PERS_WEAPONMODES] & RQ3_MK23MODE) == RQ3_MK23MODE &&
	    cg.snap->ps.stats[STAT_BURST] > 0 && cg_RQ3_predictWeapons.integer == 1) {
		return;
	}
	// KNIFE
	// NiceAss: This is if the knife slash is not the first (2,3,4,5)
	if (weapModification == RQ3_WPMOD_KNIFENOMARK) {
		return;
	}

	// NiceAss:
	if (ent->weapon == WP_M3)
		cent->ejectBrassTime = cg.time + 500;
	else if (ent->weapon == WP_SSG3000)
		cent->ejectBrassTime = cg.time + 650;
	else if (ent->weapon != WP_KNIFE && ent->weapon != WP_GRENADE && ent->weapon != WP_HANDCANNON)
		cent->ejectBrassTime = cg.time;

	// mark the entity as muzzle flashing, so when it is added it will
	// append the flash to the weapon model
	if (weapModification != RQ3_WPMOD_SILENCER)
		cent->muzzleFlashTime = cg.time;
	else
		cent->muzzleFlashTime = -1;

	// Elder: choose alternate muzzle flashes for 3rd-person views
	if (ent->weapon == WP_AKIMBO) {
		if (cg.akimboFlash) {
			cg.akimboFlash = 0;
		} else {
			cg.akimboFlash = 1;
		}
	}
	// lightning gun only does this this on initial press
	//Blaze: no more Lighting gun
	/*
	   if ( ent->weapon == WP_LIGHTNING ) {
	   if ( cent->pe.lightningFiring ) {
	   return;
	   }
	   }
	 */

	//Elder: silencer stuff
	if (weapModification == RQ3_WPMOD_SILENCER) {
		trap_S_StartSound(NULL, ent->number, CHAN_WEAPON, cgs.media.silencerSound);
	} else			// if (cg.snap->ps.weapon != WP_KNIFE) 
	{
		// play a sound
		for (c = 0; c < 4; c++) {
			if (!weap->flashSound[c]) {
				break;
			}
		}

		if (c > 0) {
			c = rand() % c;
			if (weap->flashSound[c]) {
				trap_S_StartSound(NULL, ent->number, CHAN_WEAPON, weap->flashSound[c]);
			}
		}
	}

	// View kicks -- note this doesn't affect aim which is handled on the server-side
	// even though it probably should
	if (ent->clientNum == cg.snap->ps.clientNum) {
		vec3_t forward;

		switch (cg.snap->ps.weapon) {
		case WP_KNIFE:
			AngleVectors(cg.predictedPlayerState.viewangles, forward, NULL, NULL);
			VectorScale(forward, -2, cg.kick_origin);
			cg.kick_angles[0] = -2;
			cg.kick_time = cg.time;
			cg.kick_duration = 200;
			break;
		case WP_PISTOL:
			for (i = 0; i < 3; i++) {
				cg.kick_origin[i] = crandom() * 0.35f;
				cg.kick_angles[i] = crandom() * 0.7f;
			}
			cg.kick_origin[0] = crandom() * 0.35f;
			cg.kick_time = cg.time;
			break;
		case WP_M3:
			AngleVectors(cg.predictedPlayerState.viewangles, forward, NULL, NULL);
			VectorScale(forward, -2, cg.kick_origin);
			cg.kick_angles[0] = -2;
			cg.kick_time = cg.time;
			break;
		case WP_M4:
			for (i = 0; i < 3; i++) {
				cg.kick_origin[i] = crandom() * 0.25f;
				cg.kick_angles[i] = crandom() * 0.5f;
			}
			cg.kick_origin[0] = crandom() * 0.35f;
			cg.kick_time = cg.time;
			break;
		case WP_MP5:
			for (i = 0; i < 3; i++) {
				cg.kick_origin[i] = crandom() * 0.25f;
				cg.kick_angles[i] = crandom() * 0.5f;
			}
			cg.kick_origin[0] = crandom() * 0.35f;
			cg.kick_time = cg.time;
			break;
		case WP_HANDCANNON:
			AngleVectors(cg.predictedPlayerState.viewangles, forward, NULL, NULL);
			VectorScale(forward, -2, cg.kick_origin);
			cg.kick_angles[0] = -2;
			cg.kick_time = cg.time;
			break;
		case WP_AKIMBO:
			for (i = 0; i < 3; i++) {
				cg.kick_origin[i] = crandom() * 0.25f;
				cg.kick_angles[i] = crandom() * 0.5f;
			}
			cg.kick_origin[0] = crandom() * 0.35f;
			cg.kick_time = cg.time;
			break;
		}
	}
}

/*
=================
CG_MissileHitWall

Caused by an EV_MISSILE_MISS event, or directly by local bullet tracing
=================
*/
void CG_MissileHitWall(int weapon, int clientNum, vec3_t origin,
		       vec3_t dir, impactSound_t soundType, int weapModification)
{
	qhandle_t mod;
	qhandle_t mark;
	qhandle_t shader;
	sfxHandle_t sfx;
	float radius;
	float light;
	vec3_t lightColor;
	localEntity_t *le;
	int r;
	qboolean alphaFade;
	qboolean isSprite;
	int duration;
	int angle;

	//Elder: for impact smoke marks
	localEntity_t *smokePuff;
	vec3_t puffOrigin;
	vec3_t puffOffset;
	vec3_t puffDir;
	int contentType;

	//Elder: for impact sparks
	vec3_t velocity;
	int sparkCount;
	int i;

	mark = 0;
	radius = 32;
	sfx = 0;
	mod = 0;
	shader = 0;
	light = 0;
	lightColor[0] = 1;
	lightColor[1] = 1;
	lightColor[2] = 0;

	// set defaults
	isSprite = qfalse;
	duration = 600;

	switch (weapon) {
		// Elder: bullet weapons all fall under MK23 >:(
	case WP_M4:
	case WP_MP5:
	case WP_PISTOL:
	case WP_AKIMBO:
	case WP_SSG3000:
		duration = 160;
		mod = cgs.media.hitSparkModel;
		shader = cgs.media.hitSparkShader;
		radius = 8;
		r = rand() & 3;

		if (soundType == IMPACTSOUND_METAL) {
			mark = cgs.media.metalMarkShader;
			if (r < 2)
				sfx = cgs.media.sfx_metalric1;
			else if (r == 2)
				sfx = cgs.media.sfx_metalric2;
			else
				sfx = cgs.media.sfx_metalric3;
		} else if (soundType == IMPACTSOUND_GLASS) {
			mark = cgs.media.glassMarkShader;
			if (r < 2)
				sfx = cgs.media.sfx_glassric1;
			else if (r == 2)
				sfx = cgs.media.sfx_glassric2;
			else
				sfx = cgs.media.sfx_glassric3;
		}
		//Makro - added
		else if (soundType == IMPACTSOUND_BRICK) {
			//mark = cgs.media.tileMarkShader;
			mark = cgs.media.bulletMarkShader;
			if (r < 2)
				sfx = cgs.media.sfx_brickric1;
			else if (r == 2)
				sfx = cgs.media.sfx_brickric2;
			else
				sfx = cgs.media.sfx_brickric3;
		}
		//Makro - added
		else if (soundType == IMPACTSOUND_WOOD) {
			mark = cgs.media.bulletMarkShader;
			if (r < 2)
				sfx = cgs.media.sfx_woodric1;
			else if (r == 2)
				sfx = cgs.media.sfx_woodric2;
			else
				sfx = cgs.media.sfx_woodric3;
		}
		//Makro - added
		else if (soundType == IMPACTSOUND_CERAMIC) {
			mark = cgs.media.bulletMarkShader;
			if (r < 2)
				sfx = cgs.media.sfx_ceramicric1;
			else if (r == 2)
				sfx = cgs.media.sfx_ceramicric2;
			else
				sfx = cgs.media.sfx_ceramicric3;
		} else {
			mark = cgs.media.bulletMarkShader;
			if (r == 0)
				sfx = cgs.media.sfx_ric1;
			else if (r == 1)
				sfx = cgs.media.sfx_ric2;
			else
				sfx = cgs.media.sfx_ric3;
		}
		break;

		/*
		   //Blaze: Reaction M4
		   case WP_M4:
		   mod = cgs.media.bulletFlashModel;
		   shader = cgs.media.bulletExplosionShader;
		   if (soundType == IMPACTSOUND_GLASS)
		   mark = cgs.media.glassMarkShader;
		   else
		   mark = cgs.media.bulletMarkShader;

		   r = rand() & 3;
		   if (soundType == IMPACTSOUND_METAL)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_metalric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_metalric2;
		   } else {
		   sfx = cgs.media.sfx_metalric3;
		   }
		   }
		   else if (soundType == IMPACTSOUND_GLASS)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_glassric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_glassric2;
		   } else {
		   sfx = cgs.media.sfx_glassric3;
		   }
		   }
		   else
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_ric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_ric2;
		   } else {
		   sfx = cgs.media.sfx_ric3;
		   }
		   }

		   radius = 8;
		   break;
		   //Blaze: Reaction Pistol
		   case WP_PISTOL:
		   mod = cgs.media.bulletFlashModel;
		   shader = cgs.media.bulletExplosionShader;
		   if (soundType == IMPACTSOUND_GLASS)
		   mark = cgs.media.glassMarkShader;
		   else
		   mark = cgs.media.bulletMarkShader;

		   r = rand() & 3;
		   if (soundType == IMPACTSOUND_METAL)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_metalric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_metalric2;
		   } else {
		   sfx = cgs.media.sfx_metalric3;
		   }
		   }
		   else if (soundType == IMPACTSOUND_GLASS)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_glassric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_glassric2;
		   } else {
		   sfx = cgs.media.sfx_glassric3;
		   }
		   }
		   else
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_ric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_ric2;
		   } else {
		   sfx = cgs.media.sfx_ric3;
		   }
		   }
		   radius = 8;
		   break;
		   case WP_SSG3000:
		   mod = cgs.media.bulletFlashModel;
		   shader = cgs.media.bulletExplosionShader;
		   if (soundType == IMPACTSOUND_GLASS)
		   mark = cgs.media.glassMarkShader;
		   else
		   mark = cgs.media.bulletMarkShader;

		   r = rand() & 3;
		   if (soundType == IMPACTSOUND_METAL)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_metalric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_metalric2;
		   } else {
		   sfx = cgs.media.sfx_metalric3;
		   }
		   }
		   else if (soundType == IMPACTSOUND_GLASS)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_glassric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_glassric2;
		   } else {
		   sfx = cgs.media.sfx_glassric3;
		   }
		   }
		   else
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_ric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_ric2;
		   } else {
		   sfx = cgs.media.sfx_ric3;
		   }
		   }
		   radius = 8;
		   break;
		   case WP_AKIMBO:
		   mod = cgs.media.bulletFlashModel;
		   shader = cgs.media.bulletExplosionShader;
		   if (soundType == IMPACTSOUND_GLASS)
		   mark = cgs.media.glassMarkShader;
		   else
		   mark = cgs.media.bulletMarkShader;

		   r = rand() & 3;
		   if (soundType == IMPACTSOUND_METAL)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_metalric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_metalric2;
		   } else {
		   sfx = cgs.media.sfx_metalric3;
		   }
		   }
		   else if (soundType == IMPACTSOUND_GLASS)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_glassric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_glassric2;
		   } else {
		   sfx = cgs.media.sfx_glassric3;
		   }
		   }
		   else
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_ric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_ric2;
		   } else {
		   sfx = cgs.media.sfx_ric3;
		   }
		   }
		   radius = 8;
		   break;

		   //Blaze: Reaction MP5
		   case WP_MP5:
		   mod = cgs.media.bulletFlashModel;
		   shader = cgs.media.bulletExplosionShader;
		   if (soundType == IMPACTSOUND_GLASS)
		   mark = cgs.media.glassMarkShader;
		   else
		   mark = cgs.media.bulletMarkShader;

		   r = rand() & 3;
		   if (soundType == IMPACTSOUND_METAL)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_metalric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_metalric2;
		   } else {
		   sfx = cgs.media.sfx_metalric3;
		   }
		   }
		   else if (soundType == IMPACTSOUND_GLASS)
		   {
		   if ( r < 2 ) {
		   sfx = cgs.media.sfx_glassric1;
		   } else if ( r == 2 ) {
		   sfx = cgs.media.sfx_glassric2;
		   } else {
		   sfx = cgs.media.sfx_glassric3;
		   }
		   }
		   else
		   {
		   if ( r == 0 ) {
		   sfx = cgs.media.sfx_ric1;
		   } else if ( r == 1 ) {
		   sfx = cgs.media.sfx_ric2;
		   } else {
		   sfx = cgs.media.sfx_ric3;
		   }
		   }
		   radius = 8;
		   break;
		 */

	case WP_M3:
	case WP_HANDCANNON:
		duration = 200;
		mod = cgs.media.hitSparkModel;
		shader = cgs.media.hitSparkShader;
		//mod = cgs.media.bulletFlashModel;
		//shader = cgs.media.bulletExplosionShader;
		if (soundType == IMPACTSOUND_GLASS)
			mark = cgs.media.glassMarkShader;
		else if (soundType == IMPACTSOUND_METAL)
			mark = cgs.media.metalMarkShader;
		//Makro - added
		//else if (soundType == IMPACTSOUND_BRICK)
		//	mark = cgs.media.tileMarkShader;
		else
			mark = cgs.media.bulletMarkShader;
		sfx = 0;
		radius = 4;
		break;

	case WP_GRENADE:
		mod = cgs.media.dishFlashModel;
		shader = cgs.media.grenadeExplosionShader;
		sfx = cgs.media.sfx_rockexp;
		mark = cgs.media.burnMarkShader;
		radius = 96;	//64
		light = 350;	//300
		isSprite = qtrue;
		break;

	case WP_KNIFE:
		/*
		   mod = cgs.media.dishFlashModel;
		   //shader = cgs.media.grenadeExplosionShader;
		   sfx = cgs.media.sfx_rockexp;
		   mark = cgs.media.burnMarkShader;
		   radius = 64;
		   light = 300;
		   isSprite = qtrue;
		   break;
		 */
		if (weapModification == RQ3_WPMOD_KNIFESLASH) {
			duration = 100;
			mod = cgs.media.hitSparkModel;
			shader = cgs.media.hitSparkShader;
			//mod = cgs.media.bulletFlashModel;
			//shader = cgs.media.bulletExplosionShader;
			mark = cgs.media.slashMarkShader;
			sfx = cgs.media.knifeClankSound;
			radius = rand() % 4 + 6;
		} else {
			duration = 180;
			mod = cgs.media.hitSparkModel;
			shader = cgs.media.hitSparkShader;
			//mod = cgs.media.bulletFlashModel;
			//shader = cgs.media.bulletExplosionShader;
			sfx = cgs.media.knifeClankSound;
		}
		break;
	default:
		break;
	}

	//
	// ricochet sound
	//
	if (weapon == WP_KNIFE || weapon == WP_SSG3000 || weapon == WP_GRENADE || soundType == IMPACTSOUND_METAL)
		i = 1;
	else
		//Elder: 90% of the time render a bullet ricochet sound
		i = rand() % 10;

	if (sfx && i < 9) {
		trap_S_StartSound(origin, ENTITYNUM_WORLD, CHAN_AUTO, sfx);
	}
	//
	// create the explosion
	//
	if (mod) {
		if (weapon == WP_GRENADE) {
			le = CG_MakeExplosion(origin, dir, mod, shader, duration, isSprite);
			le->light = light;
			VectorCopy(lightColor, le->lightColor);

		} else if (cg_RQ3_impactEffects.integer) {
			vec3_t temp, offsetDir;
			byte color[4];
			int flashCount;
			float scale;

			switch (weapon) {
			case WP_MP5:
			case WP_PISTOL:
			case WP_AKIMBO:
				flashCount = 3 + rand() % 3;
				color[0] = 224;
				color[1] = 180;
				color[2] = 128;
				color[3] = 192;
				break;
			case WP_M4:
			case WP_KNIFE:
				flashCount = 3 + rand() % 3;
				color[0] = 192;
				color[1] = 96;
				color[2] = 64;
				color[3] = 192;
				break;
			case WP_M3:
			case WP_HANDCANNON:
				flashCount = 2 + rand() % 3;
				color[0] = 192;
				color[1] = 96;
				color[2] = 64;
				color[3] = 192;
				break;
			case WP_SSG3000:
			default:
				flashCount = 4 + rand() % 3;
				color[0] = 255;
				color[1] = 224;
				color[2] = 128;
				color[3] = 192;
				break;
			}

			// Elder: should probably dump this into another function
			for (i = 0; i < flashCount; i++) {
				// introduce variance
				VectorCopy(dir, temp);
				scale = crandom() + 1.8f;
				temp[0] += (crandom() * 0.4f) - 0.2f;
				temp[1] += (crandom() * 0.4f) - 0.2f;
				temp[2] += (crandom() * 0.4f) - 0.2f;
				// save result
				VectorCopy(temp, offsetDir);
				VectorScale(temp, scale, temp);

				le = CG_MakeExplosion(origin, dir, mod, shader, duration, isSprite);

				VectorMA(origin, scale + 0.5f, temp, le->refEntity.origin);
				VectorCopy(temp, le->refEntity.axis[0]);

				// set spark colour
				le->refEntity.shaderRGBA[0] = color[0];
				le->refEntity.shaderRGBA[1] = color[1];
				le->refEntity.shaderRGBA[2] = color[2];
				le->refEntity.shaderRGBA[3] = color[3];

				// readjust behaviour
				le->leType = LE_MOVE_SCALE_FADE;
				le->pos.trType = TR_LINEAR;
				le->pos.trTime = cg.time;
				VectorCopy(le->refEntity.origin, le->pos.trBase);
				VectorScale(offsetDir, 30, le->pos.trDelta);

				le->light = light;
				VectorCopy(lightColor, le->lightColor);
			}
		}
		//Blaze: No railgun
		/*
		   if ( weapon == WP_RAILGUN ) {
		   // colorize with client color
		   VectorCopy( cgs.clientinfo[clientNum].color1, le->color );
		   }
		 */
	}
	//
	// impact mark
	//
	alphaFade = (mark == cgs.media.energyMarkShader/* || mark == cgs.media.tileMarkShader*/);	// plasma fades alpha, all others fade color

	//Blaze: No more railgun
	/*
	   if ( weapon == WP_RAILGUN ) {
	   float        *color;

	   // colorize with client color
	   color = cgs.clientinfo[clientNum].color;
	   CG_ImpactMark( mark, origin, dir, random()*360, color[0],color[1], color[2],1, alphaFade, radius, qfalse );
	   } else {
	 */

	// Elder: Our knife slashes are vertical
	if (weapon == WP_KNIFE)
		angle = random() * 90;
	else
		angle = random() * 360;

	if (mark)
		CG_ImpactMark(mark, origin, dir, angle, 1, 1, 1, 1, alphaFade, radius, qfalse);
	//}

	//
	// impact visual effects
	//

	//Elder: 75% of the time render a smoke puff
	i = rand() % 4;
	if (cg_RQ3_impactEffects.integer && i < 3) {
		contentType = trap_CM_PointContents(origin, 0);
		// no puff in water
		if (!(contentType & CONTENTS_WATER)) {
			switch (weapon) {
			case WP_MP5:
			case WP_M4:
			case WP_PISTOL:
			case WP_AKIMBO:
			case WP_SSG3000:
				puffDir[0] = 0;
				puffDir[1] = 0;
				puffDir[2] = 16;

				VectorCopy(dir, puffOffset);
				VectorNormalize(puffOffset);
				VectorNegate(puffOffset, puffOffset);
				VectorScale(puffOffset, 13, puffOffset);
				VectorSubtract(origin, puffOffset, puffOrigin);
				smokePuff = CG_SmokePuff(puffOrigin, puffDir,
							 (int) (random() * 100) % 4 + 13,
							 1, 1, 1, 0.25f,
							 650,
							 cg.time, 0,
							 LEF_PUFF_DONT_SCALE, cgs.media.smokePuffAnimShader);
				break;
			}
		}
	}
	// Elder: Spark effect for metal surfaces
	if (cg_RQ3_impactEffects.integer && soundType == IMPACTSOUND_METAL) {
		if (weapon != WP_GRENADE) {
			if (weapon == WP_M3 || weapon == WP_HANDCANNON)
				sparkCount = 5 + rand() % 5;
			else if (weapon == WP_KNIFE)
				sparkCount = 10 + rand() % 10;
			else if (weapon == WP_SSG3000)
				sparkCount = 25 + rand() % 20;
			else
				sparkCount = 15 + rand() % 15;

			// Generate the particles
			for (i = 0; i < sparkCount; i++) {
				if (weapon == WP_KNIFE)
					VectorScale(dir, 50 + rand() % 10, velocity);
				else
					VectorScale(dir, 150 + rand() % 30, velocity);
				//random upwards sparks
				if (rand() % 5 < 1)
					velocity[2] += 120 + rand() % 30;

				velocity[0] += rand() % 50 - 25;
				velocity[1] += rand() % 50 - 25;
//                              CG_ParticleSparks(origin, velocity, 100 + rand() % 120, 2, 2, -4, 1);
				// NiceAss: Longer life, faster sparks == more eye candy! =)
				CG_ParticleSparks(origin, velocity, 150 + rand() % 120, 2, 2, -5, 1);
			}
		}
	}
	// Elder: grenade explosion
	if (cg_RQ3_impactEffects.integer && weapon == WP_GRENADE) {

		vec3_t shrapnelDest;

		sparkCount = 60 + rand() % 10;
		origin[2] += 32;

		for (i = 0; i < sparkCount; i++) {
			VectorScale(dir, rand() % 200, velocity);
			velocity[0] += rand() % 200 - 100;
			velocity[1] += rand() % 200 - 100;

			if (i % 8 == 7) {
				// Add shrapnel trace effect
				VectorMA(origin, 0.7f, velocity, shrapnelDest);
				CG_ShrapnelSpark(origin, shrapnelDest, 10, 280);
			}
			// Add sparks
			CG_ParticleSparks(origin, velocity, 900 + rand() % 200, 5, 5, -2.5f, 3.5f);
		}

		// Add smoke puff
		puffDir[0] = 0;
		puffDir[1] = 0;
		puffDir[2] = 20;
		origin[2] -= 16;
		smokePuff = CG_SmokePuff(origin, puffDir,
					 rand() % 12 + 48,
					 1, 1, 1, 0.4f, 1750, cg.time, 0, 0, cgs.media.smokePuffShader);
	}
}

/*
=================
CG_MissileHitPlayer
=================
*/
void CG_MissileHitPlayer(int weapon, vec3_t origin, vec3_t dir, int entityNum)
{
	CG_Bleed(origin, entityNum);

	// some weapons will make an explosion with the blood, while
	// others will just make the blood
	//Blaze: None of these are valid
	/*
	   switch ( weapon ) {
	   case WP_GRENADE_LAUNCHER:
	   case WP_ROCKET_LAUNCHER:
	   CG_MissileHitWall( weapon, 0, origin, dir, IMPACTSOUND_FLESH, 0 );
	   break;
	   default:
	   break;
	   }
	 */
}

/*
============================================================================

SHOTGUN TRACING

============================================================================
*/

/*
================
CG_ShotgunPellet

Elder: added shellWeapon param
We are not going to show every HC impact
================
*/
static void CG_ShotgunPellet(vec3_t start, vec3_t end, int skipNum, int shellWeapon)
{
	trace_t tr;
	int sourceContentType, destContentType;

	int l, playerNum;
	vec3_t t_start;

	//Makro
	int Material;

	VectorCopy( start, t_start );
	playerNum = skipNum;

	// NiceAss: Allow M3/HC shots to go through teammates
	for (l = 0; l < 10; l++) {
		CG_Trace(&tr, t_start, NULL, NULL, end, skipNum, MASK_SHOT);

		if (tr.entityNum < MAX_CLIENTS && cgs.gametype >= GT_TEAM &&
			cgs.clientinfo[tr.entityNum].team == cgs.clientinfo[playerNum].team ) {
			VectorCopy ( tr.endpos, t_start );
			skipNum = tr.entityNum;
			continue;
		}
		break;
	}

	sourceContentType = trap_CM_PointContents(start, 0);
	destContentType = trap_CM_PointContents(tr.endpos, 0);

	// FIXME: should probably move this cruft into CG_BubbleTrail
	if (sourceContentType == destContentType) {
		if (sourceContentType & CONTENTS_WATER) {
			CG_BubbleTrail(start, tr.endpos, 32);
		}
	} else if (sourceContentType & CONTENTS_WATER) {
		trace_t trace;

		trap_CM_BoxTrace(&trace, end, start, NULL, NULL, 0, CONTENTS_WATER);
		CG_BubbleTrail(start, trace.endpos, 32);
	} else if (destContentType & CONTENTS_WATER) {
		trace_t trace;

		trap_CM_BoxTrace(&trace, start, end, NULL, NULL, 0, CONTENTS_WATER);
		CG_BubbleTrail(tr.endpos, trace.endpos, 32);
	}

	if (tr.surfaceFlags & SURF_NOIMPACT) {
		return;
	}

	if (cg_entities[tr.entityNum].currentState.eType == ET_PLAYER) {
		//Blaze: Changed WP_SHOTGUN to WP_M3
		//Elder: don't display so many blood stains - so we can reduce slow down
		cg.shellHits++;
		if (cg.shellHits < MAX_SHELL_HITS)
			CG_MissileHitPlayer(WP_M3, tr.endpos, tr.plane.normal, tr.entityNum);
	} else {
		if (tr.surfaceFlags & SURF_NOIMPACT) {
			// SURF_NOIMPACT will not make a flame puff or a mark
			return;
		}
		//Makro - new surfaceparm system
		Material = GetMaterialFromFlag(tr.surfaceFlags);
		//if ( (tr.surfaceFlags & SURF_METALSTEPS) || (tr.surfaceFlags & SURF_METAL2) )
		if (IsMetalMat(Material)) {
			//Blaze: Changed WP_SHOTGUN to WP_M3
			if (shellWeapon == WP_M3)
				CG_MissileHitWall(WP_M3, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_METAL, 0);
			else if (shellWeapon == WP_HANDCANNON && crandom() > 0.5) {
				//Elder: show only approximately every other impact mark
				CG_MissileHitWall(WP_HANDCANNON, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_METAL, 0);
			}
		}
		//else if ( tr.surfaceFlags & SURF_GLASS )
		else if (Material == MAT_GLASS) {
			//Blaze: Changed WP_SHOTGUN to WP_M3
			if (shellWeapon == WP_M3)
				CG_MissileHitWall(WP_M3, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_GLASS, 0);
			else if (shellWeapon == WP_HANDCANNON && crandom() > 0.5) {
				//Elder: show only approximately every other impact mark
				CG_MissileHitWall(WP_HANDCANNON, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_GLASS, 0);
			}
		}
		//Makro - added
		else if (IsWoodMat(Material)) {
			//Blaze: Changed WP_SHOTGUN to WP_M3
			if (shellWeapon == WP_M3)
				CG_MissileHitWall(WP_M3, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_WOOD, 0);
			else if (shellWeapon == WP_HANDCANNON && crandom() > 0.5) {
				//Elder: show only approximately every other impact mark
				CG_MissileHitWall(WP_HANDCANNON, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_WOOD, 0);
			}
		}
		//Makro - added
		else if (Material == MAT_BRICK) {
			//Blaze: Changed WP_SHOTGUN to WP_M3
			if (shellWeapon == WP_M3)
				CG_MissileHitWall(WP_M3, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_BRICK, 0);
			else if (shellWeapon == WP_HANDCANNON && crandom() > 0.5) {
				//Elder: show only approximately every other impact mark
				CG_MissileHitWall(WP_HANDCANNON, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_BRICK, 0);
			}
		}
		//Makro - added
		else if (Material == MAT_CERAMIC) {
			//Blaze: Changed WP_SHOTGUN to WP_M3
			if (shellWeapon == WP_M3)
				CG_MissileHitWall(WP_M3, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_CERAMIC, 0);
			else if (shellWeapon == WP_HANDCANNON && crandom() > 0.5) {
				//Elder: show only approximately every other impact mark
				CG_MissileHitWall(WP_HANDCANNON, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_CERAMIC, 0);
			}
		} else {
			// Elder: By default, the M3 and HC will spark on all surfaces
			// Blaze: Changed WP_SHOTGUN to WP_M3
			if (shellWeapon == WP_M3)
				CG_MissileHitWall(WP_M3, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_METAL, 0);
			else if (shellWeapon == WP_HANDCANNON && crandom() > 0.5) {
				//Elder: show only approximately every other impact mark
				CG_MissileHitWall(WP_HANDCANNON, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_METAL, 0);
			}
			//CG_MissileHitWall( WP_M3, 0, tr.endpos, tr.plane.normal, IMPACTSOUND_DEFAULT, 0 );
		}
	}
}

/*
================
CG_ShotgunPattern

Perform the same traces the server did to locate the
hit splashes
================
*/
static void CG_ShotgunPattern(vec3_t origin, vec3_t origin2, int otherEntNum, int shotType, int seed)
{
	int i;
	float r, u;
	vec3_t end;
	vec3_t forward, right, up;

	int count;
	int hc_multipler = 0;

	// derive the right and up vectors from the forward vector, because
	// the client won't have any other information
	VectorNormalize2(origin2, forward);
	PerpendicularVector(right, forward);
	CrossProduct(forward, right, up);

	// generate the "random" spread pattern

	//Elder: added
	if (shotType == WP_M3)
		count = DEFAULT_M3_COUNT;
	else if (shotType == WP_HANDCANNON) {
		count = DEFAULT_HANDCANNON_COUNT;
		hc_multipler = 4;
	} else {
		count = DEFAULT_HANDCANNON_COUNT;
		hc_multipler = 5;
	}

	cg.shellHits = 0;
	for (i = 0; i < count; i++) {
		if (shotType == WP_M3) {
			r = Q_crandom(&seed) * DEFAULT_M3_HSPREAD * 16;
			u = Q_crandom(&seed) * DEFAULT_M3_VSPREAD * 16;
			//r = crandom() * DEFAULT_M3_HSPREAD * 16;
			//u = crandom() * DEFAULT_M3_VSPREAD * 16;
			//r = crandom() * DEFAULT_SHOTGUN_SPREAD * 16;
			//u = crandom() * DEFAULT_SHOTGUN_SPREAD * 16;
		} else {
			//Elder: fill in shotType
			shotType = WP_HANDCANNON;
			r = Q_crandom(&seed) * DEFAULT_SHOTGUN_HSPREAD * 16 * 4;
			u = Q_crandom(&seed) * DEFAULT_SHOTGUN_VSPREAD * 16 * hc_multipler;
//                      r = crandom() * DEFAULT_HANDCANNON_SPREAD * 16 * 4;
//                      u = crandom() * DEFAULT_HANDCANNON_SPREAD * 16 * 4;
		}
		VectorMA(origin, 8192 * 16, forward, end);
		VectorMA(end, r, right, end);
		VectorMA(end, u, up, end);

		CG_ShotgunPellet(origin, end, otherEntNum, shotType);
	}
	//Reset shellHits once we're finished with it
	cg.shellHits = 0;
}

/*
==============
CG_ShotgunFire
==============
*/
void CG_ShotgunFire(entityState_t * es, qboolean ism3)
{
	vec3_t v;
	int contents;

	VectorSubtract(es->origin2, es->pos.trBase, v);
	VectorNormalize(v);
	VectorScale(v, 32, v);
	VectorAdd(es->pos.trBase, v, v);
	if (cgs.glconfig.hardwareType != GLHW_RAGEPRO) {
		// ragepro can't alpha fade, so don't even bother with smoke
		vec3_t up;

		contents = trap_CM_PointContents(es->pos.trBase, 0);
		if (!(contents & CONTENTS_WATER)) {
			VectorSet(up, 0, 0, 8);
			CG_SmokePuff(v, up, 32, 1, 1, 1, 0.33f, 900, cg.time, 0, LEF_PUFF_DONT_SCALE,
				     cgs.media.shotgunSmokePuffShader);
		}
	}
	//Elder: note param changes
	if (ism3) {
		CG_ShotgunPattern(es->pos.trBase, es->origin2, es->otherEntityNum, WP_M3, es->eventParm);
	} else {
		CG_ShotgunPattern(es->pos.trBase, es->origin2, es->otherEntityNum, WP_HANDCANNON, es->eventParm);
		es->angles2[1] += 20;
		//es->origin2[1] += 5;
		CG_ShotgunPattern(es->pos.trBase, es->origin2, es->otherEntityNum, -1, es->eventParm);
	}
}

/*
============================================================================

BULLETS

============================================================================
*/

/*
===============
CG_CreateTracer
	- NiceAss
===============
*/
void CG_CreateTracer(int entity, vec3_t start, vec3_t end)
{
	localEntity_t *le;
	float dist;
	vec3_t dir, end2;
	vec3_t temp, midpoint;
	float tracerSpeed = 5000;

	VectorSubtract(end, start, dir);
	dist = VectorNormalize(dir);

	if (dist < 1.5 * cg_tracerLength.value)
		return;

	// Stop right before the end
	VectorMA(end, -cg_tracerLength.value, dir, end2);

	VectorSubtract(end2, start, temp);
	dist = VectorLength(temp);

	le = CG_AllocLocalEntity();
	le->leType = LE_TRACER;
	le->startTime = cg.time;
	le->endTime = le->startTime + 1000.0 * (dist / tracerSpeed);

	le->pos.trType = TR_LINEAR;
	le->pos.trTime = le->startTime;
	VectorCopy(start, le->pos.trBase);
	VectorScale(dir, tracerSpeed, le->pos.trDelta);

	midpoint[0] = (start[0] + end2[0]) * 0.5;
	midpoint[1] = (start[1] + end2[1]) * 0.5;
	midpoint[2] = (start[2] + end2[2]) * 0.5;
	trap_S_StartSound(midpoint, ENTITYNUM_WORLD, CHAN_AUTO, cgs.media.tracerSound);
}

/*
===============
CG_Tracer
===============
*/
void CG_Tracer(vec3_t source, vec3_t dest)
{
	vec3_t forward, right;
	polyVert_t verts[4];
	vec3_t line;
	float len, begin, end;
	vec3_t start, finish;

//      vec3_t          midpoint;

	// tracer
	VectorSubtract(dest, source, forward);
	len = VectorNormalize(forward);

	// start at least a little ways from the muzzle
	if (len < 100) {
		return;
	}

	begin = 50 + random() * (len - 60);
	end = begin + cg_tracerLength.value;
	if (end > len) {
		end = len;
	}
	VectorMA(source, begin, forward, start);
	VectorMA(source, end, forward, finish);

	line[0] = DotProduct(forward, cg.refdef.viewaxis[1]);
	line[1] = DotProduct(forward, cg.refdef.viewaxis[2]);

	VectorScale(cg.refdef.viewaxis[1], line[1], right);
	VectorMA(right, -line[0], cg.refdef.viewaxis[2], right);
	VectorNormalize(right);

	VectorMA(finish, cg_tracerWidth.value, right, verts[0].xyz);
	verts[0].st[0] = 0;
	verts[0].st[1] = 1;
	verts[0].modulate[0] = 255;
	verts[0].modulate[1] = 255;
	verts[0].modulate[2] = 255;
	verts[0].modulate[3] = 255;

	VectorMA(finish, -cg_tracerWidth.value, right, verts[1].xyz);
	verts[1].st[0] = 1;
	verts[1].st[1] = 0;
	verts[1].modulate[0] = 255;
	verts[1].modulate[1] = 255;
	verts[1].modulate[2] = 255;
	verts[1].modulate[3] = 255;

	VectorMA(start, -cg_tracerWidth.value, right, verts[2].xyz);
	verts[2].st[0] = 1;
	verts[2].st[1] = 1;
	verts[2].modulate[0] = 255;
	verts[2].modulate[1] = 255;
	verts[2].modulate[2] = 255;
	verts[2].modulate[3] = 255;

	VectorMA(start, cg_tracerWidth.value, right, verts[3].xyz);
	verts[3].st[0] = 0;
	verts[3].st[1] = 0;
	verts[3].modulate[0] = 255;
	verts[3].modulate[1] = 255;
	verts[3].modulate[2] = 255;
	verts[3].modulate[3] = 255;

	trap_R_AddPolyToScene(cgs.media.tracerShader, 4, verts);

	//midpoint[0] = ( start[0] + finish[0] ) * 0.5;
	//midpoint[1] = ( start[1] + finish[1] ) * 0.5;
	//midpoint[2] = ( start[2] + finish[2] ) * 0.5;

	// add the tracer sound
	// trap_S_StartSound( midpoint, ENTITYNUM_WORLD, CHAN_AUTO, cgs.media.tracerSound );
}

/*
======================
CG_Bullet

Renders bullet effects.
Elder: added soundType conditional
======================
*/
void CG_Bullet(vec3_t end, int sourceEntityNum, vec3_t normal,
	       qboolean flesh, int fleshEntityNum, impactSound_t soundType)
{
	trace_t		trace;
	int			sourceContentType, destContentType;
	vec3_t		start;
	centity_t	*cent;
	float		chance;

	chance = cg_tracerChance.value;
	if (chance > 0.4f)
		chance = 0.4f;
	
	// if the shooter is currently valid, calc a source point and possibly
	// do trail effects
	if (sourceEntityNum >= 0 && chance > 0) {
		if (CG_CalcMuzzlePoint(sourceEntityNum, start)) {
			sourceContentType = trap_CM_PointContents(start, 0);
			destContentType = trap_CM_PointContents(end, 0);

			// do a complete bubble trail if necessary
			if ((sourceContentType == destContentType) && (sourceContentType & CONTENTS_WATER)) {
				CG_BubbleTrail(start, end, 32);
			}
			// bubble trail from water into air
			else if ((sourceContentType & CONTENTS_WATER)) {
				trap_CM_BoxTrace(&trace, end, start, NULL, NULL, 0, CONTENTS_WATER);
				CG_BubbleTrail(start, trace.endpos, 32);
			}
			// bubble trail from air into water
			else if ((destContentType & CONTENTS_WATER)) {
				trap_CM_BoxTrace(&trace, start, end, NULL, NULL, 0, CONTENTS_WATER);
				CG_BubbleTrail(trace.endpos, end, 32);
				// TODO: water splash mark
			}
			// draw a tracer
			// Elder: only if not using SSG, check if this client is the source
			if (sourceEntityNum == cg.snap->ps.clientNum) {
				if (cg.snap->ps.weapon != WP_SSG3000 &&
				    (cg.snap->ps.stats[STAT_HOLDABLE_ITEM] & (1 << HI_SILENCER))) {
					if (random() < chance)
						CG_CreateTracer(sourceEntityNum, start, end);
				}
			} else {
				cent = &cg_entities[sourceEntityNum];
				if (cent->currentValid && cent->currentState.weapon != WP_SSG3000) {
					if (random() < chance && cent->muzzleFlashTime != -1) {
						CG_CreateTracer(sourceEntityNum, start, end);
					}
				}
			}
		}
	}
	// impact splash and mark
	if (flesh) {
		CG_Bleed(end, fleshEntityNum);
	} else {
		//Blaze: Changed WP_MACHINEGUN to WP_PISTOL
		CG_MissileHitWall(WP_PISTOL, 0, end, normal, soundType, 0);
	}

}

/*
==================
CG_LocalLaser

Elder:
Local laser dot if it is the client's own laser
==================
*/
static void CG_LocalLaser()
{
	vec3_t muzzle;
	vec3_t forward;
	vec3_t end;
	refEntity_t *re;
	trace_t tr;

	//Create the laser entity if it's not there
	if (cg.laserSight == qfalse) {
		//CG_Printf("Initializing Local Laser...\n");

		cg.laserSight = qtrue;
		cg.laserEnt = CG_AllocLocalEntity();
		cg.laserEnt->startTime = cg.time;
		cg.laserEnt->color[3] = 1.0;
		//cg.laserEnt->pos.trType = TR_INTERPOLATE;
	}
	//Setup refEntity stuff
	re = &cg.laserEnt->refEntity;
	re->radius = 6;
	re->reType = RT_SPRITE;
	re->rotation = 0;
	re->customShader = cgs.media.laserShader;

	//Calculate muzzle and endpoint
	if (CG_CalcMuzzlePoint(cg.snap->ps.clientNum, muzzle)) {
		AngleVectors(cg.snap->ps.viewangles, forward, NULL, NULL);
		VectorMA(muzzle, 8192 * 16, forward, end);
	} else {
		CG_Error("CG_LocalLaser: Could not calculate own muzzle point\n");
	}

	CG_Trace(&tr, muzzle, NULL, NULL, end, cg.predictedPlayerState.clientNum, CONTENTS_SOLID);

	//Set position of laser dot
	if (tr.fraction != 1)
		VectorMA(tr.endpos, -4, forward, tr.endpos);

	VectorCopy(re->origin, re->oldorigin);
	VectorCopy(tr.endpos, re->origin);
	//VectorCopy(tr.endpos, cg.laserEnt->pos.trBase);
	//CG_EvaluateTrajectory(&cg.laserEnt->pos, cg.time, re->origin);

	//Boost the endTime
	cg.laserEnt->endTime += 10000;

	//if (tr.surfaceFlags & SURF_NOIMPACT || tr.surfaceFlags & SURF_SKY)
	//Don't render if it hits the sky
	//if (!(tr.surfaceFlags & SURF_SKY))
	trap_R_AddRefEntityToScene(re);
}

/*
==================
CG_CheckLaser

Elder:
Whether or not to use the local laser
Broken until I find a way to lerp an entity without a cent
==================
*/
void CG_CheckLaser()
{
	//Elder: check for local laser
	if ((cg.snap->ps.stats[STAT_HOLDABLE_ITEM] & (1 << HI_LASER)) &&
	    cg_RQ3_laserAssist.integer &&
	    (cg.snap->ps.weapon == WP_PISTOL || cg.snap->ps.weapon == WP_MP5 || cg.snap->ps.weapon == WP_M4)) {
		CG_LocalLaser();
	}
	//Disable laser
	else if (cg.laserSight == qtrue) {
		//CG_Printf("Destroying Local Laser...\n");
		CG_FreeLocalEntity(cg.laserEnt);
		cg.laserSight = qfalse;
	}
}

/*
==================
CG_ReloadWeapon

Elder: Does local reload effects like
reload shell drops, sounds, etc.
==================
*/
void CG_ReloadWeapon(centity_t * cent, int reloadStage)
{
	entityState_t *ent;
	weaponInfo_t *weap;

	ent = &cent->currentState;
	if (ent->weapon == WP_NONE)
		return;

	if (ent->weapon >= WP_NUM_WEAPONS) {
		CG_Error("CG_ReloadWeapon: ent->weapon >= WP_NUM_WEAPONS");
		return;
	}
	weap = &cg_weapons[ent->weapon];
	switch (reloadStage) {
	case 0:
		if (weap->worldReloadSound[0] && ent->clientNum != cg.snap->ps.clientNum) {
			trap_S_StartSound(cent->lerpOrigin, ent->number, CHAN_AUTO, weap->worldReloadSound[0]);
		}
		break;
	case 1:
		if (weap->worldReloadSound[1] && ent->clientNum != cg.snap->ps.clientNum) {
			trap_S_StartSound(cent->lerpOrigin, ent->number, CHAN_AUTO, weap->worldReloadSound[1]);
		}

		if (ent->weapon == WP_HANDCANNON)
			cent->ejectBrassTime = cg.time;
		// CG_ShotgunEjectBrass( cent );
		break;
	case 2:
		if (weap->worldReloadSound[2] && ent->clientNum != cg.snap->ps.clientNum) {
			trap_S_StartSound(cent->lerpOrigin, ent->number, CHAN_AUTO, weap->worldReloadSound[2]);
		}

		break;
	default:
		CG_Error("CG_ReloadWeapon: Reload stage > 2\n");
		break;
	}
}
