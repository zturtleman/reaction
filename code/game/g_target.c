//-----------------------------------------------------------------------------
//
// $Id$
//
//-----------------------------------------------------------------------------
//
// $Log$
// Revision 1.15  2003/09/18 00:05:06  makro
// Lens flares. Opendoor trigger_multiple fixes
//
// Revision 1.14  2003/09/08 19:19:20  makro
// New code for respawning entities in TP
//
// Revision 1.13  2003/08/26 19:28:38  makro
// target_speakers
//
// Revision 1.12  2003/04/26 22:33:06  jbravo
// Wratted all calls to G_FreeEnt() to avoid crashing and provide debugging
//
// Revision 1.11  2003/03/22 20:29:26  jbravo
// wrapping linkent and unlinkent calls
//
// Revision 1.10  2003/01/06 00:23:29  makro
// no message
//
// Revision 1.9  2003/01/05 22:36:50  makro
// Added "inactive" field for entities
// New "target_activate" entity
//
// Revision 1.8  2002/06/16 20:06:14  jbravo
// Reindented all the source files with "indent -kr -ut -i8 -l120 -lc120 -sob -bad -bap"
//
// Revision 1.7  2002/05/30 21:18:28  makro
// Bots should reload/bandage when roaming around
// Added "pathtarget" key to all the entities
//
// Revision 1.6  2002/05/23 18:37:50  makro
// Bots should crouch more often when they attack with a SSG
// Made this depend on skill. Also, elevator stuff
//
// Revision 1.5  2002/05/23 15:55:25  makro
// Elevators
//
// Revision 1.4  2002/01/11 19:48:30  jbravo
// Formatted the source in non DOS format.
//
// Revision 1.3  2001/12/31 16:28:42  jbravo
// I made a Booboo with the Log tag.
//
//
//-----------------------------------------------------------------------------
// Copyright (C) 1999-2000 Id Software, Inc.
//
#include "g_local.h"

//==========================================================

/*QUAKED target_give (1 0 0) (-8 -8 -8) (8 8 8)
Gives the activator all the items pointed to.
*/
void Use_Target_Give(gentity_t * ent, gentity_t * other, gentity_t * activator)
{
	gentity_t *t;
	trace_t trace;

	if (!activator->client) {
		return;
	}

	if (!ent->target) {
		return;
	}

	memset(&trace, 0, sizeof(trace));
	t = NULL;
	while ((t = G_Find(t, FOFS(targetname), ent->target)) != NULL) {
		if (!t->item) {
			continue;
		}
		Touch_Item(t, activator, &trace);

		// make sure it isn't going to respawn or show any events
		t->nextthink = 0;
		trap_UnlinkEntity(t);
	}
}

void SP_target_give(gentity_t * ent)
{
	ent->use = Use_Target_Give;
}

//==========================================================

/*QUAKED target_remove_powerups (1 0 0) (-8 -8 -8) (8 8 8)
takes away all the activators powerups.
Used to drop flight powerups into death puts.
*/
void Use_target_remove_powerups(gentity_t * ent, gentity_t * other, gentity_t * activator)
{
	if (!activator->client) {
		return;
	}

	if (activator->client->ps.powerups[PW_REDFLAG]) {
		Team_ReturnFlag(TEAM_RED);
	} else if (activator->client->ps.powerups[PW_BLUEFLAG]) {
		Team_ReturnFlag(TEAM_BLUE);
	} else if (activator->client->ps.powerups[PW_NEUTRALFLAG]) {
		Team_ReturnFlag(TEAM_FREE);
	}

	memset(activator->client->ps.powerups, 0, sizeof(activator->client->ps.powerups));
}

void SP_target_remove_powerups(gentity_t * ent)
{
	ent->use = Use_target_remove_powerups;
}

//==========================================================

/*QUAKED target_delay (1 0 0) (-8 -8 -8) (8 8 8)
"wait" seconds to pause before firing targets.
"random" delay variance, total delay = delay +/- random seconds
*/
void Think_Target_Delay(gentity_t * ent)
{
	G_UseTargets(ent, ent->activator);
}

void Use_Target_Delay(gentity_t * ent, gentity_t * other, gentity_t * activator)
{
	ent->nextthink = level.time + (ent->wait + ent->random * crandom()) * 1000;
	ent->think = Think_Target_Delay;
	ent->activator = activator;
}

void SP_target_delay(gentity_t * ent)
{

	// check delay for backwards compatability
	if (!G_SpawnFloat("delay", "0", &ent->wait)) {
		G_SpawnFloat("wait", "1", &ent->wait);
	}

	if (!ent->wait) {
		ent->wait = 1;
	}

	ent->use = Use_Target_Delay;
}

