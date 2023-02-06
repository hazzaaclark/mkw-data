#pragma once

#ifndef RACE_MANAGER
#define RACE_MANAGER

#include "common.h"

#ifndef RACE_TRACK
#define RACE_TRACK

typedef enum NITRO_TRACKS : U8
{
	LUIGI_CIRCUIT = 0x8,
	MOO_MOO_MEADOWS = 0x1,
	MUSHROOM_GORGE = 0x2,
	TOADS_FACTORY = 0x4,

	MARIO_CIRCUIT = 0x0,
	COCONUT_MALL = 0x5,
	DK_SUMMIT = 0x6,
	WARIO_GOLD_MINE = 0x7,

	DAISY_CIRCUIT = 0x9,
	KOOPA_CAPE = 0xF,
	MAPLE_TREEWAY = 0xB,
	GRUMBLE_VOLCANO = 0x3,

	DRY_DRY_RUINS = 0xE,
	MOONVIEW_HIGHWAY = 0xA,
	BOWSERS_CASTLE = 0xC,
	RAINBOW_ROAD = 0xD
};

#endif

typedef enum RETRO_TRACKS : U8
{

};


#define RACE_PROPERTIES const

extern RACE_PROPERTIES NITRO_TRACKS NITRO[8];
extern RACE_PROPERTIES RETRO_TRACKS RETRO[4];
extern const S32 RANK_SCORE[5];
extern const U16 SCORE[4];


#endif
