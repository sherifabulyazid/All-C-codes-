#include <stdio.h>
#include <stdlib.h>
#include "bitmath.h"

int main()
{
    int x=10; //0b1010
    //Clear bit 1
    CLEARBIT(x,1);
    printf("%d\n",x);//8
    //toggle bit 2
    TOGGLE(x,2);
    printf("%d\n",x);//12
    //set bit 1
    SETBIT(x,1);
    printf("%d\n",x);//14
    //Get bit 3
    int y= GETBIT(x,3);
    printf("bit = %d\n",y);

    return 0;
}
