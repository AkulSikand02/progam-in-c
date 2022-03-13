#include <stdio.h>

int main()
{
    int n,i,arr[10],p=0,negetive=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>=0){
            p++;
        }
        else{
            negetive++;
        }
    }
    printf("Number of positive numbres %d and number of negetive numbers are %d",p,negetive);
    return 0;
    
}
