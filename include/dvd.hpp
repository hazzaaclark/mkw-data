#pragma once

#ifndef DVD
#define DVD

#include "common.h"

typedef struct DVD_ARCHIVE;
typedef struct MULTI_DVD_ARCHIVE;
typedef struct RESOURCE_MANAGER;

typedef enum
{
	DVD_ARCHIVE_STATE_CLEARED = 0,
	DVD_ARCHIVE_STATE_NONE = 1,
	DVD_ARCHIVE_STATE_RIPPED = 2,
	DVD_ARCHIVE_STATE_DECOMPRESSED = 3,
	DVD_ARCHIVE_STATE_MOUNTED = 4,
	DVD_ARCHIVE_STATE_UNKN5 = 5

} ARCHIVE_STATE;

struct DVD_ARCHIVE
{
	static U16 ARCHIVE_COUNT;
	static void INIT();
	static void CLEAR();
	static void* GET_FILE(const char* NAME, SIZE_T* SIZE);
};

struct DVD_FUNCTIONS
{
	static void SET_ARCHIVE_HEAP();
	static void SET_FILE_HEAP();
	static void MOUNT();
	static void LOAD(const char* NAME, UNKNOWN_32 UNK_PRM);
	static void LOAD_UNSIGNED(U32 UNUSED);
	static void* UNMOUNT_DISK();
	static bool IS_LOADED();
	static U16 RIPPED_ARCHIVE_COUNT();
};

#endif 
