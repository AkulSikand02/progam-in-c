#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    printf("%x",arr);
    ptr++;
    ptr++;
    printf("\n%x",ptr);
    return 0;
}