#pragma once

#ifndef PLAYER
#define PLAYER

#define SMALL_WEIGHTS typedef enum 
#define MEDIUM_WEIGHTS typedef enum
#define LARGE_WEIGHTS typedef enum

SMALL_WEIGHTS
{
	    MARIO = 0x06,
		LUIGI = 0x0C,
		PEACH = 0x01,
		DAISY = 0x04,
		TOAD = 0x08,
		TOADETTE = 0x0D,
		KOOPA = 0x0E,
		DRY_BONES = 0x05
};

MEDIUM_WEIGHTS
{  
	MARIO = 0x00,
	LUIGI = 0x07,
	PEACH = 0x10,
	DAISY = 0x0F,
	YOSHI = 0x0A,
	BIRDO = 0x11,
	DIDDY = 0x12,
	BOWSER_JR = 0x14
};

LARGE_WEIGHTS
{
	WARIO = 0x0B,
	WALUIGI = 0x02,
	DONKEY = 0x09,
	BOWSER = 0x03,
	KING_BOO = 0x13,
	ROSALINA = 0x17,
	FUNKY = 0x16,
	DRY_BOWSER = 0x15  
};

SMALL_WEIGHTS SMALL;
MEDIUM_WEIGHTS MEDIUM;
LARGE_WEIGHTS LARGE;

#endif 