//==========================================================

/*QUAKED target_score (1 0 0) (-8 -8 -8) (8 8 8)
"count" number of points to add, default 1

The activator is given this many points.
*/
void Use_Target_Score(gentity_t * ent, gentity_t * other, gentity_t * activator)
{
	AddScore(activator, ent->r.currentOrigin, ent->count);
}

void SP_target_score(gentity_t * ent)
{
	if (!ent->count) {
		ent->count = 1;
	}
	ent->use = Use_Target_Score;
}

//==========================================================

/*QUAKED target_print (1 0 0) (-8 -8 -8) (8 8 8) redteam blueteam private
"message"	text to print
If "private", only the activator gets the message.  If no checks, all clients get the message.
*/
void Use_Target_Print(gentity_t * ent, gentity_t * other, gentity_t * activator)
{
	//Makro - crash bug fix
	if (activator) {
		if (activator->client && (ent->spawnflags & 4)) {
			trap_SendServerCommand(activator - g_entities, va("cp \"%s\"", ent->message));
			return;
		}
	}

	if (ent->spawnflags & 3) {
		if (ent->spawnflags & 1) {
			G_TeamCommand(TEAM_RED, va("cp \"%s\"", ent->message));
		}
		if (ent->spawnflags & 2) {
			G_TeamCommand(TEAM_BLUE, va("cp \"%s\"", ent->message));
		}
		return;
	}

	trap_SendServerCommand(-1, va("cp \"%s\"", ent->message));
}

void SP_target_print(gentity_t * ent)
{
	ent->use = Use_Target_Print;
}

//==========================================================

/*QUAKED target_speaker (1 0 0) (-8 -8 -8) (8 8 8) looped-on looped-off global activator nopvs
"noise"		wav file to play

A global sound will play full volume throughout the level.
Activator sounds will play on the player that activated the target.
Global and activator sounds can't be combined with looping.
Normal sounds play each time the target is used.
Looped sounds will be toggled by use functions.
Multiple identical looping sounds will just increase volume without any speed cost.
"wait" : Seconds between auto triggerings, 0 = don't auto trigger
"random"	wait variance, default is 0
*/

#define SF_TARGET_SPEAKER_LOOPEDON		1
#define SF_TARGET_SPEAKER_LOOPEDOFF		2
#define SF_TARGET_SPEAKER_GLOBAL		4
#define SF_TARGET_SPEAKER_ACTIVATOR		8
#define SF_TARGET_SPEAKER_NOPVS			16

void reset_target_speaker(gentity_t *ent)
{
	//looped on
	if (ent->spawnflags & SF_TARGET_SPEAKER_LOOPEDON)
		ent->s.loopSound = ent->noise_index;
	//looped off
	else if (ent->spawnflags & SF_TARGET_SPEAKER_LOOPEDOFF)
		ent->s.loopSound = 0;
}

void Use_Target_Speaker(gentity_t * ent, gentity_t * other, gentity_t * activator)
{
	// looping sound toggles
	if (ent->spawnflags & (SF_TARGET_SPEAKER_LOOPEDON | SF_TARGET_SPEAKER_LOOPEDOFF)) {
		//Makro - check the pathtarget of the triggering entity
		if (other->pathtarget) {
			if (!Q_stricmp(other->pathtarget, "on")) {
				ent->s.loopSound = ent->noise_index;
				return;
			} else if (!Q_stricmp(other->pathtarget, "off")) {
				ent->s.loopSound = 0;
				return;
			}
		}
		if (ent->s.loopSound)
			ent->s.loopSound = 0;	// turn it off
		else
			ent->s.loopSound = ent->noise_index;	// start it
	} else {		// normal sound
		if (ent->spawnflags & SF_TARGET_SPEAKER_ACTIVATOR) {
			G_AddEvent(activator, EV_GENERAL_SOUND, ent->noise_index);
		} else if (ent->spawnflags & SF_TARGET_SPEAKER_GLOBAL) {
			G_AddEvent(ent, EV_GLOBAL_SOUND, ent->noise_index);
		} else {
			G_AddEvent(ent, EV_GENERAL_SOUND, ent->noise_index);
		}
	}
}

