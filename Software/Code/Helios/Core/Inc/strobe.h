/*
 * strobe.h
 *
 *  Created on: Mar 30, 2026
 *      Author: Fidgo
 */
#ifndef STROBE_H
#define STROBE_H

#include "stdint.h"
#include "dmx_parsec.h"
#include "stm32f1xx_hal_tim.h"

#define ON 1
#define OFF 0
#define START 0
void STROBE_Init(void);
void STROBE_Update(DMX_ParsedData_t* data);
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif/* INC_STROBE_H_ */
