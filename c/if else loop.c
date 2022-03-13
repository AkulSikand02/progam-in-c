/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,x;
    printf("Enter a Number between 10-30: ");
    scanf("%d",&num);
    if(num<10||num>30){
        printf("Yopu have entred a wrong number");
        exit(0);
    }
    if(num%2==0)
    x=2;
    else
    x=1;
    
    
    
    return 0;
}
