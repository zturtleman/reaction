//-----------------------------------------------------------------------------
//
// $Id$
//
//-----------------------------------------------------------------------------
//
// $Log$
// Revision 1.93  2005/02/15 16:33:39  makro
// Tons of updates (entity tree attachment system, UI vectors)
//
// Revision 1.92  2003/09/19 21:25:10  makro
// Flares (again!). Doors that open away from players.
//
// Revision 1.91  2003/09/01 15:09:49  jbravo
// Cleanups, crashbug fix and version bumped to 3.2
//
// Revision 1.90  2003/07/30 16:05:47  makro
// no message
//
// Revision 1.89  2003/04/26 22:33:07  jbravo
// Wratted all calls to G_FreeEnt() to avoid crashing and provide debugging
//
// Revision 1.88  2003/03/28 10:36:02  jbravo
// Tweaking the replacement system a bit.  Reactionmale now the default model
//
// Revision 1.87  2003/03/22 20:29:26  jbravo
// wrapping linkent and unlinkent calls
//
// Revision 1.86  2003/03/09 21:30:38  jbravo
// Adding unlagged.   Still needs work.
//
// Revision 1.85  2002/12/20 14:29:47  jbravo
// Activated the second barrel on the HC
//
// Revision 1.84  2002/10/26 22:03:43  jbravo
// Made TeamDM work RQ3 style.
//
// Revision 1.83  2002/10/26 00:37:18  jbravo
// New multiple item code and added PB support to the UI
//
// Revision 1.82  2002/09/24 05:06:17  blaze
// fixed spectating so ref\'s can now use all the chasecam modes.
//
// Revision 1.81  2002/09/08 03:31:36  niceass
// accuracy improved
//
// Revision 1.80  2002/09/02 02:23:45  niceass
// removed spherical head detection and may have helped the ssg accuracy bug
//
// Revision 1.79  2002/08/28 23:10:06  jbravo
// Added cg_RQ3_SuicideLikeARealMan, timestamping to server logs and
// fixed stats for non-TP modes.
//
// Revision 1.78  2002/08/23 23:07:01  blaze
// Should have fixed the unkickable thing breaking explosive breakables.
//
// Revision 1.77  2002/07/22 07:27:02  niceass
// better fog laser support
//
// Revision 1.76  2002/07/22 06:32:15  niceass
// cleaned up the powerup code
//
// Revision 1.75  2002/07/09 05:41:23  niceass
// fix to kicking in CTB
//
// Revision 1.74  2002/07/04 00:59:25  blaze
// moved the kick counter for stats to a more accurate spot.
//
// Revision 1.73  2002/07/01 19:48:56  makro
// Fixed a crash bug
//
// Revision 1.72  2002/06/29 20:58:10  niceass
// shoot through teammates
//
// Revision 1.71  2002/06/29 02:41:34  niceass
// m4 kick fix
//
// Revision 1.70  2002/06/26 03:27:37  niceass
// handcannon crash bug fixed
//
// Revision 1.69  2002/06/24 05:51:51  jbravo
// CTF mode is now semi working
//
// Revision 1.68  2002/06/24 01:21:26  blaze
// changed HC to be more like aq2.  Probably more work needed
//
// Revision 1.67  2002/06/23 21:44:08  jbravo
// Fixed shots fired stats for non TP modes and some cleanups
//
// Revision 1.66  2002/06/16 20:06:14  jbravo
// Reindented all the source files with "indent -kr -ut -i8 -l120 -lc120 -sob -bad -bap"
//
// Revision 1.65  2002/06/16 17:38:00  jbravo
// Removed the MISSIONPACK ifdefs and missionpack only code.
//
// Revision 1.64  2002/06/03 00:40:25  blaze
// some more breakables fixes(ssg chips)
//
// Revision 1.63  2002/06/02 22:04:38  blaze
// breakables act proper when triggered(explode if explosive, etc)  also, spawnflags 8 will make the breakable so you cant kick it
//
// Revision 1.62  2002/05/27 06:54:06  niceass
// new reflection code
//
// Revision 1.61  2002/05/25 10:40:31  makro
// Loading screen
//
// Revision 1.60  2002/05/24 18:47:02  makro
// Jump kicks
//
// Revision 1.59  2002/05/20 16:25:48  makro
// Triggerable cameras
//
// Revision 1.58  2002/05/20 16:23:44  jbravo
// Fixed spec problem when noone is alive. Fixed kicking teammates bug
//
// Revision 1.57  2002/05/18 14:52:16  makro
// Bot stuff. Other stuff. Just... stuff :p
//
// Revision 1.56  2002/05/12 22:14:13  makro
// Impact sounds
//
// Revision 1.55  2002/05/12 14:40:28  makro
// Wood, brick & ceramic impact sounds
//
// Revision 1.54  2002/05/12 13:37:25  makro
// Bugs with entities
//
// Revision 1.53  2002/05/05 15:18:03  makro
// Fixed some crash bugs. Bot stuff. Triggerable func_statics.
// Made flags only spawn in CTF mode
//
// Revision 1.52  2002/05/03 18:09:20  makro
// Bot stuff. Jump kicks
//
// Revision 1.51  2002/05/02 23:05:25  makro
// Loading screen. Jump kicks. Bot stuff
//
// Revision 1.50  2002/05/02 03:06:09  blaze
// Fixed breakables crashing on vashes
//
// Revision 1.49  2002/04/29 06:16:10  niceass
// small change to pressure system
//
// Revision 1.48  2002/04/26 03:57:51  niceass
// took some old stuff out + small pressure stuff
//
// Revision 1.47  2002/04/23 06:00:32  niceass
// pressure stuff
//
// Revision 1.46  2002/04/21 00:31:27  blaze
// ssg now properly breaks breakables
//
// Revision 1.45  2002/04/20 15:03:48  makro
// More footstep sounds, a few other things
//
// Revision 1.44  2002/04/07 19:23:41  jbravo
// Yet another crashbug fixed.
//
// Revision 1.43  2002/04/06 21:42:20  makro
// Changes to bot code. New surfaceparm system.
//
// Revision 1.42  2002/04/03 09:26:47  jbravo
// New FF system. Warns and then finally kickbans teamwounders and
// teamkillers
//
// Revision 1.41  2002/04/02 00:28:10  slicer
// Reduced the "arc" knife does
//
// Revision 1.40  2002/03/31 19:15:21  makro
// Door kicking - ignore doors with targetnames
//
// Revision 1.39  2002/03/31 03:31:24  jbravo
// Compiler warning cleanups
//
// Revision 1.38  2002/03/30 15:25:57  makro
// Fixed door kicking
//
// Revision 1.37  2002/03/12 04:55:31  blaze
// stats should only be recored when the round is in progress
//
// Revision 1.36  2002/03/03 02:20:58  jbravo
// No kicking teammates in TP
//
// Revision 1.35  2002/01/27 14:02:51  jbravo
// Make the right effect when rounds hit the new SURF_HARDMETAL surface.
//
// Revision 1.34  2002/01/11 20:20:58  jbravo
// Adding TP to main branch
//
// Revision 1.33  2002/01/11 19:48:30  jbravo
// Formatted the source in non DOS format.
//
// Revision 1.32  2001/12/31 16:28:42  jbravo
// I made a Booboo with the Log tag.
//
//
//-----------------------------------------------------------------------------
// Copyright (C) 1999-2000 Id Software, Inc.
//
// g_weapon.c
// perform the server side effects of a weapon firing

#include "g_local.h"
// JBravo: for warnings
void Use_BinaryMover(gentity_t * ent, gentity_t * other, gentity_t * activator);

static vec3_t forward, right, up;
static vec3_t muzzle;

//Elder: used for shell damage - we have no more malloc function so make it static?
int tookShellHit[MAX_CLIENTS];

#define NUM_NAILSHOTS 15

/*
================
G_BounceProjectile
================
*/
void G_BounceProjectile(vec3_t start, vec3_t impact, vec3_t dir, vec3_t endout)
{
	vec3_t v, newv;
	float dot;

	VectorSubtract(impact, start, v);
	dot = DotProduct(v, dir);
	VectorMA(v, -2 * dot, dir, newv);

	VectorNormalize(newv);
	VectorMA(impact, 8192, newv, endout);
}

/*
======================================================================

RQ3_JumpKick
Moved from g_active.c to g_weapon.c
Because it is a weapon!

======================================================================
*/

