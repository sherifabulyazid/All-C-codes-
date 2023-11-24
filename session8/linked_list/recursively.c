#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
#define nn 3
int main()
{
    int n=1;
    int arr[nn]={1,2,3};
    arr[1]=4;
    int num = factorial(5);
    printf("%d\n", num);
    
    return 0;
}
