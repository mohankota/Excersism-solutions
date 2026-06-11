#ifndef DARTS_H
#define DARTS_H

#include <math.h>
#include <stdint.h>

//Circle radii
#define OUTER_CIRCLE_RADIUS 10.0
#define MIDDLE_CIRCLE_RADIUS 5.0
#define INNER_CIRCLE_RADIUS 1.0

//points
#define OUT_SIDE_CIRCLE 0
#define OUTER_CIRCLE_POINTS 1
#define MIDDLE_CIRCLE_POINTS 5
#define INNER_CIRCLE_POINTS 10

//coordinate datatype
typedef struct
{
    float x;
    float y;
}coordinate_t;

float radius(coordinate_t pos);
uint8_t score(coordinate_t pos);

#endif
