#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index)
{
    /* This returns the number of grains on a square
        We calculate it using the powers of 2.
    */
    return pow(2, index-1);
}

uint64_t total(void)
{
    int index;
    uint64_t sum = 0;

    /*
        adding up the grains on each square.
    */
    for(index = 1; index <= 64; index++)
    {
        sum+=square(index);
    }
    return sum;
}
