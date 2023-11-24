#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int id;
    int grade;
    int CLASS;
} student;

int main()
{
    student ahmed =
    {
        .id=34,
        .grade=81,
        .CLASS=6
    };
    if(ahmed.grade>100||ahmed.grade<0)
    {
        printf("invalid grade\n");
    }
    else if(ahmed.grade>=85)
    {
        printf("Excellent\n");
    }
    else if(ahmed.grade>=75)
    {
        printf("very good\n");
    }
    else if (ahmed.grade>=65)
    {
        printf("good\n");
    }
    else if (ahmed.grade>=50)
    {
        printf("fair\n");
    }
    else
    {
        printf("failed");
    }
    printf("%d\n",sizeof(ahmed));

    return 0;
}
