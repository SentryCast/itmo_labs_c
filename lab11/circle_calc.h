#ifndef circle_calc_h
#define circle_calc_h

struct Circle {
    int x1, y1,
        x2, y2;
};

double circle_area_calculate(const struct Circle cir);
double circumference_calculate(const struct Circle cir);

#endif
