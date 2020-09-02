#include <stdio.h>

enum OrganizationForm {
    ZAO = 1,
    OOO = 2,
    IndP = 3
};

struct Triangle {
    float side;
    float height;
    float square;
};

union Card_Reader {
    int value;
    struct {
        unsigned on: 1;
        unsigned active_SD_card: 1;
        unsigned active_Compact_Flash_card: 1;
        unsigned active_Memory_Stick_card: 1;
    };
};

int main() {

    enum OrganizationForm a = ZAO;
    printf("%d\n", a);

    struct Triangle obj;
    printf("Enter the side value of triangle: ");
    scanf("%f", &obj.side);
    printf("Enter the height value of triangle: ");
    scanf("%f", &obj.height);
    printf("Triangle's square is equal to %f\n", (obj.side * obj.height)/2);

    union Card_Reader state;
    printf("Enter a hexadecimal digit: ");
    scanf("%x", &state.value);
    printf(" on -> %s\n active_SD_card -> %s\n active_Compact_Flash card -> %s\n active_Memory_Stick_card -> %s\n",
    state.on ? "ON" : "OFF",
    state.active_SD_card ? "ON" : "OFF",
    state.active_Compact_Flash_card ? "ON" : "OFF",
    state.active_Memory_Stick_card ? "ON" : "OFF");

    return 0;
}

