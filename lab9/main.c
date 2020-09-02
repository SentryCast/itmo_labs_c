#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Преобразовать цифру, введенную с консоли в строку, содержащую
// числительное, соответствующее этой цифре. Результат вывести на
// консоль

// Вывести на консоль простые числа, начиная с 2, заканчивая
// ближайшим простым числом, меньшим либо равным целому числу,
// введенному с консоли

int main() {

    // task1
    int numeral;
    char* buffer;
    printf("Введите любую цифру: ");
    scanf("%d", &numeral);
    sprintf(buffer, "%d", numeral);
    printf("Ваша строка: %s\n", buffer);

    //task2
    int num;
    printf("\n");
    printf("Введите число, больше либо равное 2: ");
    scanf("%d", &num);
    
    for(int i = 2; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}