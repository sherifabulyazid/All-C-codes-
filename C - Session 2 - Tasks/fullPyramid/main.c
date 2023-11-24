#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hight;
    int i=0;
    int j=0;
    int s=0;


    printf("Enter hight of pyramid:");
    scanf("%d",&hight);

    for(i=1;i<=hight;i++){
        for(s=hight-i;s>0;s--){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
