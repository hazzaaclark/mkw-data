#pragma once

#ifndef PLAYER
#define PLAYER

#include "common.h"

#ifndef WEIGHT_CLASSES
#define WEIGHT_CLASSES

typedef struct SMALL_WEIGHTS;
typedef struct MEDIUM_WEIGHTS;
typedef struct LARGE_WEIGHTS;

typedef enum SMALL : U8
{
	MARIO = 0x6,
	LUIGI = 0xC,
	PEACH = 0x10,
	DAISY = 0x4,
	TOAD = 0x8,
	TOADETTE = 0xD,
	KOOPA = 0xE,
	DRY_BONES = 0x5

};

typedef enum MEDIUM : U8
{
	MARIO = 0x0,
	LUIGI = 0x7,
	PEACH = 0x10,
	DAISY = 0xF,
	YOSHI = 0xA,
	BIRDO = 0x11,
	DIDDY = 0x12,
	BOWSER_JR = 0x14

};

typedef enum LARGE : U8
{
	WARIO = 0xB,
	WALUIGI = 0x2,
	DONKEY = 0x9,
	BOWSER = 0x3,
	KING_BOO = 0x13,
	ROSALINA = 0x17,
	FUNKY = 0x16,
	DRY_BOWSER = 0x15

};

SMALL_WEIGHTS* SMALL();
MEDIUM_WEIGHTS* MEDIUM();
LARGE_WEIGHTS* LARGE();

#endif

#endif 
