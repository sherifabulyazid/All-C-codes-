#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint32_t;
uint32_t reverseBits(uint32_t n);
int main()
{
    uint32_t num=0b11111111111111111111111111111101;
    printf("Before: num = %u\n",num); //43261596       4294967293
    num=reverseBits(num);             //   To              To
    printf("After:  num = %u\n",num); //964176192      3221225471
    return 0;
}

uint32_t reverseBits(uint32_t n)
{
    uint32_t bit1;
    uint32_t bit2;
    uint32_t x=n;
    uint32_t i=0;
    for(i=0;i<16;i++)
    {

        bit1=n>>i;
        bit1=bit1&1;

        bit2=n>>(31-i);
        bit2=bit2&1;

        if(bit1==1){
            x=x|(1<<(31-i));
        }
        else{
            x=x&~(1<<(31-i));
        }

        if(bit2==1){
            x=x|(1<<i);
        }
        else{
            x=x&~(1<<i);
        }
    }

    return x;
}
