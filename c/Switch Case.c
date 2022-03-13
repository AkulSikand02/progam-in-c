#include <stdio.h>

int main()
{

    int opt;
    printf("Chose your optionfrom 1-4: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        {
            
            int A, B, C;
  
            printf("Enter the numbers A, B and C: ");
            scanf("%d %d %d", &A, &B, &C);
  
            if (A >= B && A >= C)
            printf("%d is the largest number.", A);
  
            if (B >= A && B >= C)
            printf("%d is the largest number.", B);
  
            if (C >= A && C >= B)
            printf("%d is the largest number.", C);
            break;
        }
            case 2:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);
            int sub=num1-num2;
            printf("Differences of two numbers are: %d\n",sub);
            break;
        }
            case 3:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);
            int add=num1+num2;
            printf("Addition of two numbers are: %d\n",add);
            break;
        }
            case 4:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);
            int multiply=num1*num2;
            printf("Multiplication of two numbers are: %d\n",multiply);
            break;
        }
        default:
        printf("Please Select a valid option option");
    }
    return 0;
}
