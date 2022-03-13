#include <stdio.h>
int main() 
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    int i;
    int length = sizeof(arr)/sizeof(int); 
    ptr =&arr[length-1];
    for (i=0;i<5;i++){
        printf("%d\n",*ptr);
        ptr--;
        
    }
    return 0;
}
