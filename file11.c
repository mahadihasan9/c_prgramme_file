#include <stdio.h>

struct info {
    char nam[7];
};

int main() {
    struct info s;
    char text[] = "mahadi";


    for (int i = 0; i < 6; i++) {
        s.nam[i] = text[i];
    }

    s.nam[6] = '\0';

    printf("Struct member nam: %s\n", s.nam);

    return 0;
}