qboolean JumpKick(gentity_t * ent)
{
	trace_t tr;
	vec3_t end;
	gentity_t *tent, *traceEnt;
	int damage;

	//Elder: for kick sound
	qboolean kickSuccess;

	if (g_gametype.integer == GT_TEAMPLAY && level.lights_camera_action) {
		return qfalse;	// JBravo: No kicking during LCA
	}
	//Makro - added
	if (ent == NULL || ent->client == NULL) {
		return qfalse;
	}
	// set aiming directions
	AngleVectors(ent->client->ps.viewangles, forward, right, up);
	CalcMuzzlePoint(ent, forward, right, up, muzzle);
	// Elder: AQ2 offset
	muzzle[2] -= (ent->client->ps.viewheight - 20);
	VectorMA(muzzle, 25, forward, end);

	// the muzzle really isn't the right point to test the jumpkick from

	trap_Trace(&tr, muzzle, NULL, NULL, end, ent->s.number, MASK_SHOT);

	if (tr.surfaceFlags & SURF_NOIMPACT) {
		return qfalse;
	}

	kickSuccess = DoorKick(&tr, ent, muzzle, forward);
	traceEnt = &g_entities[tr.entityNum];

// JBravo: some sanity checks on the traceEnt
// Makro - this check made the sound only play when a client is hit
	if (traceEnt == NULL)
		return qfalse;

	//Makro - removed
	//if (!traceEnt->takedamage)
	//      return qfalse;

	//Makro - this was a few lines below
	damage = 20;

	if ((traceEnt->s.eType == ET_BREAKABLE || traceEnt->s.eType == ET_MOVER) && traceEnt->unkickable == qtrue )  {
		return qfalse;
	}

	if (traceEnt->s.eType == ET_BREAKABLE || traceEnt->client)
		kickSuccess = qtrue;

// JBravo: no kicking teammates while rounds are going
	if (g_gametype.integer >= GT_TEAM) {
		//Makro - client check here
		if (traceEnt->client != NULL && ent->client != NULL) {
			// TP
			if (ent->client->sess.sessionTeam == traceEnt->client->sess.sessionTeam &&
			    level.team_round_going && g_gametype.integer == GT_TEAMPLAY) {
				return qfalse;
			}
			// CTF
			if (ent->client->sess.sessionTeam == traceEnt->client->sess.sessionTeam &&
			    (g_gametype.integer == GT_CTF || g_gametype.integer == GT_TEAM)) {
				return qfalse;
			}
		}
	}
	//Elder: can't hit if crouching but can still hit "dead" bodies :)
	if (traceEnt->client && traceEnt->health > 0 && traceEnt->r.maxs[2] < 20) {
		return qfalse;
	} else {
		G_Damage(traceEnt, ent, ent, forward, tr.endpos, damage, DAMAGE_NO_LOCATIONAL, MOD_KICK);
  
	}
	//end Makro

	//Makro - moved some code up by a few lines to allow breakables to be kicked
	if (traceEnt->client != NULL && traceEnt->takedamage) {
		tent = G_TempEntity(tr.endpos, EV_JUMPKICK);
		tent->s.otherEntityNum = traceEnt->s.number;
		tent->s.otherEntityNum2 = ent->s.number;
		tent->s.eventParm = DirToByte(tr.plane.normal);
		tent->s.weapon = 0;

		if (traceEnt->client->uniqueWeapons > 0) {
			//Elder: toss a unique weapon if kicked
			//Need to make sure to cancel any reload attempts - test this
			Cmd_Unzoom(traceEnt);
			traceEnt->client->fastReloads = 0;
			traceEnt->client->reloadAttempts = 0;
			traceEnt->client->ps.weaponTime = 0;

			//Set the entity's weapon to the target's weapon before he/she throws it
			tent->s.weapon = ThrowWeapon(traceEnt, qtrue);
      ent->client->pers.records[REC_KICKHITS]++;
		}
		// Don't need other sound event
		kickSuccess = qfalse;
	}
	//Elder: Our set of locally called sounds
	if (kickSuccess) {
		G_AddEvent(ent, EV_RQ3_SOUND, RQ3_SOUND_KICK);
		
	}

	return qtrue;
}

qboolean DoorKick(trace_t * trIn, gentity_t * ent, vec3_t origin, vec3_t forward)
{
	gentity_t *traceEnt;
	trace_t tr;
	qboolean ok = qfalse;

	traceEnt = &g_entities[trIn->entityNum];
	if (Q_stricmp(traceEnt->classname, "func_door_rotating") == 0) {
		vec3_t d_right, d_forward;
		float crossProduct;
		vec3_t end;

		// Find the hit point and the muzzle point with respect
		// to the door's origin, then project down to the XY plane
		// and take the cross product
		VectorSubtract(trIn->endpos, traceEnt->s.origin, d_right);
		VectorSubtract(origin, traceEnt->s.origin, d_forward);
		crossProduct = d_forward[0] * d_right[1] - d_right[0] * d_forward[1];

		//Makro - doors that open away from the player can be kicked from either side
		if (traceEnt->spawnflags & SP_OPENAWAY) {
			ok = qtrue;
		} else {
			// See if we are on the proper side to do it
			//Makro - it didn't take into account moverstate
			ok = ((traceEnt->pos2[1] > traceEnt->pos1[1]) && crossProduct > 0) ||
				((traceEnt->pos2[1] < traceEnt->pos1[1]) && crossProduct < 0);
			if (traceEnt->moverState == ROTATOR_1TO2 || traceEnt->moverState == ROTATOR_POS2) {
				ok = !ok;
			}
		}
		if (ok && !traceEnt->targetname && !traceEnt->takedamage) {
			//Cmd_OpenDoor( ent );
			//Makro - Cmd_OpenDoor opens ALL the doors near the kicked one
			Use_BinaryMover(traceEnt, traceEnt, ent);
			VectorMA(trIn->endpos, 25, forward, end);
			trap_Trace(&tr, trIn->endpos, NULL, NULL, end, trIn->entityNum, MASK_SHOT);
			if (!(tr.surfaceFlags & SURF_NOIMPACT)) {
				traceEnt = &g_entities[tr.entityNum];
				if (traceEnt->client) {
					*trIn = tr;
				}
			}
			return qtrue;
		}

	}

	return qfalse;

}

/*
======================================================================

GAUNTLET

======================================================================
*/
/*
void Weapon_Gauntlet( gentity_t *ent ) {

}
*/
/*
===============
CheckGauntletAttack
===============
*/
qboolean CheckGauntletAttack(gentity_t * ent)
{
	trace_t tr;
	vec3_t end;
	gentity_t *tent;
	gentity_t *traceEnt;
	int damage;

	// set aiming directions
	AngleVectors(ent->client->ps.viewangles, forward, right, up);

	CalcMuzzlePoint(ent, forward, right, up, muzzle);

	VectorMA(muzzle, 32, forward, end);

	trap_Trace(&tr, muzzle, NULL, NULL, end, ent->s.number, MASK_SHOT);
	if (tr.surfaceFlags & SURF_NOIMPACT) {
		return qfalse;
	}

	if ( ent->client->noclip ) {
		return qfalse;
	}

	traceEnt = &g_entities[tr.entityNum];

	// send blood impact
	if (traceEnt->takedamage && traceEnt->client) {
		tent = G_TempEntity(tr.endpos, EV_MISSILE_HIT);
		tent->s.otherEntityNum = traceEnt->s.number;
		tent->s.eventParm = DirToByte(tr.plane.normal);
		tent->s.weapon = ent->s.weapon;
	}

	if (!traceEnt->takedamage) {
		return qfalse;
	}

	damage = 50;
	G_Damage(traceEnt, ent, ent, forward, tr.endpos, damage, 0, MOD_GAUNTLET);

	return qtrue;
}

/*
======================================================================

MACHINEGUN

======================================================================
*/

/*
======================
SnapVectorTowards

Round a vector to integers for more efficient network
transmission, but make sure that it rounds towards a given point
rather than blindly truncating.  This prevents it from truncating
into a wall.
======================
*/
// JBravo: unlagged. moved to q_shared.c

void SnapVectorTowards(vec3_t v, vec3_t to)
{
	int i;

	for (i = 0; i < 3; i++) {
		if (to[i] <= v[i]) {
			v[i] = floor(v[i]);
		} else {
			v[i] = ceil(v[i]);
		}
	}
}

#define MACHINEGUN_SPREAD	200
#define	MACHINEGUN_DAMAGE	7
#define	MACHINEGUN_TEAM_DAMAGE	5	// wimpier MG in teamplay

