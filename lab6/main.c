#include <stdio.h>
#include <stdlib.h>

// Variant 3
       

int main () {
    
    // Массив с использованием указателя
    
    float Arr[4];
    float *p;
    p = Arr;

    p[0] = -8.8;
    p[1] = 11.2;
    p[2] = 64.67;
    p[3] = 55.32;
    printf("%.2f %.2f %.2f %.2f ", p[0], p[1], p[2], p[3]);

    printf("\n");
    
    // Массив в динамической памяти
    
    float *pp = NULL;
    
    pp = (float*)malloc(4*sizeof(float));
    
    pp[0] = -8.8;
    pp[1] = 11.2;
    pp[2] = 64.67;
    pp[3] = 55.32;
    
    printf("%.2f %.2f %.2f %.2f ", pp[0], pp[1], pp[2], pp[3]);

    free(pp);
    
   return 0;
}
