/*
 * dmx_parsec.h
 *
 *  Created on: Mar 30, 2026
 *      Author: Fidgo
 */

#ifndef INC_DMX_PARSEC_H_
#define INC_DMX_PARSEC_H_

#include "stdint.h"
#include "main.h"

#define DMX_CH_STROBE_ENABLE    1
#define DMX_CH_STROBE_SPEED     2
#define DMX_CH_RED              3
#define DMX_CH_GREEN            4
#define DMX_CH_BLUE             5

#define OCTET 255

typedef struct{
    uint8_t strobe_enable;
    uint8_t strobe_speed;
    uint8_t red_intensity;
    uint8_t green_intensity;
    uint8_t blue_intensity;
} DMX_ParsedData_t;

void DMX_ParseFrame(void);
DMX_ParsedData_t* DMX_GetParsedData(void);


#endif /* INC_DMX_PARSEC_H_ */
