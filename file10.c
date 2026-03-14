#include <stdio.h>

int main() {

    char file[] = "/home/drunken-poet/Documents/c programme/test.txt";

    FILE *fptr = fopen(file, "r");

    char text[100];

    if (fptr == NULL) {
        printf("Error: Could not open file. Check if the path is correct.\n");
        return 1;
    }

    while (fgets(text, 100, fptr)) {
        printf("%s", text);
    }

    fclose(fptr);

    return 0;
}
