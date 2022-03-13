/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char opt;
    printf("Press O for odd and E for even: ");
    scanf("%c",&opt);
    switch(opt)
    {
        case 'O':{}
        case 'o':
	{
            int n,i;
	        printf("Enter a number between 10-30:");
	        scanf("%d",&n);
	        if(n<10||n>30){
            printf("You have entred a wrong number");
            exit(0);
            }
	        printf("odd numbers till %d:\n",n);
	        for(i=1;i<=n;i=i+2)
	        {
	            printf("%d\n",i);
	        }
	        break;
        }
        case 'E':{}
        case 'e':
        {
             int j,f;
	        printf("Enter a number between 10-30:");
	        scanf("%d",&j);
	        if(j<10||j>30){
            printf("Yopu have entred a wrong number");
            exit(0);
            }
	        printf("even numbers till %d:\n",j);
	        for(f=2;f<=j;f=f+2)
	        {
	    	    printf("%d ",f);
	        }
            break;
        }
        default:
        printf("Please Select a valid option option");
    }
    return 0;
}
