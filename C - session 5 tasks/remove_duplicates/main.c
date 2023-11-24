#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int z=10;
    int arr[10]={3,1,2,0,4,3,2,0,1,2};
    int arr2[10]={0};
    int arr3[10]={0};
    int j=0;

    int i=0;
    for(i=0;i<n;i++){
        if(arr2[arr[i]]==0)
            {
            arr2[arr[i]]=1;
            arr3[arr[i]]= arr[i];
            j++;
        }
        else{z--;}
    }


    for(i=0;i<z;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