void Bullet_Fire(gentity_t * ent, float spread, int damage, int MOD)
{
	trace_t tr;
	vec3_t end;
	float r;
	float u;
	gentity_t *tent;
	gentity_t *tent2;
	gentity_t *traceEnt;
	int i, passent;
//	int seed = ent->client->attackTime % 256;

	//Makro
	int Material;

	// Elder: Statistics tracking
	// JBravo: Take NON TP modes into account
	if (ent->client && ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) ||
			  g_gametype.integer != GT_TEAMPLAY)) {
		switch (MOD) {
		case MOD_PISTOL:
			ent->client->pers.records[REC_MK23SHOTS]++;
			break;
		case MOD_M4:
			ent->client->pers.records[REC_M4SHOTS]++;
			break;
		case MOD_MP5:
			ent->client->pers.records[REC_MP5SHOTS]++;
			break;
		case MOD_AKIMBO:
			ent->client->pers.records[REC_AKIMBOSHOTS]++;
			break;
		}
	}

	u = crandom() * spread;
	r = crandom() * spread;
	VectorMA(muzzle, 8192, forward, end);
	VectorMA(end, r, right, end);
	VectorMA(end, u, up, end);

	passent = ent->s.number;
	for (i = 0; i < 10; i++) {
// JBravo: unlagged
//		G_DoTimeShiftFor(ent);
		trap_Trace(&tr, muzzle, NULL, NULL, end, passent, MASK_SHOT);
//		G_UndoTimeShiftFor(ent);

		// we traced from the muzzle, ignoring our entity, but triggered start solid.
		// lets try again from our origin since we might just be really close to another player.
		if ( tr.startsolid ) {
			trap_Trace(&tr, ent->client->ps.origin, NULL, NULL, end, passent, MASK_SHOT);
		}

		//Makro - saving the material flag to avoid useless calls to the GetMaterialFromFlag function
		Material = GetMaterialFromFlag(tr.surfaceFlags);

		if (tr.surfaceFlags & SURF_NOIMPACT) {
			return;
		}

		traceEnt = &g_entities[tr.entityNum];

		// snap the endpos to integers, but nudged towards the line
		SnapVectorTowards(tr.endpos, muzzle);

		if (traceEnt->takedamage && traceEnt->client) {
			if (LogAccuracyHit(traceEnt, ent)) {
				ent->client->accuracy_hits++;
				// Elder: Statistics tracking
				if ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY) {
					switch (MOD) {
					case MOD_PISTOL:
						ent->client->pers.records[REC_MK23HITS]++;
						break;
					case MOD_M4:
						ent->client->pers.records[REC_M4HITS]++;
						break;
					case MOD_MP5:
						ent->client->pers.records[REC_MP5HITS]++;
						break;
					case MOD_AKIMBO:
						ent->client->pers.records[REC_AKIMBOHITS]++;
						break;
					}
				}
			}
		} else if (IsMetalMat(Material)) {
			tent = G_TempEntity(tr.endpos, EV_BULLET_HIT_METAL);
			tent->s.eventParm = ReflectVectorByte(forward, tr.plane.normal);
			tent->s.otherEntityNum = ent->s.number;
			tent->s.clientNum = ent->s.clientNum;
		} else if (Material == MAT_GLASS) {
			tent = G_TempEntity(tr.endpos, EV_BULLET_HIT_GLASS);
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.otherEntityNum = ent->s.number;
			tent->s.clientNum = ent->s.clientNum;
			//Makro - new sounds
		} else if (IsWoodMat(Material)) {
			tent = G_TempEntity(tr.endpos, EV_BULLET_HIT_WOOD);
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.otherEntityNum = ent->s.number;
			tent->s.clientNum = ent->s.clientNum;
			//Makro - new sounds
		} else if (Material == MAT_BRICK) {
			tent = G_TempEntity(tr.endpos, EV_BULLET_HIT_BRICK);
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.otherEntityNum = ent->s.number;
			tent->s.clientNum = ent->s.clientNum;
			//Makro - new sounds
		} else if (Material == MAT_CERAMIC) {
			tent = G_TempEntity(tr.endpos, EV_BULLET_HIT_CERAMIC);
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.otherEntityNum = ent->s.number;
			tent->s.clientNum = ent->s.clientNum;
			//Makro - new fx
		} else if (IsSnowMat(Material)) {
			tent = G_TempEntity(tr.endpos, EV_BULLET_HIT_SNOW);
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.otherEntityNum = ent->s.number;
			tent->s.clientNum = ent->s.clientNum;
			//Makro - new fx
		} else if (Material == MAT_GRASS) {
			tent = G_TempEntity(tr.endpos, EV_BULLET_HIT_GRASS);
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.otherEntityNum = ent->s.number;
			tent->s.clientNum = ent->s.clientNum;
		} else {
			tent = G_TempEntity(tr.endpos, EV_BULLET_HIT_WALL);
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.otherEntityNum = ent->s.number;
			tent->s.clientNum = ent->s.clientNum;
		}

		//Makro - moved the pressure code out of these if's
		if (traceEnt->s.eType == ET_PRESSURE) {
			// Pressure entities
			G_CreatePressure(tr.endpos, tr.plane.normal, traceEnt);
		}

		if (traceEnt->takedamage) {
			if (traceEnt->client)
				traceEnt->client->kevlarHit = qfalse;

			G_Damage(traceEnt, ent, ent, forward, tr.endpos, damage, 0, MOD);

			// FIXME: poor implementation
			if (traceEnt->client && traceEnt->client->kevlarHit == qfalse ) {
			    //&& bg_itemlist[traceEnt->client->ps.stats[STAT_HOLDABLE_ITEM]].giTag == HI_KEVLAR) {
				if ( !OnSameTeam(traceEnt, ent) || (OnSameTeam(traceEnt, ent) && g_friendlyFire.integer > 0) ) {

					tent2 = G_TempEntity(tr.endpos, EV_BULLET_HIT_FLESH);
					//tent->s.eventParm = traceEnt->s.number;
					tent2->s.eventParm = DirToByte(forward);
					tent2->s.otherEntityNum2 = traceEnt->s.number;
					// Need this?
					tent2->s.otherEntityNum = ent->s.number;
				}
			}
			// NiceAss: Added so the M4 will shoot through bodies
			// Makro - changed from || to &&. Q3 crashed before
			if (traceEnt->client && ent->client) {
				if ((MOD == MOD_M4 && traceEnt->client->kevlarHit == qfalse) ||
					// NiceAss: And you can shoot through teammates
					OnSameTeam(traceEnt, ent)) {
					VectorCopy(tr.endpos, muzzle);
					passent = tr.entityNum;
					continue;
				}
			}
		}
		break;
	}
}

/*
======================================================================

SHOTGUN

======================================================================
*/

// DEFAULT_SHOTGUN_SPREAD and DEFAULT_SHOTGUN_COUNT     are in bg_public.h, because
// client predicts same spreads
#define	DEFAULT_SHOTGUN_DAMAGE	10

qboolean ShotgunPellet(vec3_t start, vec3_t end, gentity_t * ent)
{
	trace_t tr;
	int damage, i, passent;
	gentity_t *traceEnt;
	vec3_t tr_start, tr_end;

	passent = ent->s.number;
	VectorCopy(start, tr_start);
	VectorCopy(end, tr_end);

	for (i = 0; i < 10; i++) {
		trap_Trace(&tr, tr_start, NULL, NULL, tr_end, passent, MASK_SHOT);
		traceEnt = &g_entities[tr.entityNum];

		// send bullet impact
		if (tr.surfaceFlags & SURF_NOIMPACT) {
			return qfalse;
		}

		if (traceEnt->takedamage) {
			//Elder: added to discern handcannon and m3 damage
			if (ent->client && ent->client->ps.weapon == WP_HANDCANNON) {
				//G_Printf("Firing handcannon\n");
				damage = HANDCANNON_DAMAGE;
				G_Damage(traceEnt, ent, ent, forward, tr.endpos, damage, 0, MOD_HANDCANNON);
			} else {
				//G_Printf("Firing M3\n");
				damage = M3_DAMAGE;
				G_Damage(traceEnt, ent, ent, forward, tr.endpos, damage, 0, MOD_M3);
			}

			if (LogAccuracyHit(traceEnt, ent)) {
				return qtrue;
			}
			
			if ( OnSameTeam(traceEnt, ent) ) {
				VectorCopy( tr.endpos, tr_start );
				passent = tr.entityNum;
				continue;
			}
		}
		return qfalse;
	}
	return qfalse;
}

