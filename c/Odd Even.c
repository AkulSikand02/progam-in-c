#include <stdio.h>
#include <stdlib.h>

int main()
{

    char opt;
    printf("Chose option Odd or Even: ");
    scanf("%c",&opt);
    switch(opt)
    {
        case 'O':{}
        case 'o':
	{
            int n,i;
	        printf("Enter a number:");
	        scanf("%d",&n);
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
	        printf("Enter a number:");
	        scanf("%d",&j);
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
// #include <stdio.h>
// void main()
// {
//     printf("Hello World")
// }

