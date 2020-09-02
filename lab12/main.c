#include <stdio.h>

// Осуществить конкатенацию двух файлов 
// за счёт создания третьего файла.

int main()
{
    FILE *file1;
    FILE *file2;
    FILE *file3;
    file1 = fopen("/Users/vadimkuznecov/Desktop/file1.txt", "r");
    file2 = fopen("/Users/vadimkuznecov/Desktop/file2.txt", "r");
    file3 = fopen("/Users/vadimkuznecov/Desktop/file3.txt", "w");


    char cfile1[256];
    char cfile2[256];
    char cfile3[256];

    while(!feof(file1))
    {
        fgets(cfile1, sizeof(cfile1), file1);
        fputs(cfile1, file3);
    }

    while(!feof(file2))
    {
        fgets(cfile2, sizeof(cfile2), file2);
        fputs(cfile2, file3);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}