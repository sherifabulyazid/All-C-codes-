#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hight;
    int i=0; //Rows
    int j=0; //stars
    int s=0; //spaces


    printf("Enter hight of pyramid:");
    scanf("%d",&hight);

    for(i=hight;i>0;i--){
        for(s=hight-i;s>0;s--){
                printf(" ");
        }
        for(j=2*i-1;j>0;j--){
            printf("*");
        }
        printf("\n");
        }

    return 0;
}
