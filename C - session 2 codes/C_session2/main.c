#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade;
    printf("please enter student grade:");
    scanf("%f",&grade);
    if (grade>=90 &&grade<=100 )
        {
            printf("Excellent");
        }
    else if (grade>=75 &&grade<90)
        {
            printf("very good");
        }
    else if (grade>=65 &&grade<75)
        {
            printf("good");
        }
    else if (grade>=50 && grade<65)
        {
            printf("Pass");
        }
    else if (grade<50&&grade>0)
        {
            printf("Fail");
        }
    else
        {
            printf("enter valid grade!!");
        }




    return 0;
}
