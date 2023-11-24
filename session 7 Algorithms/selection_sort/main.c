//selection sort

#include <stdio.h>

int main()
{
    int arr[7]={12,5,8,2,9,10,7};
    int i=0;
    int j=0;
    int temp=0;
    int mv=0;

    for(i=0;i<6;i++)
    {
        mv=i;
        for(j=i+1;j<7;j++)
        {
            if(arr[mv]>arr[j])
            {
                mv=j;
            }

        }
        temp=arr[i];
        arr[i]=arr[mv];
        arr[mv]=temp;
    }


    for(i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
