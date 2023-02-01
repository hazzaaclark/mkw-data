#pragma once

#ifndef IBM_POWER_PC_ASM
#define IBM_POWER_PC_ASM

#include "common.h"

/* DIRECTIVE MACROS DECLARED FOR PROPRIATORY FUNCTIONS */
/* RELATIVE TO THE WII'S CPU */

/* THESE ARE TO ALLOCATE, DEALLOCATEE AND INVALIDATE DATA REQUESTS */
/* THROUGHOUT THE CPU */

#define DATA_CACHE_BLOCK_FLUSH(_VALUE) asm volatile("DCBF, 0 %0" :: ""(_VALUE))
#define INSTRUCTION_CACHE_BLOCK_INVALDATE(_VALUE) asm volatile("ICBI, 0 %0" :: ""(_VALUE))
#define DATA_CACHE_BLOCK_STORE(_VALUE) asm volatile("DCBS, 0 %0" :: ""(_VALUE))

#ifndef IBM_HARDWARE_REG
#define IBM_HARDWARE_REG

#define HOLLYWOOD_REG() volatile U32[137] : 0xcd000000;
#define CP_REG() volatile U16[0x33] : 0xcc000000;
#define VI_REG() volatile U16[0x3b] : 0xcc002000;

#endif

#endif