// this should match CG_ShotgunPattern
void ShotgunPattern(vec3_t origin, vec3_t origin2, int seed, gentity_t * ent, int shotType)
{
	int i;
	float r, u;
	vec3_t end;
	vec3_t forward, right, up;
//	int oldScore;
	qboolean hitClient = qfalse;

	//Elder: added
	int count;

	//Makro - wasn't initialized, caused a warning in MSVC
	int hc_multipler = 4;

	// derive the right and up vectors from the forward vector, because
	// the client won't have any other information
	VectorNormalize2(origin2, forward);
	PerpendicularVector(right, forward);
	CrossProduct(forward, right, up);

//	oldScore = ent->client->ps.persistant[PERS_SCORE];

	//Elder: added
	if (shotType == WP_M3) {
		// Elder: Statistics tracking
		if ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY)
			ent->client->pers.records[REC_M3SHOTS]++;
		count = DEFAULT_M3_COUNT;
	} else if (shotType == WP_HANDCANNON) {
		// Elder: Statistics tracking
		// JBravo: moving counting elsewhere to not count each HC shot twice as this gets called once
		// for each barrel of the HC
//		if ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY)
//			ent->client->pers.records[REC_HANDCANNONSHOTS]++;
		count = DEFAULT_HANDCANNON_COUNT;
		hc_multipler = 4;
	} else {
		// Elder: Statistics tracking
		// JBravo: moving counting elsewhere to not count each HC shot twice as this gets called once
//		if ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY)
//			ent->client->pers.records[REC_HANDCANNONSHOTS]++;
		count = DEFAULT_HANDCANNON_COUNT;
		hc_multipler = 5;
	}

//	G_DoTimeShiftFor(ent);
	// generate the "random" spread pattern
	for (i = 0; i < count; i++) {
		if (shotType == WP_M3) {
			r = Q_crandom(&seed) * DEFAULT_M3_HSPREAD;
			u = Q_crandom(&seed) * DEFAULT_M3_VSPREAD;
		} else {
			r = Q_crandom(&seed) * DEFAULT_SHOTGUN_HSPREAD * 4;
			u = Q_crandom(&seed) * DEFAULT_SHOTGUN_VSPREAD * hc_multipler;
		}

		VectorMA(origin, 8192, forward, end);
		VectorMA(end, r, right, end);
		VectorMA(end, u, up, end);
		if (ShotgunPellet(origin, end, ent)) {
			if (!hitClient) {
				hitClient = qtrue;
				ent->client->accuracy_hits++;
				// Elder: Statistics tracking
				if ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY) {
					switch (shotType) {
					case WP_M3:
						ent->client->pers.records[REC_M3HITS]++;
						//ent->client->m3Hits++;
						break;
					case WP_HANDCANNON:
						ent->client->pers.records[REC_HANDCANNONHITS]++;
						//ent->client->hcHits++;
						break;
					}
				}
			}
		}
	}
//	G_UndoTimeShiftFor(ent);
}

void weapon_supershotgun_fire(gentity_t * ent)
{
	gentity_t *tent;

	// send shotgun blast
	tent = G_TempEntity(muzzle, EV_SHOTGUN);
	VectorScale(forward, 4096, tent->s.origin2);
	SnapVector(tent->s.origin2);
	tent->s.eventParm = rand() & 255;	// seed for spread pattern
	tent->s.otherEntityNum = ent->s.number;

	//Elder: removed for now
	//ShotgunPattern( tent->s.pos.trBase, tent->s.origin2, tent->s.eventParm, ent, qtrue );
}

/*
======================================================================

RAILGUN

======================================================================
*/

/*
=================
weapon_railgun_fire
=================
*/
#define	MAX_RAIL_HITS	4
void weapon_railgun_fire(gentity_t * ent)
{
	vec3_t end;
	trace_t trace;
	gentity_t *tent;
	gentity_t *traceEnt;
	int damage;
	int i;
	int hits;
	int unlinked;
	int passent;
	gentity_t *unlinkedEntities[MAX_RAIL_HITS];

	damage = 100;

	VectorMA(muzzle, 8192, forward, end);

	// trace only against the solids, so the railgun will go through people
//	G_DoTimeShiftFor(ent);
	unlinked = 0;
	hits = 0;
	passent = ent->s.number;
	do {
		trap_Trace(&trace, muzzle, NULL, NULL, end, passent, MASK_SHOT);
		if (trace.entityNum >= ENTITYNUM_MAX_NORMAL) {
			break;
		}
		traceEnt = &g_entities[trace.entityNum];
		if (traceEnt->takedamage) {
			if (LogAccuracyHit(traceEnt, ent)) {
				hits++;
			}
			G_Damage(traceEnt, ent, ent, forward, trace.endpos, damage, 0, MOD_RAILGUN);
		}
		if (trace.contents & CONTENTS_SOLID) {
			break;	// we hit something solid enough to stop the beam
		}
		// unlink this entity, so the next trace will go past it
		trap_UnlinkEntity(traceEnt);
		unlinkedEntities[unlinked] = traceEnt;
		unlinked++;
	} while (unlinked < MAX_RAIL_HITS);
//	G_UndoTimeShiftFor(ent);

	// link back in any entities we unlinked
	for (i = 0; i < unlinked; i++) {
		trap_LinkEntity(unlinkedEntities[i]);
	}

	// the final trace endpos will be the terminal point of the rail trail

	// snap the endpos to integers to save net bandwidth, but nudged towards the line
	SnapVectorTowards(trace.endpos, muzzle);

	// send railgun beam effect
	tent = G_TempEntity(trace.endpos, EV_RAILTRAIL);

	// set player number for custom colors on the railtrail
	tent->s.clientNum = ent->s.clientNum;

	VectorCopy(muzzle, tent->s.origin2);
	// move origin a bit to come closer to the drawn gun muzzle
	VectorMA(tent->s.origin2, 4, right, tent->s.origin2);
	VectorMA(tent->s.origin2, -1, up, tent->s.origin2);

	// no explosion at end if SURF_NOIMPACT, but still make the trail
	if (trace.surfaceFlags & SURF_NOIMPACT) {
		tent->s.eventParm = 255;	// don't make the explosion at the end
	} else {
		tent->s.eventParm = DirToByte(trace.plane.normal);
	}
	tent->s.clientNum = ent->s.clientNum;

	// give the shooter a reward sound if they have made two railgun hits in a row
	if (hits == 0) {
		// complete miss
		ent->client->accurateCount = 0;
	} else {
		// check for "impressive" reward sound
		ent->client->accurateCount += hits;
		if (ent->client->accurateCount >= 2) {
			ent->client->accurateCount -= 2;

			//Blaze: Removed because it uses the persistant stats stuff
			//ent->client->ps.persistant[PERS_IMPRESSIVE_COUNT]++;
			// add the sprite over the player's head
			ent->client->ps.eFlags &=
			    ~(EF_AWARD_IMPRESSIVE | EF_AWARD_EXCELLENT | EF_AWARD_GAUNTLET | EF_AWARD_ASSIST |
			      EF_AWARD_DEFEND | EF_AWARD_CAP);
			ent->client->ps.eFlags |= EF_AWARD_IMPRESSIVE;
			ent->client->rewardTime = level.time + REWARD_SPRITE_TIME;
		}
		ent->client->accuracy_hits++;
	}

}

/*
======================================================================

LIGHTNING GUN

======================================================================
*/

void Weapon_LightningFire(gentity_t * ent)
{
	trace_t tr;
	vec3_t end;
	gentity_t *traceEnt, *tent;
	int damage, i, passent;

	damage = 8;

	passent = ent->s.number;
	for (i = 0; i < 10; i++) {
		VectorMA(muzzle, LIGHTNING_RANGE, forward, end);

		trap_Trace(&tr, muzzle, NULL, NULL, end, passent, MASK_SHOT);
		if (tr.entityNum == ENTITYNUM_NONE) {
			return;
		}

		traceEnt = &g_entities[tr.entityNum];

		if (traceEnt->takedamage) {
			G_Damage(traceEnt, ent, ent, forward, tr.endpos, damage, 0, MOD_LIGHTNING);
		}

		if (traceEnt->takedamage && traceEnt->client) {
			tent = G_TempEntity(tr.endpos, EV_MISSILE_HIT);
			tent->s.otherEntityNum = traceEnt->s.number;
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.weapon = ent->s.weapon;
			if (LogAccuracyHit(traceEnt, ent)) {
				ent->client->accuracy_hits++;
			}
		} else if (!(tr.surfaceFlags & SURF_NOIMPACT)) {
			tent = G_TempEntity(tr.endpos, EV_MISSILE_MISS);
			tent->s.eventParm = DirToByte(tr.plane.normal);
		}

		break;
	}
}

/*
========================================================================

KNIFE ATTACKS

========================================================================
*/

