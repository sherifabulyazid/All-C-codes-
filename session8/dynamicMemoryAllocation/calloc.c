#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num=(int*)calloc(10,sizeof(int));
    num[0]=1;
    for(int i=1;i<10;i++){
        num[i]=2*num[i-1];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",num[i]);
    }
    free(num);
}
