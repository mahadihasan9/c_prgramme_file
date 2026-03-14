#include <stdio.h>
#include <stdlib.h>

int add(int *num, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + num[i];
    }
    return sum;
}

int main() {
    int len;
    int i = 0;
    int j = 0;

    printf("Enter your initial array size: ");
    scanf("%d", &len);

    int *arr = (int*) calloc(len, sizeof(int));
    if (arr == NULL) return 1;

    for ( ; i < len; i++) {
        printf("Enter arr[%d] input: ", i + 1);
        scanf("%d", &arr[i]);
    }

    char con;
    printf("\nDo you want to add more numbers? [y/n]: ");
    scanf(" %c", &con);

    if (con == 'y' || con == 'Y') {
        int a;
        printf("How many more numbers?: ");
        scanf("%d", &a);

        int llen = len + a;

        int *temp = (int*) realloc(arr, llen * sizeof(int));
        if (temp == NULL) {
            free(arr);
            return 1;
        }
        arr = temp;


        for ( ; j < llen; j++) {
            printf("Enter NEW arr[%d] input: ", j + 1);
            scanf("%d", &arr[j]);
        }

        int sum = add(arr, llen);
        printf("\nFinal output sum is = %d\n", sum);

    } else {
        int sum = add(arr, len);
        printf("\nFinal output sum is = %d\n", sum);
    }

    free(arr);
    return 0;
}
