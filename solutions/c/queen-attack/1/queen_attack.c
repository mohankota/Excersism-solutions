#include "queen_attack.h"


#define slope(q1, q2) (q1.row - q2.row)/(q1.column - q2.column)

attack_status_t can_attack(position_t queen_1, position_t queen_2)
{
    //Invalid if on same position
    if(  (queen_1.column == queen_2.column)
       &&(queen_1.row == queen_2.row))
    {
        return INVALID_POSITION;
    }

    //position out of bounds
    if(   (queen_1.column > 7)
        ||(queen_1.row > 7)
        ||(queen_2.column > 7)
        ||(queen_2.row > 7)
      )
    {
        return INVALID_POSITION;
    }

    //on same column or same row
    if(  (queen_1.column == queen_2.column)
       ||(queen_1.row == queen_2.row))
    {
        return CAN_ATTACK;
    }

    /* on diagonal
        if the both the queens are on the attacking diagonal then the slope of the 
        line between two queens will 
         1  : if it is left diagonal
        -1  : if it is right diagonal
    */
    if((slope(queen_1, queen_2) == 1) || (slope(queen_1, queen_2) == -1))
    {
        return CAN_ATTACK;
    }
    else
    {
        return CAN_NOT_ATTACK;
    }
}
