#include <stdio.h>
#include <stdlib.h>
// int pointer(){
//     int *ptr
//     // ptr++;
//     // printf("\n%x",ptr);
//     // printf("\n%d",*ptr);
    
// }
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=arr;

    printf("%x",arr);
    printf("\n%d",*ptr);
    ptr++;
    printf("\n%x",ptr);
    printf("\n%d",*ptr);
    ptr++;
    printf("\n%x",ptr);
    printf("\n%d",*ptr);
    ptr++;
    printf("\n%x",ptr);
    printf("\n%d",*ptr);
    ptr++;
    printf("\n%x",ptr);
    printf("\n%d",*ptr);

    return 0;
}
