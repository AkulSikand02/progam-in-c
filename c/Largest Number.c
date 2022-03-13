/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, big ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe biggest number is : %d", big) ;

    return 0;
}
