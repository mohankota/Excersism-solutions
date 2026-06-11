#include "binary.h"

int convert(const char *input)
{
    int decimal = 0;
    int length = strlen(input);

    for(int i = 0; i < length; i++)
    {
        if(input[i] == '0' || input[i] == '1')
        {
            decimal = decimal * 2 + (input[i] - '0');
        }
        else
        {
            return INVALID;
        }
    }

    return decimal;
}