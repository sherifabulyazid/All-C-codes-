#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int z;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    printf("Before :\nnum1=%i num2=%i\n",num1,num2);

    /*
    z=num1;
    num1=num2;
    num2=z;
    */
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("After :\nnum1=%i num2=%i\n",num1,num2);
    return 0;
}
