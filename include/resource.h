#pragma once

#ifndef RESOURCE
#define RESOURCE

#include "common.h"
#include "dvd.h"

#ifndef UNKNOWN_FUNCS
#define UNKNOWN_FUNCS

UNKNOWN_FUNCTION(PROC_SYSTEM);
UNKNOWN_FUNCTION(FLUSH_SYSTEM);

DVD_ARCHIVE* DVD_CONST;
DVD_ARCHIVE* DVD_DESC;

#endif
#endif
