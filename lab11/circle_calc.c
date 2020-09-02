#include <math.h>
#include "circle_calc.h"
#define _USE_MATH_DEFINES

double circle_area_calculate(const struct Circle cir) {
    return (pow(((sqrt(pow((cir.x2-cir.x1), 2) + pow((cir.y2-cir.y1), 2)))/2), 2)*M_PI);
}

double circumference_calculate(const struct Circle cir) {
    return (sqrt(pow((cir.x2-cir.x1), 2) + pow((cir.y2-cir.y1), 2)))*M_PI;
}
