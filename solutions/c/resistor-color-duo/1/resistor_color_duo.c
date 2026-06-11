#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t color[])
{
      
    int value;

    value = color[0]*10 + color[1];

    return value;
}