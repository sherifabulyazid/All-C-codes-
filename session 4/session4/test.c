#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

extern unsigned char op;
extern unsigned char response;
extern int num1;
extern int num2;

int main()
{

    int result=0;
    while(1)
    {
        printf("Welcome to Calculator!\n");
        printf("\n");
        printf("enter operation (+,-,*,/):");
        scanf(" %c",&op);
        printf("\n");
        printf("enter first number:");
        scanf(" %d",&num1);
        printf("\n");
        printf("enter second number:");
        scanf(" %d",&num2);

        switch(op)
        {
        case('+'):
           result=Addition(num1,num2);
           printf("%d+%d=%d\n",num1,num2,result);
            break;
        case('-'):
            result=Subtraction(num1,num2);
            printf("%d-%d=%d\n",num1,num2,result);
            break;
        case('*'):
            result=Multiplication(num1,num2);
            printf("%d*%d=%d\n",num1,num2,result);
            break;
        case('/'):
            if (num2==0){
                    printf("division by zero is not allowed\n");
            }
            else{
                    //result=Division(num1,num2);
                    printf("%d/%d=%0.2f\n",num1,num2,Division(num1,num2));

            }
            break;
        default:
            printf("ivalid operation\n");

        }

        printf("Do you want another operation (y/n) :\n");

        scanf(" %c",&response);


        if(response == 'n')
        {
            break;
        }
        else if (response == 'y')
        {
            printf("\n\n");
        }
        else{
                printf("invalid response. Exiting...\n");
                break;
        }


    }
    return 0;
}
