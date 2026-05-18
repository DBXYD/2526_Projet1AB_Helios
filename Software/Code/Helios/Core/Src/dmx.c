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

static uint8_t rx_data;

static uint16_t dmx_index = 0;

static volatile uint8_t new_frame = 0;

void DMX_Init(void)
{
    DMX_StartReception();
}

void DMX_StartReception(void)
{
    HAL_UART_Receive_IT(
        &huart1,
        &rx_data,
        1
    );
}

uint8_t DMX_GetChannel(uint16_t channel)
{
    if(channel < DMX_CHANNELS)
    {
        return dmx_buffer[channel];
    }

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

/* UART callback */

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance == USART1)
	{
		/* TEST LED */
		/*
		HAL_GPIO_TogglePin(
				LED1_GPIO_Port,
				LED1_Pin
		);
		*/

		/* STORE BYTE */

		dmx_buffer[dmx_index] = rx_data;

		dmx_index++;

		/* FRAME COMPLETE */

		if(dmx_index >= DMX_CHANNELS)
		{
			dmx_index = 0;

			new_frame = 1;
		}

		/* RESTART RX */

		HAL_UART_Receive_IT(
				&huart1,
				&rx_data,
				1
		);
	}
}

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)
{
    if(huart->Instance == USART1)
    {
        /* Clear error */

        __HAL_UART_CLEAR_FEFLAG(huart);

        /* Restart RX */

        HAL_UART_Receive_IT(
            &huart1,
            &rx_data,
            1
        );
    }
}
