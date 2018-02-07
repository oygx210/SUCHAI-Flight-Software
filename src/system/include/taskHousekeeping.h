/**
 * @file  taskHousekeeping.h
 * @author Tomas Opazo T - tomas.opazo.t@gmail.com
 * @author Carlos Gonzalez C - carlgonz@ug.uchile.cl
 * @date 2012
 * @copyright GNU GPL v3
 *
 * @id 0x1101
 *
 * This task implements a listener, that sends commands at periodical times.
 */

#ifndef T_HOUSEKEEPING_H
#define T_HOUSEKEEPING_H

#include <stdlib.h>
#include "config.h"

#if SCH_COMM_ENABLE
    #include "csp/csp.h"
#endif
#ifdef AVR32
    #include "asf.h"
    #include "util.h"
#endif
#ifdef NANOMIND
    #include <led.h>
#endif

#include "globals.h"

#include "osQueue.h"
#include "osDelay.h"

#include "repoCommand.h"

void taskHousekeeping(void *param);

#endif //T_HOUSEKEEPING_H




