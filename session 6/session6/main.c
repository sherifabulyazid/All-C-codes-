#include <stdio.h>
#include <stdlib.h>

int main()
{
    char*arr2="Ahmed";
    *(arr2+0)='M';
    printf("%s\n",arr2);
    return 0;
}