//Elder: changed to void function
void Knife_Attack(gentity_t * self, int damage)
{
	trace_t tr;
	vec3_t end;
	gentity_t *hitent;
	gentity_t *tent;

	if (self->client && ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY))
//		self->client->pers.records[REC_KNIFESLASHSHOTS]++;

	VectorMA(muzzle, KNIFE_RANGE, forward, end);
	trap_Trace(&tr, muzzle, NULL, NULL, end, self->s.number, MASK_SHOT);
	hitent = &g_entities[tr.entityNum];

	// don't need to check for water
	//if (!((tr.surfaceFlags) && (tr.surfaceFlags & SURF_SKY)))
	if (!(tr.surfaceFlags & SURF_SKY)) {
		if (tr.fraction < 1.0) {
			if (hitent->takedamage) {
				//Elder: no knock-back on knife slashes
				G_Damage(hitent, self, self, forward, tr.endpos, damage, DAMAGE_NO_KNOCKBACK,
					 MOD_KNIFE);
				if (hitent->client)
					self->client->knife_sound = -2;
			} else
				self->client->knife_sound = -1;
		}
	}
	// NiceAss: Play appropriate sound on 5th slash
	if (self->client->ps.stats[STAT_BURST] > 4) {
		self->client->pers.records[REC_KNIFESLASHSHOTS]++;
		if (self->client->knife_sound == 0) {	// Missed
			// TODO: Miss sound should be here, like in AQ2
		} else if (self->client->knife_sound == -1) {	// Hit wall
			//Elder TODO: take into account surface flags for clank
			tent = G_TempEntity(tr.endpos, EV_KNIFE_MISS);
			tent->s.eventParm = DirToByte(tr.plane.normal);
			tent->s.weapon = WP_KNIFE;
			//Makro - added
			tent->s.powerups = GetMaterialFromFlag(tr.surfaceFlags);;
		} else if (self->client->knife_sound == -2) {	// Hit player
			tent = G_TempEntity(tr.endpos, EV_RQ3_SOUND);
			tent->s.eventParm = RQ3_SOUND_KNIFEHIT;
			if (self->client && ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY))
				self->client->pers.records[REC_KNIFESLASHHITS]++;
		}
		self->client->knife_sound = 0;
	}

	if (hitent->s.eType == ET_PRESSURE) {
		// Pressure entity
		G_CreatePressure(tr.endpos, tr.plane.normal, hitent);
	}
}

//static int knives = 0;

//Elder: this function does not appear to be in use
/*
void Knife_Touch(gentity_t * ent, gentity_t * other, trace_t * trace)
{
	vec3_t origin;
	gitem_t *xr_item;
	gentity_t *xr_drop;

	G_Printf("Knife Touched Something\n");

	if (other == ent->parent)
		return;

	if (trace && (trace->surfaceFlags & SURF_SKY)) {
		//Blaze: Get rid of the knife if it hits the sky
//                G_FreeEdict (ent);
		//Elder: I think you want this
		G_FreeEntity(ent);
		return;
	}

	if (ent->parent->client) {
		//Blaze: Play the clank hit noise
//      gi.sound(ent, CHAN_WEAPON, gi.soundindex("weapons/clank.wav"), 1, ATTN_NORM, 0);
//      PlayerNoise(ent->owner, ent->s.origin, PNOISE_IMPACT);
	}
	// calculate position for the explosion entity

	VectorMA(ent->s.origin, -0.02, ent->s.origin2, origin);

//glass fx
	if (0 == Q_stricmp(other->classname, "func_explosive")) {
		// ignore it, so it can bounce
		return;
	} else
// ---
	if (other->takedamage) {
		G_Damage(other, ent, ent, ent->s.origin2, ent->s.origin, THROW_DAMAGE, 0, MOD_KNIFE_THROWN);
	} else {

		// code to manage excess knives in the game, guarantees that
		// no more than knifelimit knives will be stuck in walls.
		// if knifelimit == 0 then it won't be in effect and it can
		// start removing knives even when less than the limit are
		// out there.
//		   if ( g_rxn_knifelimit.value != 0 )
//		   {
//		   knives++;
//
//		   if (knives > g_rxn_knifelimit.value)
//		   knives = 1;
//
//		   knife = FindEdictByClassnum ("weapon_Knife", knives);
//
//		   if (knife)
//		   {
//		   knife->nextthink = level.time + .1;
//		   }
//
//		   }

		//spawn a knife in the object
		//Elder: todo - rotate the knife model so it's collinear with trajectory
		//and eliminate the jittering
		xr_item = BG_FindItemForWeapon(WP_KNIFE);
		//xr_drop = dropWeapon( ent, xr_item, 0, FL_DROPPED_ITEM);
		xr_drop = LaunchItem(xr_item, ent->s.pos.trBase, 0, FL_THROWN_KNIFE);
		xr_drop->count = 1;
	}

	G_FreeEntity(ent);
}
*/

//gentity_t *Knife_Throw (gentity_t *self,vec3_t start, vec3_t dir, int damage, int speed )
//Elder: moved knife_throw to g_missile.c where it belongs

//======================================================================
//Elder: can probably be static
int RQ3_Spread(gentity_t * ent, int spread)
{
	int runspeed = 225;
	int walkspeed = 10;
	int stage = 0;
	float factor[] = { 0.7f, 1.0f, 2.0f, 6.0f };
	float xyspeed =
	    (ent->client->ps.velocity[0] * ent->client->ps.velocity[0] +
	     ent->client->ps.velocity[1] * ent->client->ps.velocity[1]);

	//crouching
	//if (ent->client->ps.pm_flags & PMF_DUCKED)
	// make sure player is actually on the ground
	if (ent->client->ps.groundEntityNum != ENTITYNUM_NONE && ent->client->ps.pm_flags & PMF_DUCKED)
		return (spread * 0.65);

	//running
	if (xyspeed > runspeed * runspeed)
		stage = 3;
	//walking
	else if (xyspeed >= walkspeed * walkspeed)
		stage = 2;
	//standing
	else
		stage = 1;

	//added laser advantage
	if ((ent->client->ps.stats[STAT_HOLDABLE_ITEM] & (1 << HI_LASER)) &&
	    (ent->client->ps.weapon == WP_PISTOL ||
	     ent->client->ps.weapon == WP_MP5 || ent->client->ps.weapon == WP_M4)) {
		//G_Printf("Using laser advantage\n");
		if (stage == 1)
			stage = 0;
		else
			stage = 1;
	}

	return (int) (spread * factor[stage]);
}

/*
============
Knife Attack
============
*/
void Weapon_Knife_Fire(gentity_t * ent)
{
//      Knife_Attack(ent,THROW_DAMAGE);
//	gentity_t *m;

// Homer: if client is supposed to be slashing, go to that function instead
	if ((ent->client->ps.persistant[PERS_WEAPONMODES] & RQ3_KNIFEMODE) == RQ3_KNIFEMODE) {
		//Elder: added
		Knife_Attack(ent, SLASH_DAMAGE);
		return;
	}
	// extra vertical velocity
	//Slicer reduced from 0.2 to 0.1
	forward[2] += 0.1f;

	//Elder: already done in  Knife_Throw
	//VectorNormalize( forward );

	//m = Knife_Throw(ent, muzzle, forward, THROW_DAMAGE, 1200);
// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);

	fire_knife(ent, muzzle, forward);
}

/*
============
M4 Attack
============
*/
void Weapon_M4_Fire(gentity_t * ent)
{
	float spread;

	// Homer: increment burst if needed
	if ((ent->client->ps.persistant[PERS_WEAPONMODES] & RQ3_M4MODE) == RQ3_M4MODE) {
		spread = M4_SPREAD * 0.7;
	} else {
		spread = M4_SPREAD;
		//M4-kick stuff

		// NiceAss; Make it so M4 kickback doesn't happen
		// if looking straight up
		if (ent->client->ps.viewangles[0] > -85.0f) {
			ent->client->consecutiveShots++;

			if (ent->client->consecutiveShots > 23)
				ent->client->consecutiveShots = 23;
		}

	}

// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);

	Bullet_Fire(ent, RQ3_Spread(ent, spread), M4_DAMAGE, MOD_M4);
}

/*
============
MK23 Attack
============
*/
void Weapon_MK23_Fire(gentity_t * ent)
{
//      int             i;
	float spread;

	// Homer: increment burst if needed
	if ((ent->client->ps.persistant[PERS_WEAPONMODES] & RQ3_MK23MODE) == RQ3_MK23MODE) {
		spread = PISTOL_SPREAD * 0.7;
		//ent->client->ps.stats[STAT_BURST]++;
	} else {
		spread = PISTOL_SPREAD;
	}
// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);
	Bullet_Fire(ent, RQ3_Spread(ent, spread), PISTOL_DAMAGE, MOD_PISTOL);
}

