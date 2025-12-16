#ifndef SYNCHRO_LOOP_H
#define SYNCHRO_LOOP_H

#include "common.h"
#ifdef PLATFORM_PSYZ
#include <libgpu.h>
#else
#include "LIBGPU.H"
#endif
#include "main_moteur.h"

void FUN_801802d8(void);
void SYNCHRO_LOOP(s16 (*func)());

#endif