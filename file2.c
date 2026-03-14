#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int a = 10;
    
    printf("%p\n", &a);
    
    int long long x;
    
    printf("Enter memory address : ");
    scanf("%llx", &x);
    
    int *ptr = (int*)x;
    
    printf("the valu of x = %d", *ptr);
    
    
    
    return 0;
}