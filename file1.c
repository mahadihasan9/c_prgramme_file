#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1;
    int *ptr2;

    ptr1 = (int*) calloc(5, sizeof(int));

    ptr2 = (int*) malloc(5 * sizeof(int));

    printf("Values in calloc memory:\n");
    for (int i = 0; i < 5; i++){
        printf("ptr1 = %d\n", ptr1[i]); 
    }
    
    printf("Values in malloc memory:\n");
    for (int j = 0; j < 5; j++){
        printf("ptr2 = %d\n", ptr2[j]);
    }


    free(ptr1);
    free(ptr2);
    
    return 0;
}
    