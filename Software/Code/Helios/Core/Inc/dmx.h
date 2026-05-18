/*
 * dmx.h
 *
 *  Created on: Mar 30, 2026
 *      Author: Fidgo
 */

#ifndef INC_DMX_H_
#define INC_DMX_H_

#include "stdint.h"
#include "main.h"

#define DMX_CHANNELS 512

void DMX_Init(void);
void DMX_StartReception(void);

// Getter
uint8_t DMX_GetChannel(uint16_t channel);

// Status
uint8_t DMX_NewFrameAvailable(void);
void DMX_ClearFrameFlag(void);
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart);

#endif /* INC_DMX_H_ */
