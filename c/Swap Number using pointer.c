#include <stdio.h>
int swap(int *x  ,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x,y;
    printf("Enter the first value: ");
    scanf("%d",&x);
    printf("Enter the second value: ");
    scanf("%d",&y);
    printf("Befor swapping");
    printf("\nValue of x %d",x);
    printf("\nValue of y %d",y);
    swap(&x,&y);
    printf("\nAfter swaping");
    printf("\nValue of x %d",x);
    printf("\nValue of y %d",y);
    return 0;
}
