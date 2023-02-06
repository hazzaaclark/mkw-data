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
	U16 ARCHIVE_COUNT = 1;
	void INIT();
	void CLEAR();
	void* GET_FILE(const char* NAME, SIZE_T* SIZE);
	void* UNMOUNT_DISK();

};

struct DVD_FUNCTIONS
{
	static void MOUNT();
	static void LOAD();
	static void LOAD_UNSIGNED(U32 UNUSED);
};

#endif 
