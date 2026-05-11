/*
 * dmx_parsec.c
 *
 *  Created on: Mar 30, 2026
 *      Author: Fidgo
 */


#include "dmx_parsec.h"
#include "dmx.h"
#include "main.h"

static DMX_ParsedData_t parsed_data;

void DMX_ParseFrame(void){
    parsed_data.strobe_enable = DMX_GetChannel(DMX_CH_STROBE_ENABLE);

    parsed_data.strobe_speed = (DMX_GetChannel(DMX_CH_STROBE_SPEED) * parsed_data.strobe_enable) /OCTET;

    parsed_data.red_intensity = (DMX_GetChannel(DMX_CH_RED) * parsed_data.strobe_enable) /OCTET;

    parsed_data.green_intensity = (DMX_GetChannel(DMX_CH_GREEN) * parsed_data.strobe_enable) /OCTET;

    parsed_data.blue_intensity = (DMX_GetChannel(DMX_CH_BLUE) * parsed_data.strobe_enable) /OCTET;


}


DMX_ParsedData_t* DMX_GetParsedData(void)
{
    return &parsed_data;
}
