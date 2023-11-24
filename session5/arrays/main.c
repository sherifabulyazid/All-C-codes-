#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr_odd[5]={1,3,5,7,9};
    int arr_even[5]={0,2,4,6,8};
    int numbers[10];
    short i=0;
    int z=0;

    for(i=0;i<10;i++)
    {
        numbers[z]=arr_even[i];
        z++;
        numbers[z]=arr_odd[i];
        z++;
    }

    for(i=0;i<10;i++){
            printf("%d\t",numbers[i]);
    }

    return 0;
}
