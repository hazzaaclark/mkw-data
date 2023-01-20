#pragma once

#ifndef PLAYER
#define PLAYER

#include "common.h"

#define SMALL_WEIGHTS typedef enum
#define MEDIUM_WEIGHTS typedef enum
#define LARGE_WEIGHTS typedef enum

typedef struct
{
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

	} SMALL;

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

	} MEDIUM;

	LARGE_WEIGHTS
	{
		WARIO = 0x0B,
		WALUIGI = 0x02,
		DONKEY = 0x09,
		BOWSER = 0x03,
		KING_BOO = 0x13

	} LARGE;

} PLAYER_TYPES;

struct PLAYER_POINTER
{
	GENERIC_POINTER(, __stdcall, GET_PLAYER_TYPE, 0xFF, PLAYER_TYPES* TYPE);
};

#endif 
