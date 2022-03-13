#include <stdio.h>

int main()
{
    int data[]={3,2,5,4,1,6,8,9,7,10,15,13,12,14,11,20,19,18,17,16,5};
    int length = sizeof(data)/sizeof(data[0]);
    int j,temp,i;
    for(j=0;j<length-1;j++){
        for(i=0;i<length;i++){
            if(data[i]>data[i+1]){
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }   
        }
    }
    printf("Array After sorting is: \n");
    for(i=0;i<length;i++){
        printf(" %d",data[i]);
    }
    return 0;
}
