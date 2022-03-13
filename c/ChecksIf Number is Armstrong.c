#include <stdio.h>
#include <math.h>

int get_count(int n){
    int c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    return c;
}


void check_arm(int n,int c){
    int r,sum=0,temp;
    temp=n;
    while(n>0){
        r=n%10;
        sum+=pow(r,c);
        n=n/10;
    }
    if(temp==sum){
        printf("The Number is armstrong");
    }
    else{
        printf("The number is not armstrong");
    }
}

int main()
{
    int num,count;
    
    printf("Enter Number:");
    scanf("%d",&num);
    int temp=num;
    
    count=get_count(num);

    check_arm(num,count);


    return 0;
}