/*
============
SSG3000 Attack
============
*/
void Weapon_SSG3000_FireOld(gentity_t * ent)
{
	float spread;

	//Elder: changed to use RQ3_Spread as well
	if (RQ3_isZoomed(ent)) {
		spread = 0;
	} else {
		spread = RQ3_Spread(ent, SNIPER_SPREAD);
	}
// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);
	Bullet_Fire(ent, spread, SNIPER_DAMAGE, MOD_SNIPER);

	//Elder: bolt action plus save last zoom
	ent->client->weaponfireNextTime = level.time + RQ3_SSG3000_BOLT_DELAY;
	RQ3_SaveZoomLevel(ent);
}

/*
=================
Elder:
This is a triple-hybrid bastard child of
railgun_fire, old SSG, and bullet_fire code

weapon_ssg3000_fire
=================
*/
#define	MAX_SSG3000_HITS	8
void Weapon_SSG3000_Fire(gentity_t * ent)
{
	vec3_t end;
	trace_t trace;
	gentity_t *tent, *tentWall, *traceEnt = NULL;
	gentity_t *unlinkedEntities[MAX_SSG3000_HITS];
	int damage, i, hits, unlinked, passent, Material;
	qboolean hitBreakable;
	float r, u, spread;

	// Elder: Statistics tracking
	if (ent->client && ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY))
		ent->client->pers.records[REC_SSG3000SHOTS]++;

	VectorMA(muzzle, 8192, forward, end);

	//Elder: added to assist in zoom crap
	if (!RQ3_isZoomed(ent)) {
		spread = RQ3_Spread(ent, SNIPER_SPREAD);
		u = crandom() * spread;
		r = crandom() * spread;
		VectorMA(end, r, right, end);
		VectorMA(end, u, up, end);
	}

	damage = SNIPER_DAMAGE;

	// JBravo: unlagged NEW
//	G_DoTimeShiftFor(ent);
	// trace only against the solids, so the SSG3000 will go through people
	unlinked = 0;
	hits = 0;
	passent = ent->s.number;
	do {
		//Elder: need to store this flag because
		//the entity may get wiped out in G_Damage
		hitBreakable = qfalse;

		trap_Trace(&trace, muzzle, NULL, NULL, end, passent, MASK_SHOT);
		
		// Basically, it hit a wall (worldspawn)
		if (trace.entityNum >= ENTITYNUM_MAX_NORMAL)
			break;

		traceEnt = &g_entities[trace.entityNum];

		if (traceEnt->unbreakable == qtrue) {
			Material = GetMaterialFromFlag(trace.surfaceFlags);
			if (IsMetalMat(Material))
				tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_METAL);
			else if (Material == MAT_GLASS)
				tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_GLASS);
			else if (IsWoodMat(Material))
				tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_WOOD);
			else if (Material == MAT_BRICK)
				tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_BRICK);
			else if (Material == MAT_CERAMIC)
				tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_CERAMIC);
			else if (IsSnowMat(Material))
				tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_SNOW);
			else if (Material == MAT_GRASS)
				tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_GRASS);
			else
				tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_WALL);

			tent->s.eventParm = DirToByte(trace.plane.normal);
			tent->s.otherEntityNum = ent->s.number;

			G_Damage(traceEnt, ent, ent, forward, trace.endpos, 0, 0, MOD_SNIPER);
			return;
		}

		if (traceEnt->takedamage) {
			//flag hitBreakable - bullets go through even
			//if it doesn't "shatter" - but that's usually
			//not the case
			if (traceEnt->s.eType == ET_BREAKABLE) {
				hitBreakable = qtrue;
			}
			// send impacts
			if (traceEnt->client ) {
				if ( !OnSameTeam(traceEnt, ent) || (OnSameTeam(traceEnt, ent) && g_friendlyFire.integer > 0) ) {
					tent = G_TempEntity(trace.endpos, EV_SSG3000_HIT_FLESH);
					tent->s.eventParm = DirToByte(forward);
					tent->s.otherEntityNum2 = traceEnt->s.number;
					tent->s.otherEntityNum = ent->s.number;
				}
			} else {
				// impact type
				Material = GetMaterialFromFlag(trace.surfaceFlags);
				if (IsMetalMat(Material))
					tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_METAL);
				else if (Material == MAT_GLASS)
					tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_GLASS);
				else if (IsWoodMat(Material))
					tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_WOOD);
				else if (Material == MAT_BRICK)
					tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_BRICK);
				else if (Material == MAT_CERAMIC)
					tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_CERAMIC);
				else if (IsSnowMat(Material))
					tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_SNOW);
				else if (Material == MAT_GRASS)
					tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_GRASS);
				else
					tent = G_TempEntity(trace.endpos, EV_BULLET_HIT_WALL);

				tent->s.eventParm = DirToByte(trace.plane.normal);
				tent->s.otherEntityNum = ent->s.number;
			}

			if (LogAccuracyHit(traceEnt, ent)) {
				hits++;
			}
			//G_Printf("(%d) SSG: Doing damage to target\n", level.time);
			G_Damage(traceEnt, ent, ent, forward, trace.endpos, damage, 0, MOD_SNIPER);
		}

		//Elder: go through non-solids and breakables
		//If we ever wanted to "shoot through walls" we'd do stuff here

		if ( hitBreakable == qfalse && (trace.contents & CONTENTS_SOLID) ) {
			break;	// we hit something solid enough to stop the beam
		}

		if (hitBreakable == qfalse ||
			OnSameTeam(traceEnt, ent) ) {
			trap_UnlinkEntity(traceEnt);
			unlinkedEntities[unlinked] = traceEnt;
			unlinked++;
		}
	} while (unlinked < MAX_SSG3000_HITS);
//	G_UndoTimeShiftFor(ent);

	// link back in any entities we unlinked
	for (i = 0; i < unlinked; i++) {
		trap_LinkEntity(unlinkedEntities[i]);
	}

	// snap the endpos to integers to save net bandwidth, but nudged towards the line
	SnapVectorTowards(trace.endpos, muzzle);

	// send wall bullet impact

	Material = GetMaterialFromFlag(trace.surfaceFlags);
	if (!(trace.surfaceFlags & SURF_NOIMPACT)) {
		//Makro - new surfaceparm system
		if (IsMetalMat(Material))
			tentWall = G_TempEntity(trace.endpos, EV_BULLET_HIT_METAL);
		else if (Material == MAT_GLASS)
			tentWall = G_TempEntity(trace.endpos, EV_BULLET_HIT_GLASS);
		else if (IsWoodMat(Material))
			tentWall = G_TempEntity(trace.endpos, EV_BULLET_HIT_WOOD);
		else if (Material == MAT_BRICK)
			tentWall = G_TempEntity(trace.endpos, EV_BULLET_HIT_BRICK);
		else if (Material == MAT_CERAMIC)
			tentWall = G_TempEntity(trace.endpos, EV_BULLET_HIT_CERAMIC);
		else if (IsSnowMat(Material))
			tentWall = G_TempEntity(trace.endpos, EV_BULLET_HIT_SNOW);
		else if (Material == MAT_GRASS)
			tentWall = G_TempEntity(trace.endpos, EV_BULLET_HIT_GRASS);
		else
			tentWall = G_TempEntity(trace.endpos, EV_BULLET_HIT_WALL);

		tentWall->s.eventParm = DirToByte(trace.plane.normal);
		tentWall->s.otherEntityNum = ent->s.number;

		if (traceEnt && traceEnt->s.eType == ET_PRESSURE)
			G_CreatePressure(trace.endpos, trace.plane.normal, traceEnt);
	}

	// give the shooter a reward sound if they have made two railgun hits in a row
	if (hits == 0) {
		// complete miss
		ent->client->accurateCount = 0;
	} else {
		// check for "impressive" reward sound
		ent->client->accurateCount += hits;
		if (ent->client->accurateCount >= 3) {
			ent->client->accurateCount -= 3;

			//Blaze: Removed because it uses the persistant stats stuff
			//ent->client->ps.persistant[PERS_IMPRESSIVE_COUNT]++;
			// add the sprite over the player's head
			ent->client->ps.eFlags &=
			    ~(EF_AWARD_IMPRESSIVE | EF_AWARD_EXCELLENT | EF_AWARD_GAUNTLET | EF_AWARD_ASSIST |
			      EF_AWARD_DEFEND | EF_AWARD_CAP);
			ent->client->ps.eFlags |= EF_AWARD_IMPRESSIVE;
			ent->client->rewardTime = level.time + REWARD_SPRITE_TIME;
		}
		ent->client->accuracy_hits++;
		if ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY)
			ent->client->pers.records[REC_SSG3000HITS]++;
		//ent->client->ssgHits++;
	}

	//Elder: bolt action plus save last zoom
	//ent->client->weaponfireNextTime = level.time + RQ3_SSG3000_BOLT_DELAY;
	RQ3_SaveZoomLevel(ent);
}

