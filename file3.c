#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int *arr = (int*) malloc(2 * sizeof(int));
    
    arr[0] = 50;
    arr[1] = 50;
    
    
    arr = (int*) realloc(arr, 5 * sizeof(int));
    
    arr[2] = 50; 
    arr[3] = 50;
    arr[4] = 50;
    
    int sum = 0;
    
    
    for (int i = 0; i < 5; i++){
        printf("The value of arr[%d] = %d\n", i, arr[i]);
        sum += arr[i];
    }
    
    printf("\nFinal output sum is = %d\n", sum);
    
    
    free(arr);
    
    return 0;
}
    