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
    uint32_t Rev=0;
    uint32_t z=0;
    int i=0;
    for(i=0;i<32;i++){
        Rev<<=1;
        z=n>>i;
        z&=1;
        Rev|=z;

    }
    return Rev;
}
