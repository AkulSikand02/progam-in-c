#include <stdio.h>

int main()
{
    int x=10;
    int *ptr;
    ptr=&x;
    printf("%d",*ptr);
    *ptr+=2;
    printf("\n%d",*ptr);
    printf("\n%x",ptr);
    ptr+=5;
    printf("\n%d",*ptr);
    printf("\n%x",ptr);
    
    return 0;
}
