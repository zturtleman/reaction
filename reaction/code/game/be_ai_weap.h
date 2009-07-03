//-----------------------------------------------------------------------------
//
// $Id$
//
//-----------------------------------------------------------------------------
//
// $Log$
// Revision 1.5  2002/06/16 20:06:14  jbravo
// Reindented all the source files with "indent -kr -ut -i8 -l120 -lc120 -sob -bad -bap"
//
// Revision 1.4  2002/01/11 19:48:29  jbravo
// Formatted the source in non DOS format.
//
// Revision 1.3  2001/12/31 16:28:42  jbravo
// I made a Booboo with the Log tag.
//
//
//-----------------------------------------------------------------------------
// Copyright (C) 1999-2000 Id Software, Inc.
//

/*****************************************************************************
 * name:		be_ai_weap.h
 *
 * desc:		weapon AI
 *
 * $Archive: /source/code/botlib/be_ai_weap.h $
 * $Author$ 
 * $Revision$
 * $Modtime: 10/05/99 3:32p $
 * $Date$
 *
 *****************************************************************************/

//projectile flags
#define PFL_WINDOWDAMAGE			1	//projectile damages through window
#define PFL_RETURN					2	//set when projectile returns to owner
//weapon flags
#define WFL_FIRERELEASED			1	//set when projectile is fired with key-up event
//damage types
#define DAMAGETYPE_IMPACT			1	//damage on impact
#define DAMAGETYPE_RADIAL			2	//radial damage
#define DAMAGETYPE_VISIBLE			4	//damage to all entities visible to the projectile

typedef struct projectileinfo_s {
	char name[MAX_STRINGFIELD];
	char model[MAX_STRINGFIELD];
	int flags;
	float gravity;
	int damage;
	float radius;
	int visdamage;
	int damagetype;
	int healthinc;
	float push;
	float detonation;
	float bounce;
	float bouncefric;
	float bouncestop;
} projectileinfo_t;

typedef struct weaponinfo_s {
	int valid;		//true if the weapon info is valid
	int number;		//number of the weapon
	char name[MAX_STRINGFIELD];
	char model[MAX_STRINGFIELD];
	int level;
	int weaponindex;
	int flags;
	char projectile[MAX_STRINGFIELD];
	int numprojectiles;
	float hspread;
	float vspread;
	float speed;
	float acceleration;
	vec3_t recoil;
	vec3_t offset;
	vec3_t angleoffset;
	float extrazvelocity;
	int ammoamount;
	int ammoindex;
	float activate;
	float reload;
	float spinup;
	float spindown;
	projectileinfo_t proj;	//pointer to the used projectile
} weaponinfo_t;

//setup the weapon AI
int BotSetupWeaponAI(void);

//shut down the weapon AI
void BotShutdownWeaponAI(void);

//returns the best weapon to fight with
int BotChooseBestFightWeapon(int weaponstate, int *inventory);

//returns the information of the current weapon
void BotGetWeaponInfo(int weaponstate, int weapon, weaponinfo_t * weaponinfo);

//loads the weapon weights
int BotLoadWeaponWeights(int weaponstate, char *filename);

//returns a handle to a newly allocated weapon state
int BotAllocWeaponState(void);

//frees the weapon state
void BotFreeWeaponState(int weaponstate);

//resets the whole weapon state
void BotResetWeaponState(int weaponstate);