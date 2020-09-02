#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#pragma pack(1)

// Реализовать редактор текстовой метаинформации mp3 файла.
// В качестве стандарта метаинформации принимаем ID3v2.
// Редактор представляет из себя консольную программу, принимающую
// в качестве аргументов имя файла через параметр --filepath,
// а также одну из выбранных комманд.

// Я выбрал: --show - отображение всей метаинформации в виде таблицы.
// Например: app.exe --filepath=Song.mp3 --show


typedef struct {
    unsigned char signature[3];
    unsigned char version[2];
    unsigned char flag;
    unsigned char size[4];
    
} id3v2;

int main(int argc, char **argv) {
    setlocale(LC_ALL, "");
    setlocale(LC_CTYPE, "");

    if(argc != 3) {
        printf("Неверное количество аргументов коммандной строки.\nТребуется ровно 2 аргумента. Вы ввели: %d\n", argc-1);
        // return 0;
    }

    id3v2 song;

    printf("Открытие файла...\n");
    FILE *file = fopen("example.mp3", "rb");

    if(!file) {
        perror("example.mp3");
        exit(1);
    }
    
    
    fread(&song.signature, sizeof(song.signature), 1, file);
    fread(&song.version, sizeof(song.version), 1, file);
    fread(&song.flag, sizeof(song.flag), 1, file);
    fread(&song.size, sizeof(song.size), 1, file);

    
    printf("%s\n", song.signature);
    printf("%s\n", song.version);
    printf("%c\n", song.flag);
    printf("%s\n", song.size);
    
    fclose(file);
    return 0;

}
