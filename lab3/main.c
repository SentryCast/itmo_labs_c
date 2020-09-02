#include <stdio.h>

// Variant 3

int main() {
    
    int x, y, z;
    printf("Введите шестнадцатеричное число\n");
    scanf("%x", &x);
    printf("%o\n", x);
    printf("%o\t%o\n", x, x << 3);
    unsigned char b;
    b = ~x;
    printf("%o\t%o\n", x, b);
    printf("Введите восьмеричное число\n");
    scanf("%o", &y);
    z = x ^ y;
    printf("%o\n", z);
    
    return 0;
}