void SP_target_speaker(gentity_t * ent)
{
	char buffer[MAX_QPATH];
	char *s;

	G_SpawnFloat("wait", "0", &ent->wait);
	G_SpawnFloat("random", "0", &ent->random);

	if (!G_SpawnString("noise", "NOSOUND", &s)) {
		G_Error("target_speaker without a noise key at %s", vtos(ent->s.origin));
	}
	// force all client reletive sounds to be "activator" speakers that
	// play on the entity that activates it
	if (s[0] == '*') {
		ent->spawnflags |= 8;
	}

	if (!strstr(s, ".wav")) {
		Com_sprintf(buffer, sizeof(buffer), "%s.wav", s);
	} else {
		Q_strncpyz(buffer, s, sizeof(buffer));
	}
	ent->noise_index = G_SoundIndex(buffer);

	// a repeating speaker can be done completely client side
	ent->s.eType = ET_SPEAKER;
	ent->s.eventParm = ent->noise_index;
	ent->s.frame = ent->wait * 10;
	ent->s.clientNum = ent->random * 10;
	//Makro - added
	if ((ent->spawnflags & (SF_TARGET_SPEAKER_LOOPEDON | SF_TARGET_SPEAKER_LOOPEDOFF))
		&& (ent->spawnflags & SF_TARGET_SPEAKER_NOPVS))
		ent->s.weapon = 1;
	else
		ent->s.weapon = 0;

	// check for prestarted looping sound
	if (ent->spawnflags & SF_TARGET_SPEAKER_LOOPEDON) {
		ent->s.loopSound = ent->noise_index;
	}
	
	ent->reset = reset_target_speaker;
	ent->use = Use_Target_Speaker;

	if (ent->spawnflags & SF_TARGET_SPEAKER_GLOBAL) {
		ent->r.svFlags |= SVF_BROADCAST;
	}

	VectorCopy(ent->s.origin, ent->s.pos.trBase);

	// must link the entity so we get areas and clusters so
	// the server can determine who to send updates to
	trap_LinkEntity(ent);
}

//==========================================================

/*QUAKED target_laser (0 .5 .8) (-8 -8 -8) (8 8 8) START_ON
When triggered, fires a laser.  You can either set a target or a direction.
*/
void target_laser_think(gentity_t * self)
{
	vec3_t end;
	trace_t tr;
	vec3_t point;

	// if pointed at another entity, set movedir to point at it
	if (self->enemy) {
		VectorMA(self->enemy->s.origin, 0.5, self->enemy->r.mins, point);
		VectorMA(point, 0.5, self->enemy->r.maxs, point);
		VectorSubtract(point, self->s.origin, self->movedir);
		VectorNormalize(self->movedir);
	}
	// fire forward and see what we hit
	VectorMA(self->s.origin, 2048, self->movedir, end);

	trap_Trace(&tr, self->s.origin, NULL, NULL, end, self->s.number,
		   CONTENTS_SOLID | CONTENTS_BODY | CONTENTS_CORPSE);

	if (tr.entityNum) {
		// hurt it if we can
		G_Damage(&g_entities[tr.entityNum], self, self->activator, self->movedir,
			 tr.endpos, self->damage, DAMAGE_NO_KNOCKBACK, MOD_TARGET_LASER);
	}

	VectorCopy(tr.endpos, self->s.origin2);

	trap_LinkEntity(self);
	self->nextthink = level.time + FRAMETIME;
}

void target_laser_on(gentity_t * self)
{
	if (!self->activator)
		self->activator = self;
	target_laser_think(self);
}

void target_laser_off(gentity_t * self)
{
	trap_UnlinkEntity(self);
	self->nextthink = 0;
}

void target_laser_use(gentity_t * self, gentity_t * other, gentity_t * activator)
{
	self->activator = activator;
	if (self->nextthink > 0)
		target_laser_off(self);
	else
		target_laser_on(self);
}

void target_laser_start(gentity_t * self)
{
	gentity_t *ent;

	self->s.eType = ET_BEAM;

	if (self->target) {
		ent = G_Find(NULL, FOFS(targetname), self->target);
		if (!ent) {
			G_Printf("%s at %s: %s is a bad target\n", self->classname, vtos(self->s.origin), self->target);
		}
		self->enemy = ent;
	} else {
		G_SetMovedir(self->s.angles, self->movedir);
	}

	self->use = target_laser_use;
	self->think = target_laser_think;

	if (!self->damage) {
		self->damage = 1;
	}

	if (self->spawnflags & 1)
		target_laser_on(self);
	else
		target_laser_off(self);
}

void SP_target_laser(gentity_t * self)
{
	// let everything else get spawned before we start firing
	self->think = target_laser_start;
	self->nextthink = level.time + FRAMETIME;
}

//==========================================================

void target_teleporter_use(gentity_t * self, gentity_t * other, gentity_t * activator)
{
	gentity_t *dest;

	if (!activator->client)
		return;
	dest = G_PickTarget(self->target);
	if (!dest) {
		G_Printf("Couldn't find teleporter destination\n");
		return;
	}

	TeleportPlayer(activator, dest->s.origin, dest->s.angles);
}

