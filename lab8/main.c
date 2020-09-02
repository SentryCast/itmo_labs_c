#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int max_u(unsigned int a, unsigned int b) {
    return (a < b) ? b : a;
}

int main() {
    char *x;
    x = (char*)malloc(255);
    char *y;
    y = (char*)malloc(255);
    printf("Enter two strings: ");
    scanf("%s%s", x, y);
    printf("\n");
    printf("Your strings: '%s' and '%s'\n", x, y);

    printf("Comparing strings: ");
    if(strcmp(x, y) == 0) {
        printf("Your strings are equal\n");
    } else {
        printf("Your strings are not equal\n");
    }

    printf("Copying first string data to second string. ");
    strncpy(y, x, strlen(x));
    printf("Result string: %s\n", y);

    printf("Length of 'x' string: %lu\n", strlen(x));

    unsigned int last_entry = 0;
    for(int i = 0; i < strlen(x); i++) {
        if(x[i] == 'h') {
            last_entry = i+1;
        }
    }
    if(last_entry > 0) {
        printf("Last 'h' symbol in 'x' string is located on %u place\n", last_entry);
    } else {
        printf("There is no 'h' symbol in 'x' string.\n");
    }

    printf("Enter the 'y' string again to find length of segment: ");
    scanf("%s", y);
    unsigned int counter = 0;
    
    for(int i = 0; i < strlen(x); i++) {
        if(x[i] == y[i]) {
            counter++;
        }
    }
    
    printf("Length of segment 'x' in 'y' is: %u\n", counter);
    return 0;
}
