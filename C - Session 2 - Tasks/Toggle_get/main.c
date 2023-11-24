#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=10; //1010
    int y;
    int b;
    printf("Get bit number : ");
    scanf("%d",&b);

    //get bit 1
    /*
    y=(1<<b)&num;
    y >>=b;
    printf("bit= %d\n",y);
    */
    num=num>>b;
    y=num&1;
        printf("bit= %d\n",y);
    //toggle bit
    printf("toggle bit number : ");
    scanf("%d",&b);
    y=num^(1<<b);
    printf("num after toggle= %d\n",y);
    return 0;
}
