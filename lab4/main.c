#include <stdio.h>

// Variant 3




int main () {
    
    printf("Задание 1\n\n");
    
    int x;
    char numerror[] = "Число не удовлетворяет условию\n";
    char numcorrect[] = "Число удовлетворяет условию\n";
    
    
    printf("Введите целое число от 1 до 1000\n");
    scanf("%d", &x);
    printf("%s", x > 0 ? x < 1001 ? numcorrect : numerror : numerror);
    
    printf("\n\nЗадание 2\n\n");
    
    
    
    int c, bit;
    
    printf("Введите целое число\n");
    scanf("%d", &c);
    bit = (c >> 3) & 1;
    printf("Третий бит в данном числе равен %d\n", bit);

 
    
    
    return 0;
}
