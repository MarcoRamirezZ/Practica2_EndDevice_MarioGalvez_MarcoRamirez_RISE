/*
* Copyright 2016-2017 NXP
* All rights reserved.
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef APP_ZCL_TASK_H_
#define APP_ZCL_TASK_H_

/*!
\file       app_zcl_task.c
\brief      This is a header file for the applications zcl task.
*/


/****************************************************************************/
/***        Include Files                                                 ***/
/****************************************************************************/

#include <jendefs.h>
#include "zcl.h"
#include "base_device.h"

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/
PUBLIC void APP_ZCL_vInitialise(void);
PUBLIC void APP_ZCL_vSetIdentifyTime(uint16 u16Time);
PUBLIC void APP_cbTimerZclTick(void *pvParam);
PUBLIC void APP_ZCL_vTask(void);
PUBLIC void APP_ZCL_vEventHandler(ZPS_tsAfEvent *psStackEvent);
#ifdef CLD_IDENTIFY_10HZ_TICK
    PUBLIC void vIdEffectTick(uint8 u8Endpoint);
#endif
/****************************************************************************/
/***        Exported Variables                                            ***/
/****************************************************************************/

extern tsZHA_BaseDevice sBaseDevice;
extern tsZHA_BaseDevice sBaseDeviceTemperature;

#endif /* APP_ZCL_TASK_H_ */

/****************************************************************************/
/***        END OF FILE                                                   ***/
/****************************************************************************/
