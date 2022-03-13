#include <stdio.h>

int main()
{
    int arr[]={2,5,8,11,16,21,32,46,78,90};
    int num,count,i,flag=0,mid;
    printf("Enter the number: ");
    scanf("%d",&num);
    count=sizeof(arr)/sizeof(int);
    mid=count/2;
    if(num==arr[mid]){
        printf("%d is found at %d location",num,mid);
        flag=1;
    }
    if(arr[mid]>num){
        for(i=0;i<mid;i++){
            if(num==arr[i]){
                printf("%d is found at %d location",num,i);
                flag=1;
            }
        }
    }
    if(arr[mid]<num){
        for(i=mid+1;i<count;i++){
            if(arr[i]==num){
                printf("%d dose not exist in array",num);
            }
        }
    }
    return 0;
}
		