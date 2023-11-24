#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int factorial=1;

    printf("Enter number: ");
    scanf("%i",&num);
    for(i=1;i<=num;i++){
        factorial*=i;

    }
    printf("factorial of %i = %i\n",num,factorial);

    return 0;
}
