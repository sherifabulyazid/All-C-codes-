#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("enter first number:");
    scanf("%i",&num1);
    printf("enter first number:");
    scanf("%i",&num2);
    int result=num1+num2;
    printf("Sum=%i\n",result);
    result=num1-num2;
    printf("Sub=%i\n",result);
    result=num1*num2;
    printf("Mult=%i\n",result);
    float result1=(float)num1/(float)num2;
    printf("Div=%0.2f\n",result1);
 /*   int x = 10;
    int y=3;

    printf("SUM=%i \nSUB=%i \nMULT=%i \nDiv=%i\n",(x+y),(x-y),(x*y),(x/y));
*/
    return 0;

}
