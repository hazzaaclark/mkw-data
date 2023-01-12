#pragma once

#ifndef COMMON
#define COMMON

#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#if defined(_WIN32)
#define WIN_32_LEAN_AND_MEAN
#endif

#ifdef __cplusplus
extern "C"
{}
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

#endif 