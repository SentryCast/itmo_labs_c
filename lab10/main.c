#include <stdio.h>
#include <string.h>

// Дано натуральное число n. Разработать функцию формирования
// массива, элементами которого являются цифры числа n

// Разработать рекурсивную функцию, удаляющую из строки все
// лишние пробелы. Пробелы считаются лишними, если подряд идет
// более двух, если они стоят в конце строки после последней
// точки, если стоят после открывающегося парного знака препинания.


// task 1
int kol;
int count(int number)
{
    if (number / 10 == 0)
        return 1;
    else
    {
        while (number > 0)
        {
            number = number/10;
            kol ++;
        }
        return kol;
    }
}

// task 2
char badsymbols[4] = {' ','(','[','{'};

void delete(char* text, int pos){
    int i;
    for(i = pos + 1; i < strlen(text); i++){
        text[i - 1] = text[i];
    }
    text[strlen(text) - 1] = '\0';
}

void check(char t, int* flag) {
    int i;
    *flag = 0;
    for(i = 0; i < strlen(badsymbols); i++)
        if(t == badsymbols[i])
            *flag = 1;
}

char* spaceRemove (char* text, int pos){
    int flag = 0;
    if (pos >= strlen(text)){
        if (text [pos - 1] == ' ')
            delete(text, pos - 1);
        return text;
    }
    else {
        check(text[pos - 1], &flag);
        if ((text[pos] == ' ') && flag == 1){
            delete(text, pos);
        }
        else
            pos++;
        return spaceRemove(text, pos);
    }
}

int main()
{
    // task 3
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    printf("Your number: %d\n", number);
    printf("Number of digits: %d\n", count(number));

    int array[kol];
    int count = 0, i;

    while (number)
    {
        array[count++] = number % 10;
        number /= 10;
    }

    for (i = kol - 1; i >= 0; i--)
        printf("%d ", array[i]);
    printf("\n");

    //task 5

    char str[100] = "Hello  new ( some word)";
    printf("\n%s\n", str);
    printf("%s\n", spaceRemove(str, 1));

    return 0;
}
