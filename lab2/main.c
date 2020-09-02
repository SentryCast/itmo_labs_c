#include <stdio.h>
#include <math.h>

// Variant 3

int main() {
    
    float z1, z2, alpha, a;
    printf("Введите значение угла альфа\n");
    scanf("%f", &a);
    alpha = (a * (M_PI / 180));
    
    z1 = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) + 1 - 2 * sin(2 * alpha) * sin(2 * alpha));
    
    z2 = 2 * sin(alpha);
    
    printf("%f\n", z1);
    printf("%f\n", z2);
    
    
}
