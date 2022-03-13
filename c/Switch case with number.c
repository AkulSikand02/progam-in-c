#include <stdio.h>

int main()
{

    int opt;
    printf("Add press 1 | Subtract press 2 | Multiply press 3 | Divide press 4 \n");
    printf("Enter the operaton you want to do: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
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
            int multiply=num1*num2;
            printf("Multiplication of two numbers are: %d\n",multiply);
            break;
        }
            case 4:
        {
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);
            int division=num1/num2;
            printf("Division of two numbers are: %d\n",division);
            break;
        }
        default:
        printf("Please Select a valid option option");
    }
    return 0;
}
