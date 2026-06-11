#include "difference_of_squares.h"
#include <math.h>

unsigned int sum_of_squares(unsigned int number)
{
    /*
        Mathematical formula for sum of squares of 'n' natural numbers is as below:
        (n * (n + 1) * ((2 * n) + 1)) / 6
    */

    return ((number * (number + 1) * ((2 * number) + 1)) / 6);
}

unsigned int square_of_sum(unsigned int number)
{
    /*
        we solve it in two steps
        1. Mathematical formula for sum of 'n' natural numbers is as below:
            (n * (n+1)) / 2

        2. Now square the result obtained by formula
    */

    return pow(((number * (number + 1)) / 2), 2);
}

unsigned int difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}