/*QUAKED target_teleporter (1 0 0) (-8 -8 -8) (8 8 8)
The activator will be teleported away.
*/
void SP_target_teleporter(gentity_t * self)
{
	if (!self->targetname)
		G_Printf("untargeted %s at %s\n", self->classname, vtos(self->s.origin));

	self->use = target_teleporter_use;
}

//==========================================================

/*QUAKED target_relay (.5 .5 .5) (-8 -8 -8) (8 8 8) RED_ONLY BLUE_ONLY RANDOM
This doesn't perform any actions except fire its targets.
The activator can be forced to be from a certain team.
if RANDOM is checked, only one of the targets will be fired, not all of them
*/
void target_relay_use(gentity_t * self, gentity_t * other, gentity_t * activator)
{
	if ((self->spawnflags & 1) && activator->client && activator->client->sess.sessionTeam != TEAM_RED) {
		return;
	}
	if ((self->spawnflags & 2) && activator->client && activator->client->sess.sessionTeam != TEAM_BLUE) {
		return;
	}
	if (self->spawnflags & 4) {
		gentity_t *ent;

		ent = G_PickTarget(self->target);
		if (ent && ent->use) {
			ent->use(ent, self, activator);
		}
		return;
	}
	G_UseTargets(self, activator);
}

void SP_target_relay(gentity_t * self)
{
	self->use = target_relay_use;
}

//==========================================================

/*QUAKED target_kill (.5 .5 .5) (-8 -8 -8) (8 8 8)
Kills the activator.
*/
void target_kill_use(gentity_t * self, gentity_t * other, gentity_t * activator)
{
	G_Damage(activator, NULL, NULL, NULL, NULL, 100000, DAMAGE_NO_PROTECTION, MOD_TELEFRAG);
}

void SP_target_kill(gentity_t * self)
{
	self->use = target_kill_use;
}

//==========================================================

/*QUAKED target_activate (.5 .5 .5) (-8 -8 -8) (8 8 8)
Activates/de-activates entities
Added by Makro
*/
void target_activate_use(gentity_t * self, gentity_t * other, gentity_t * activator)
{
	gentity_t	*loop = NULL;
	int action = 0;

	if (self->pathtarget) {
		if (!Q_stricmp(self->pathtarget, "on")) {
			action = 1;
		} else if (!Q_stricmp(self->pathtarget, "off")) {
			action = 2;
		}
	}

	for (loop = G_Find(NULL, FOFS(activatename), self->target); loop; loop = G_Find(loop, FOFS(activatename), self->target)) {
		switch (action) {
			case 1:
				loop->inactive = 0;
				break;
			case 2:
				loop->inactive = 1;
				break;
			default:
				loop->inactive = !loop->inactive;
				break;
		}
	}
}

void SP_target_activate(gentity_t * self)
{
	if (!self->target) {
		G_Printf(S_COLOR_YELLOW "WARNING: target_activate with no target at %s^7\n", vtos(self->s.origin));
		G_FreeEntity(self);
		return;
	}
	self->use = target_activate_use;
}

/*QUAKED target_position (0 0.5 0) (-4 -4 -4) (4 4 4)
Used as a positional target for in-game calculation, like jumppad targets.
*/
void SP_target_position(gentity_t * self)
{
	G_SetOrigin(self, self->s.origin);
}

static void target_location_linkup(gentity_t * ent)
{
	int i;
	int n;

	if (level.locationLinked)
		return;

	level.locationLinked = qtrue;

	level.locationHead = NULL;

	trap_SetConfigstring(CS_LOCATIONS, "unknown");

	for (i = 0, ent = g_entities, n = 1; i < level.num_entities; i++, ent++) {
		if (ent->classname && !Q_stricmp(ent->classname, "target_location")) {
			// lets overload some variables!
			ent->health = n;	// use for location marking
			trap_SetConfigstring(CS_LOCATIONS + n, ent->message);
			n++;
			ent->nextTrain = level.locationHead;
			level.locationHead = ent;
		}
	}

	// All linked together now
}

/*QUAKED target_location (0 0.5 0) (-8 -8 -8) (8 8 8)
Set "message" to the name of this location.
Set "count" to 0-7 for color.
0:white 1:red 2:green 3:yellow 4:blue 5:cyan 6:magenta 7:white

Closest target_location in sight used for the location, if none
in site, closest in distance
*/
void SP_target_location(gentity_t * self)
{
	self->think = target_location_linkup;
	self->nextthink = level.time + 200;	// Let them all spawn first

	G_SetOrigin(self, self->s.origin);
}
