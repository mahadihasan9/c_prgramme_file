#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int arr[10];
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    for(int j = 0 ; j < len;j++){
    arr[j] = 0;
    }
    
    for (int i = 0; i < len;i++){
    printf("array valu of arr[%d] = %d\n",i + 1,arr[i]);
    
    }
    
    return 0;
}