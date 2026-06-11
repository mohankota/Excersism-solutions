#include "eliuds_eggs.h"

unsigned int egg_count(int code)
{
    unsigned int eggs = 0;

    while(code > 0)
    {
        if(code%2 == 1)
        {
            eggs++;
        }
        code/=2;
    }

    return eggs;
}