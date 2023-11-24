#include "arrayFunctions.h"
#include <stdio.h>

int removeDuplicates(int arr[],int n)
{
    int uarr[n];
    int i=0;
    int j=0;
    int k=0;
    int isduplicate=0;

    for(i=0;i<n;i++){
            isduplicate=0;
        for(j=0;j<k;j++){
            if(arr[i]==uarr[j]){
                    isduplicate=1;
                    break;
            }
        }
        if(isduplicate==0){
            uarr[k++]=arr[i];
        }
    }
    for(i=0;i<k;i++){
        arr[i]=uarr[i];
    }
    return k;
}

void printArray(int arr[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
