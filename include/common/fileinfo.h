#ifndef FILEINFO_H
#define FILEINFO_H

#include "common.h"
#ifdef PLATFORM_PSYZ
#include <libcd.h>
#else
#include "LIBCD.H"
#endif

typedef struct FileInfo
{
    u8 *path;
    u8 *dest; /* u32 * based on PS1_LoadFiles/CdRead? */
    u8 *dest_debug;
    CdlFILE file;
} FileInfo;

#endif