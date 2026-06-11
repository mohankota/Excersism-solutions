#include "leap.h"

bool leap_year(int year)
{
    //if year is divisible by 100 then it should be divisible by 400
    if (year % 100 == 0)
    {
        return (year % 400 == 0);
    }

    //otherwise if it is divisible by 4
    return (year % 4 == 0);
}