#include <stdio.h>
int sum(int x,int y,int z){
    int r=x+y+z;
    return r;
    
}
int main()
{
    int x,y,z,result;
    printf("Enter the first value: ");
    scanf("%d",&x);
    printf("Enter the second value: ");
    scanf("%d",&y);
    printf("Enter the third value: ");
    scanf("%d",&z);
    result=sum (x,y,z);
    printf("The sum of numbers are %d",result);
    return 0;
}
