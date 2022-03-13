/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int gross_salary=0, basic, da, ta, hra, pf;
 
    printf("Enter basic salary : ");
    scanf("%d", &basic);
 
    da = (10 * basic) / 100;
    ta = (20 * basic) / 100;
    hra = (5 * basic) / 100;
    pf = (12 * basic) / 100; 
    gross_salary = basic + da + ta + hra - pf;
 
    printf("\nGross salary : %d", gross_salary);
    return 0;
}
