#pragma once

#ifndef COMMON
#define COMMON

#include <stdint.h>

#if defined(_WIN32)
#define WIN_32_LEAN_AND_MEAN
#endif

#ifdef __cplusplus
extern "C"
{}
#endif

#ifdef NULL
#define NULL 0
#endif

#define REVO_STANDARD_TYPES typedef

REVO_STANDARD_TYPES int8_t s8; 
REVO_STANDARD_TYPES int16_t s16;
REVO_STANDARD_TYPES int32_t S32;
REVO_STANDARD_TYPES int64_t S64;

#define REVO_UNSIGNED_TYPES typedef

REVO_UNSIGNED_TYPES uint8_t U8;
REVO_UNSIGNED_TYPES uint16_t U16;
REVO_UNSIGNED_TYPES uint32_t U32;
REVO_UNSIGNED_TYPES uint64_t U64;
REVO_UNSIGNED_TYPES unsigned long SIZE_T;

#ifndef UNKNOWN_TYPES
#define UNKNOWN_TYPES typedef

UNKNOWN_TYPES unsigned char UNKNOWN_8;
UNKNOWN_TYPES unsigned short UNKNOWN_16;
UNKNOWN_TYPES unsigned int UNKNOWN_32;
UNKNOWN_TYPES unsigned long UNKNOWN_64;
UNKNOWN_TYPES unsigned UNKNOWN_SIZE;

#endif 

#ifndef UNKNOWN_FUNCTION 
#define UNKNOWN_FUNCTION(NAME) void NAME(void)
#endif

#define UNKNOWN_FUNCTION_NONE(...)

#ifndef GENERIC_POINTER
#define GENERIC_POINTER(RETURN_TYPE, FUNCTION, LOCATION)
#endif 

#endif 
