#include <stdio.h>
#include <stdlib.h>
void SwapValues(int*p1,int *p2);
void summ(int n1,int n2,int*sum);


int main()
{
    int x=10;
    int y=25;
    int sum=0;
    printf("x=%d y=%d \n",x,y);
    SwapValues(&x,&y);
    summ(x,y,&sum);
    printf("x=%d y=%d , sum=%d \n",x,y,sum);

    return 0;
}
void SwapValues(int*p1,int *p2)
{
    int z= *p1;
    *p1=*p2;
    *p2=z;

}
void summ(int n1,int n2,int*ptrsum)
{
    *ptrsum= n1+n2;

}

