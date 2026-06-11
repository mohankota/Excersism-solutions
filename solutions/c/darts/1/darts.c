#include "darts.h"

float radius(coordinate_t pos)
{
    return (float)sqrt(pow(pos.x, 2) + pow(pos.y, 2));
}

uint8_t score(coordinate_t pos)
{
    float r = radius(pos);
    uint8_t points;

    if(r > OUTER_CIRCLE_RADIUS)
    {
        points = OUT_SIDE_CIRCLE;
    }
    else if((r <= OUTER_CIRCLE_RADIUS) && (r > MIDDLE_CIRCLE_RADIUS))
    {
        points = OUTER_CIRCLE_POINTS;
    }
    else if((r <= MIDDLE_CIRCLE_RADIUS) && (r > INNER_CIRCLE_RADIUS))
    {
        points = MIDDLE_CIRCLE_POINTS;
    }
    else if(r <= INNER_CIRCLE_RADIUS)
    {
        points = INNER_CIRCLE_POINTS;
    }

    return points;
}