/*
============
MP5 Attack
============
*/
void Weapon_MP5_Fire(gentity_t * ent)
{
	float spread;

	// Homer: increment burst if needed
	if ((ent->client->ps.persistant[PERS_WEAPONMODES] & RQ3_MP5MODE) == RQ3_MP5MODE) {
		spread = MP5_SPREAD * 0.7;
		//ent->client->ps.stats[STAT_BURST]++;  
	} else {
		spread = MP5_SPREAD;
	}

// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);

	Bullet_Fire(ent, RQ3_Spread(ent, spread), MP5_DAMAGE, MOD_MP5);

}

/*
============
Handcannon Attack
============
*/
void Weapon_HandCannon_Fire(gentity_t * ent)
{
	gentity_t *tent, *tent2;

	// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);

	//Elder: added for damage report
	RQ3_InitShotgunDamageReport();

	// send shotgun blast
	tent = G_TempEntity(muzzle, EV_HANDCANNON);
	VectorScale(forward, 4096, tent->s.origin2);
	SnapVector(tent->s.origin2);
	tent->s.eventParm = rand() & 255;	// seed for spread pattern
	tent->s.otherEntityNum = ent->s.number;
	tent->s.angles2[1] -= 5;
	ShotgunPattern(tent->s.pos.trBase, tent->s.origin2, tent->s.eventParm, ent, WP_HANDCANNON);

	// send shotgun blast
	tent2 = G_TempEntity(muzzle, EV_HANDCANNON);
	VectorScale(forward, 4096, tent2->s.origin2);
	SnapVector(tent2->s.origin2);
	tent2->s.eventParm = rand() & 255;	// seed for spread pattern
	tent2->s.otherEntityNum = ent->s.number;
	tent2->s.angles2[1] += 5;
	//Elder: note negative one
	//JBravo: Yes, why is that ?  removing...
	//JBravo: thats because the second barrel has a higher vspread. reverting back to -1
	ShotgunPattern(tent2->s.pos.trBase, tent2->s.origin2, tent2->s.eventParm, ent, -1);
//	ShotgunPattern(tent2->s.pos.trBase, tent2->s.origin2, tent2->s.eventParm, ent, WP_HANDCANNON);
// JBravo: count the HC blasts here
	if ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY)
		ent->client->pers.records[REC_HANDCANNONSHOTS]++;

	//Elder: added for damage report
	RQ3_ProduceShotgunDamageReport(ent);
}

/*
============
Shotgun Attack
============
*/
void Weapon_M3_Fire(gentity_t * ent)
{
	//Blaze: call to shotgun fire function here
	gentity_t *tent;

// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);
	//Elder: added for damage report
	RQ3_InitShotgunDamageReport();

	// send shotgun blast
	tent = G_TempEntity(muzzle, EV_SHOTGUN);
	VectorScale(forward, 4096, tent->s.origin2);
	SnapVector(tent->s.origin2);
	tent->s.eventParm = rand() & 255;	// seed for spread pattern
	tent->s.otherEntityNum = ent->s.number;

	ShotgunPattern(tent->s.pos.trBase, tent->s.origin2, tent->s.eventParm, ent, WP_M3);

	//Elder: added for damage report
	RQ3_ProduceShotgunDamageReport(ent);
}

/*
==============
RQ3_ShotgunDamageReport

Added by Elder
Used to determine hits from a shotgun source
Modelled after the one done for AQ2
==============
*/

void RQ3_InitShotgunDamageReport(void)
{
	//Elder: Reset all tookShellHit 'slots' to zero
	memset(tookShellHit, 0, MAX_CLIENTS * sizeof(int));
}

//Elder: similar to AQ2 source
#define MAX_NAME_REPORTS	8
void RQ3_ProduceShotgunDamageReport(gentity_t * self)
{
	int i;
	int totalNames = 0;
	int printed = 0;
	char textbuf[1024];
	gclient_t *hitClient;

	//for (l = 1; l <= g_maxclients.integer; l++)

	// Run through array to see if anyone was hit
	for (i = 0; i < MAX_CLIENTS; i++) {
		if (tookShellHit[i])
			totalNames++;
	}

	if (totalNames) {
		// Clamp number of names to report
		if (totalNames > MAX_NAME_REPORTS)
			totalNames = MAX_NAME_REPORTS;

		//Q_strncpyz(textbuf, "You hit", sizeof(textbuf));
		strcpy(textbuf, "You hit ");
		for (i = 0; i < MAX_CLIENTS; i++) {
			if (tookShellHit[i]) {
				//grammar set
				if (printed == (totalNames - 1)) {
					if (totalNames == 2)
						Q_strcat(textbuf, sizeof(textbuf), "^7 and ");
					else if (totalNames != 1)
						Q_strcat(textbuf, sizeof(textbuf), "^7, and ");
				} else if (printed)
					Q_strcat(textbuf, sizeof(textbuf), "^7, ");

				//add to text buffer
				hitClient = g_entities[i].client;
				Q_strcat(textbuf, sizeof(textbuf), hitClient->pers.netname);
				printed++;
			}

			if (printed == totalNames)
				break;
		}
		trap_SendServerCommand(self - g_entities, va("print \"%s^7.\n\"", textbuf));
		//gi.cprintf(self, PRINT_HIGH, "%s\n", textbuf);
	}
}

/*
============
Akimbo Attack
============
*/
void Weapon_Akimbo_Fire(gentity_t * ent)
{
	float spread;

	//Blaze: Will need 2 of these
	spread = AKIMBO_SPREAD;
// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);
	Bullet_Fire(ent, RQ3_Spread(ent, spread), AKIMBO_DAMAGE, MOD_AKIMBO);

	//Elder: reset plus added 1 bullet check
	//if (ent->client->weaponfireNextTime > 0 || ent->client->ps.ammo[WP_AKIMBO] < 2)
	//ent->client->weaponfireNextTime = 0;
	//else
	//ent->client->weaponfireNextTime = level.time + RQ3_AKIMBO_DELAY2;

	//Bullet_Fire( ent, RQ3_Spread(ent, spread), AKIMBO_DAMAGE, MOD_AKIMBO);
}

/*
============
Grenade Attack
============
*/
void Weapon_Grenade_Fire(gentity_t * ent)
{
//	gentity_t *m;

	// extra vertical velocity
	// Elder: not present in AQ2
	//forward[2] += 0.5f;
	VectorNormalize(forward);

// JBravo: ff
	if (g_gametype.integer >= GT_TEAM)
		setFFState(ent);
	
	fire_grenade(ent, muzzle, forward);
}

/*
===============
LogAccuracyHit
===============
*/
qboolean LogAccuracyHit(gentity_t * target, gentity_t * attacker)
{
	//Makro - some checks; Q3 crashed with .dlls
	//when shooting one of the barrels in archives
	if (target == NULL || attacker == NULL) {
		return qfalse;
	}

	if (!target->takedamage) {
		return qfalse;
	}

	if (target == attacker) {
		return qfalse;
	}

	if (!target->client) {
		return qfalse;
	}

	if (!attacker->client) {
		return qfalse;
	}

	if (target->client->ps.stats[STAT_HEALTH] <= 0) {
		// Elder: Statistics tracking
		if ((g_gametype.integer == GT_TEAMPLAY && level.team_round_going) || g_gametype.integer != GT_TEAMPLAY)
			attacker->client->pers.records[REC_CORPSESHOTS]++;
		return qfalse;
	}

	if (OnSameTeam(target, attacker)) {
		return qfalse;
	}

	return qtrue;
}

/*
===============
CalcMuzzlePoint

set muzzle location relative to pivoting eye
===============
*/
void CalcMuzzlePoint(gentity_t * ent, vec3_t forward, vec3_t right, vec3_t up, vec3_t muzzlePoint)
{
//	VectorCopy(ent->s.pos.trBase, muzzlePoint);
	VectorCopy(ent->client->ps.origin, muzzlePoint);
	muzzlePoint[2] += ent->client->ps.viewheight;
	VectorMA(muzzlePoint, 14, forward, muzzlePoint);
	// snap to integer coordinates for more efficient network bandwidth usage
}

