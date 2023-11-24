#include "calc.h"

unsigned char op;
unsigned char response;
int num1;
int num2;


int Addition(int n1,int n2)
{
    int res= n1+n2;
    return res;
}

int Subtraction(int n1,int n2)
{
    int res= n1-n2;
    return res;
}

int Multiplication(int n1,int n2)
{
    int res= n1*n2;
    return res;
}

float Division(int n1,int n2)
{
    float res=0;
    res= (float)n1/n2;
    return res;
}
