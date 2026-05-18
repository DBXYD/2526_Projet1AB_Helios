/*
 * strobe.C
 *
 *  Created on: Mar 30, 2026
 *      Author: Fidgo
 */

#include "strobe.h"
#include "dmx_parsec.h"
#include "dmx.h"
#include "tim.h"

static uint8_t pwm_counter = START;
static uint8_t strobe_state = ON;

static DMX_ParsedData_t* current_data;

void STROBE_Init(void){
	/* Mise a 0 des PWM */
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, 0);
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2, 0);
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3, 0);
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, 0);

    HAL_GPIO_WritePin(LedG2_GPIO_Port, LedG2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LedB2_GPIO_Port, LedB2_Pin, GPIO_PIN_RESET);


    /* Driver RGB 1 */

    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_3);

    /* Driver RGB 2 */

    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_4);

    HAL_TIM_Base_Start_IT(&htim3);
}

void STROBE_Update(DMX_ParsedData_t* data){
    uint16_t red;
    uint16_t green;
    uint16_t blue;

    current_data = data;

    if(strobe_state)
    {
        red   = data->red_intensity;
        green = data->green_intensity;
        blue  = data->blue_intensity;
    }
    else
    {
        red = 0;
        green = 0;
        blue = 0;
    }

    /* Driver 1 */

    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, red);
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2, green);
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3, blue);

    /* Driver 2 */

    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, red);

    /* Fréquence strobe */

    __HAL_TIM_SET_AUTORELOAD(
        &htim3,
        data->strobe_speed
    );
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if(htim->Instance == TIM3)
    {
    	/*Traite le problème de BREAK introduit par la norme DMX512 entre 2 paquets de donnée*/

    	if(current_data == NULL)
    	        {
    	            return;
    	        }
        pwm_counter++;

        /* STROBE */

        if(current_data->strobe_speed > 0){
            if(pwm_counter >= current_data->strobe_speed){
                pwm_counter = 0;
                strobe_state = !strobe_state;
            }
        }

        /* SOFTWARE PWM */

        if(strobe_state){


            HAL_GPIO_WritePin(LedG2_GPIO_Port,LedG2_Pin,pwm_counter < current_data->green_intensity);

            HAL_GPIO_WritePin(LedB2_GPIO_Port,LedB2_Pin,pwm_counter < current_data->blue_intensity);
        }
        else{
            HAL_GPIO_WritePin(LedG2_GPIO_Port,LedG2_Pin,GPIO_PIN_RESET);

            HAL_GPIO_WritePin(LedB2_GPIO_Port,LedB2_Pin,GPIO_PIN_RESET);
        }
    }
}
