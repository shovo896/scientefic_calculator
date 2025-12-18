#include "conversions.h"
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double degrees_to_radians(double degrees) {
    return degrees * (M_PI / 180.0);
}

double radians_to_degrees(double radians) {
    return radians * (180.0 / M_PI);
}
