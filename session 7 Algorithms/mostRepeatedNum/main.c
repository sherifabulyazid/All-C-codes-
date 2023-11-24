#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={0,1,2,2,2,3,4,4,0,1,2,2,3,2,4,5,6,7,8,2,};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp[10]={0};
    int i=0;
    int max=0;
    int num=0;
    for(i=0;i<size;i++){
        temp[arr[i]]++;
        }
   /* for(i=0;i<10;i++){
        printf("%d : %d\n",i,temp[i]);
    }
    */
    for(i=0;i<10;i++){
        if(temp[i]>max){
            max=temp[i];
            num=i;
        }
        else{}
    }
    printf("%d is the max number rebeated %d times\n",num,max);
    return 0;
}
