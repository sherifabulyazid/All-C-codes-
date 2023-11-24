#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
 /*   if(num%2==1)
    {
        printf("Odd Number\n");
    }
    else
    {
        printf("Even Number\n");

    }
*/

    if (num & 1 == 1){
        printf("Odd");
    }
    else{
        printf("Even");
    }


    return 0;
}
