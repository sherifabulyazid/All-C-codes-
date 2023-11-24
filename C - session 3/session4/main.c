#include <stdio.h>
#include <stdlib.h>

void PrintNumber(int num);
void SquareNumber(int num);
void AverageOf(int num1, int num2);
void MultiOf(int num1,int num2, int num3);
void FactorialOf(int num);


int main()
{
    int x=5;
    int y=3;
    int z=4;


    PrintNumber(x);
    SquareNumber(z);
    AverageOf(y,z);
    MultiOf(x,y,z);
    FactorialOf(x);
    return 0;
}

void PrintNumber(int num)
{
    printf("Number = %d\n",num);
}

void SquareNumber(int num)
{
    int sq=num*num;
    printf("Square of %d = %d\n",num,sq);
}

void AverageOf(int num1, int num2)
{
    float Av=((float)num1+(float)num2)/2;
    printf("Average of %d and %d = %0.2f\n",num1,num2,Av);
}


void MultiOf(int num1,int num2, int num3)
{
    int mul=num1*num2*num3;
    printf("Multiplication of %d and %d and %d  = %d\n",num1,num2,num3,mul);
}
void FactorialOf(int num)
{
    int i=0;
    int res=1;
    for(i=1;i<=num;i++)
    {
        res*=i;
    }
    printf("Factorial of Number %d = %d\n",num,res);

}

