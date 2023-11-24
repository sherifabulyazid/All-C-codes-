#include <stdio.h>
#include <stdlib.h>

int FactorialOf(int num);

int main()
{
    int x=FactorialOf(5);
    printf("%d\n",x);
    return 0;
}

int FactorialOf(int num)
{   int result;
    if(num>1){
            result= num*FactorialOf(num-1);
    }
    else{
        result= 1;
    }
    return result;
}
