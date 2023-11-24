#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned char op;
    unsigned char response;
    int num1;
    int num2;
    while(1)
    {
        printf("Welcome to Calculator!\n");
        printf("\n");
        printf("enter operation:");
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
            printf(" %d+%d=%d\n",num1,num2,num1+num2);
            break;
        case('-'):
            printf(" %d-%d=%d\n",num1,num2,num1-num2);
            break;
        case('*'):
            printf(" %d*%d=%d\n",num1,num2,num1*num2);
            break;
        case('/'):
            if (num2==0){
                    printf("division by zero is not allowed\n");
            }
            else{
                    printf(" %d/%d=%0.2f\n",num1,num2,(float)num1/(float)num2);

            }
            break;
        default:
            printf("ivalid operation\n");

        }

        printf("Do you want another operation (y/n) :\n");

        scanf(" %c",&response); //note the space before %c


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
       // while (getchar() != '\n'); // Read and discard any remaining characters including newline


    }
    return 0;
}
