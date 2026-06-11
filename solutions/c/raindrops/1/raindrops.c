#include "raindrops.h"

void convert(char result[], int drops)
{
    if(drops%3 == 0)
    {
        strcat(result, "Pling");
    }

    if(drops%5 == 0)
    {
        strcat(result, "Plang");
    }

    if(drops%7 == 0)
    {
        strcat(result, "Plong");
    }

    if((drops%3 != 0) && (drops%5 != 0) && (drops%7 != 0))
    {
        while(drops!=0)
        {
            char buffer[2];
            buffer[0] = '0' + drops%10;
            buffer[1] = '\0';
            strcat(result, buffer);
            drops/=10;
        }
        int i = 0;
        int j = strlen(result) - 1;
    
        while (i < j) 
        {
            char temp = result[i];
            result[i] = result[j];
            result[j] = temp;
            i++;
            j--;
        }
    }
}