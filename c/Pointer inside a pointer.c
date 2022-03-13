#include <stdio.h>
//pointer to a pointer
int main()
{
    int x=10;
    int *ptr1;
    int **ptr2;//pointer to a pointer
    ptr1=&x;
    ptr2=&ptr1;
    // printf("Address of x: %x",&x);
    // printf("\nAddress of ptr1: %x",ptr1);
    // printf("\nAddress of ptr2: %x",ptr2);
    printf("%d",*ptr1);
    return 0;
}
