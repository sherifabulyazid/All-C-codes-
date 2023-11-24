#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int num1;
    int num2;

    printf("enter arithmetic operator");
    scanf("%c",&op);
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);

    switch(op)
    {
    case '+':
        printf("result=%i\n",num1+num2);
        break;
    case '-':
        printf("result=%i\n",num1-num2);
        break;

    }
    return 0;
}