/*
===============
CalcMuzzlePointOrigin

set muzzle location relative to pivoting eye
===============
*/
void CalcMuzzlePointOrigin(gentity_t * ent, vec3_t origin, vec3_t forward, vec3_t right, vec3_t up, vec3_t muzzlePoint)
{
//	VectorCopy(ent->s.pos.trBase, muzzlePoint);
	VectorCopy(ent->client->ps.origin, muzzlePoint);
	muzzlePoint[2] += ent->client->ps.viewheight;
	VectorMA(muzzlePoint, 14, forward, muzzlePoint);
	// snap to integer coordinates for more efficient network bandwidth usage
}

/*
===============
FireWeapon
===============
*/
void FireWeapon(gentity_t * ent)
{
	// track shots taken for accuracy tracking.  Grapple is not a weapon and gauntet is just not tracked
	//Blaze: dont record accuracy for knife
//      if( ent->s.weapon != WP_KNIFE) {
	ent->client->accuracy_shots++;
//      }

	// set aiming directions
	AngleVectors(ent->client->ps.viewangles, forward, right, up);

//	CalcMuzzlePointOrigin(ent, ent->client->oldOrigin, forward, right, up, muzzle);
	CalcMuzzlePointOrigin(ent, ent->client->ps.origin, forward, right, up, muzzle);

	// fire the specific weapon
	switch (ent->s.weapon) {
//Blaze: The functions get called when you shoot your gun
	case WP_KNIFE:
		Weapon_Knife_Fire(ent);
		//ent->client->knifeShots++;
		break;
	case WP_GRENADE:
		Weapon_Grenade_Fire(ent);
		//ent->client->grenShots++;
		break;
	case WP_PISTOL:
		Weapon_MK23_Fire(ent);
		//ent->client->mk23Shots++;
		break;
	case WP_M4:
		Weapon_M4_Fire(ent);
		//ent->client->m4Shots++;
		break;
	case WP_SSG3000:
		Weapon_SSG3000_Fire(ent);
		//ent->client->ssgShots++;
		break;
	case WP_MP5:
		Weapon_MP5_Fire(ent);
		//ent->client->mp5Shots++;
		break;
	case WP_HANDCANNON:
		Weapon_HandCannon_Fire(ent);
		//ent->client->hcShots++;
		break;
	case WP_M3:
		Weapon_M3_Fire(ent);
		//ent->client->m3Shots++;
		break;
	case WP_AKIMBO:
		Weapon_Akimbo_Fire(ent);
		//ent->client->akimboShots++;
		break;
	default:
// FIXME                G_Error( "Bad ent->s.weapon" );
		break;
	}
}

/*
============
Laser Sight Stuff

Laser Sight / Flash Light Functions
============
*/

void Laser_Gen(gentity_t * ent, qboolean enabled)
{
	gentity_t *las;

	//Elder: force it to laser
	int type = 1;

	// First, if it's not the right weapon, leave
	if (ent->client->ps.weapon != WP_PISTOL && ent->client->ps.weapon != WP_MP5 && ent->client->ps.weapon != WP_M4) {
		//Kill laser if it exists
		if (ent->client->lasersight) {
			G_FreeEntity(ent->client->lasersight);
			ent->client->lasersight = NULL;
		}
		ent->client->ps.powerups[PW_LASERSIGHT] = 0;
		return;
	}
	//Get rid of you?
	if (ent->client->lasersight || enabled == qfalse) {
		// JBravo: fixing the bad gEnt crashbug
		if (ent->client->lasersight)
			G_FreeEntity(ent->client->lasersight);
		ent->client->lasersight = NULL;
		ent->client->ps.powerups[PW_LASERSIGHT] = 0;
		return;
	}

	ent->client->ps.powerups[PW_LASERSIGHT] = INT_MAX;

	las = G_Spawn();

	las->nextthink = level.time + 10;
	las->think = Laser_Think;

	las->s.clientNum = ent->s.number;
	las->r.ownerNum = ent->s.number;
	las->parent = ent;
	las->s.eType = ET_LASER;
	//Elder: added to enable lerping in cgame
	las->s.pos.trType = TR_INTERPOLATE;

	//Lets tell it if flashlight or laser
	if (type == 2) {
		las->s.eventParm = 2;	//tells CG that it is a flashlight
		las->classname = "flashlight";
	} else {
		las->s.eventParm = 1;	//tells CG that it is a laser sight
		las->classname = "lasersight";
	}

	ent->client->lasersight = las;
}

void Laser_Think(gentity_t * self)
{
	vec3_t end, start, forward, up;
	trace_t tr;		//, tr2;
	int l = 0, passent;
//	gentity_t *traceEnt;

	//Makro - added
	//int                   contents;

	//If the player dies, is spectator, or wrong weapon, kill the dot
	if (self->parent->client->ps.pm_type == PM_DEAD ||
	    self->parent->client->ps.pm_type == PM_SPECTATOR ||
	    (self->parent->client->ps.weapon != WP_PISTOL &&
	     self->parent->client->ps.weapon != WP_MP5 && self->parent->client->ps.weapon != WP_M4)) {
		//Make sure you kill the reference before freeing the entity
		self->parent->client->lasersight = NULL;
		self->parent->client->ps.powerups[PW_LASERSIGHT] = 0;
		G_FreeEntity(self);
		return;
	}
	//Set Aiming Directions
	AngleVectors(self->parent->client->ps.viewangles, forward, right, up);
	CalcMuzzlePoint(self->parent, forward, right, up, start);

	passent = self->parent->s.number;

	self->s.eFlags &= ~EF_FIRING;

	// Keep tracing if it hits glass.
	for (l = 0; l < 10; l++) {
		VectorMA(start, 8192, forward, end);

		//Trace Position
		trap_Trace(&tr, start, NULL, NULL, end, passent, MASK_SHOT);
//		traceEnt = &g_entities[tr.entityNum];

		//Did you not hit anything?
		if (tr.surfaceFlags & SURF_NOIMPACT || tr.surfaceFlags & SURF_SKY) {
			self->nextthink = level.time + 10;
			trap_UnlinkEntity(self);
			return;
		}

		//Makro - new surfaceparm system
		if (!(GetMaterialFromFlag(tr.surfaceFlags) == MAT_GLASS))
			break;
		VectorMA(tr.endpos, 10, forward, start);	// Nudge it forward a little bit
	}

	//Move you forward to keep you visible
	if (tr.fraction != 1)
		VectorMA(tr.endpos, -4, forward, tr.endpos);

	//Set Your position
	VectorCopy(tr.endpos, self->r.currentOrigin);
	VectorCopy(tr.endpos, self->s.pos.trBase);

	vectoangles(tr.plane.normal, self->s.angles);

	trap_LinkEntity(self);

	//Prep next move
	self->nextthink = level.time + 10;
}

/*
=================
ReloadWeapon

Added by Elder
Handles server-side management of numclips
=================
*/
void ReloadWeapon(gentity_t * ent, int stage)
{

	if (stage == 1 && (ent->client->ps.weapon == WP_SSG3000 || ent->client->ps.weapon == WP_M3)) {
		if (ent->client->ps.weapon == WP_M3)
			ent->client->numClips[WP_HANDCANNON] = ent->client->numClips[WP_M3];
		ent->client->numClips[ent->client->ps.weapon]--;
	} else if (stage == 2) {
		ent->client->numClips[ent->client->ps.weapon]--;
		// remove an extra clip if using HC or Akimbos
		if (ent->client->ps.weapon == WP_HANDCANNON || ent->client->ps.weapon == WP_AKIMBO)
			ent->client->numClips[ent->client->ps.weapon]--;

		//Elder: sync hc and m3 ammo + mk23 and akimbo ammo - a switch might look nicer
		if (ent->client->ps.weapon == WP_M3) {
			ent->client->numClips[WP_HANDCANNON] = ent->client->numClips[WP_M3];
		} else if (ent->client->ps.weapon == WP_HANDCANNON) {
			ent->client->numClips[WP_M3] = ent->client->numClips[WP_HANDCANNON];
		} else if (ent->client->ps.weapon == WP_PISTOL) {
			ent->client->numClips[WP_AKIMBO] = ent->client->numClips[WP_PISTOL];
		} else if (ent->client->ps.weapon == WP_AKIMBO) {
			ent->client->numClips[WP_PISTOL] = ent->client->numClips[WP_AKIMBO];
		}
	}
}
