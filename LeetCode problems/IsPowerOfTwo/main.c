#include <stdio.h>
#include <stdlib.h>

int isPowerOfTwo(int n);

int main()
{
    int num=0;
    int x=2;
    printf("Enter number: ");
    scanf(" %d",&num);
    num=isPowerOfTwo(num);
    if (1==num){
        printf("True\n");
    }
    else{
        printf("False\n");

    }


    return 0;
}
int isPowerOfTwo(int n){
    int i=0;
    int x=n;
    int counter=0;

    for (i=0;i<32;i++)
    {
        x=n>>i;
        x&=1;
        if (x==1){
            counter+=1;
        }
        else{}
    }
    return counter;
}
