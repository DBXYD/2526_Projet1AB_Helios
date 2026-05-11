/*
 * dmx.c
 *
 *  Created on: Mar 30, 2026
 *      Author: Fidgo
 */

#include "dmx.h"
#include "dmx_parsec.h"
#include "usart.h"

static uint8_t dmx_buffer[DMX_CHANNELS];
static volatile uint8_t new_frame = 0;

void DMX_Init(void)
{
	DMX_StartReception();
}

void DMX_StartReception(void)
{
	HAL_UART_Receive_IT(&huart1, dmx_buffer, DMX_CHANNELS);
}

uint8_t DMX_GetChannel(uint16_t channel)
{
    if (channel < DMX_CHANNELS)
        return dmx_buffer[channel];
    return 0;
}

uint8_t DMX_NewFrameAvailable(void)
{
    return new_frame;
}

void DMX_ClearFrameFlag(void)
{
    new_frame = 0;
}

