#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint32_t;
int hammingWeight(uint32_t n);

int main()
{
    int ones=hammingWeight(0b11111111111100011111011111111101); //27 ones
    printf("number of 1 bits= %d\n",ones);
    return 0;
}

int hammingWeight(uint32_t n)
{
    uint32_t cpy=n;
    uint32_t x=0;
    int i=0;
    int counter=0;
    for(i=0;i<32;i++)
    {
        cpy=n>>i;
        x=cpy&1;
        if(x==1){
            counter+=1;
        }
        else if(x==0){  }
        else{
                printf("error");
        }


    }
    return counter;

}
