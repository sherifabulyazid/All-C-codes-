#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int result=0;

    for(x=0;x<=100;x++){
        result+=x;
    }
    printf("result=%i\n",result);

    return 0;
}
