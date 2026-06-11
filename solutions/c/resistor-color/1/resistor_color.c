#include "resistor_color.h"

unsigned int color_code(const resistor_band_t color)
{
    //returning the integer values of the enum
    return (unsigned int)color;
}

const resistor_band_t *colors()
{
    //we need the scope of the variable across other functions.
    //so declared it as static.
    static const resistor_band_t all_colors[] = {BLACK, BROWN, RED, ORANGE, YELLOW,
                                          GREEN, BLUE, VIOLET, GREY, WHITE};
        
    return all_colors;
}