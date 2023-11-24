#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hight;
    int i=0;
    int j=0;


    printf("Enter hight:");
    scanf("%d",&hight);
    for(i=0;i<hight;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
