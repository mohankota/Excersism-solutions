#include "collatz_conjecture.h"

#define MAX_VAL 1000000

// Hash/Lookup table to store the sequence lengths
int collatz_memo[MAX_VAL];

int steps(int n) 
{
    //Base case: 0 and negative numbers return ERROR_VALUE(-1)
    if (n <= 0) return ERROR_VALUE;
    
    // Base case: 1 requires 0 steps
    if (n == 1) return 0;
    
    // If we have calculated this before, return its stored steps
    if (n < MAX_VAL && collatz_memo[n] != 0) 
    {
        return collatz_memo[n];
    }
    
    // Calculate steps based on parity
    int stps = 0;
    if (n % 2 == 0) 
    {
        stps = 1 + steps(n / 2);
    } 
    else 
    {
        stps = 1 + steps(3 * n + 1);
    }
    
    // Memoize the result to the hash array (if number fits our limits)
    if (n < MAX_VAL) 
    {
        collatz_memo[n] = stps;
    }
    
    return stps;
}