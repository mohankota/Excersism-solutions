#include "hamming.h"

int compute(const char *lhs, const char *rhs)
{
    int hd = 0;
    int i, len;
    
    if(strlen(lhs) != strlen(rhs)) return ERROR_VALUE;

    len = strlen(lhs);

    for(i = 0; i < len; ++i)
    {
        if(lhs[i] != rhs[i]) 
        {
            hd++;
        }
    }

    return hd;
    
}