#include <stdio.h>

int main()
{
    char opt;
    int result=0;
    printf("Eneter your option: ");
    scanf("%c",&opt);
    switch(opt){
        case 'A':{}
        case 'a':{
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);
            result= num1+num2;
            break;
        }
        case 'S':{}
        case 's':{
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);
            result = num1-num2;
            break;
        }
        case 'M':{}
        case 'm':{
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);
            result = num1*num2;
            break;
        }
        case 'D':{}
        case 'd':{
            int num1,num2;
            printf("Enter the first number: ");
            scanf("%d",&num1);
            printf("Enter the second number: ");
            scanf("%d",&num2);
            result = num1/num2;
            break;
        }
        default: {
            printf("Please Chose a valid option");
            break;
        }
    }
    printf("Result is : %d",result);
    return 0;
}
