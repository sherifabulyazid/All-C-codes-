#include <stdio.h>
#include <string.h>
#include "SDB.h"
#include "STD.h"
student students[SIZE]; //array of structures each structure is a student data
uint32 studentID; //a variable to store student id from the user
uint8 Index=0;   // a variable refers to the next index in the array to add student data into
bool check;       // a Variable to store the status or the return of function
uint32 ListofIDs[SIZE]; // Array to store IDs of students
uint32 mychoice=1;

void SDB_Options(void)
{
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("Options:\n\
0. exit \n\
1. add entry\n\
2. get used size in database\n\
3. read student data \n\
4. get the list of all student IDs\n\
5. check is ID is existed\n\
6. delete student data\n\
7. check is database is full\n");
}

void SDB_action(uint32 choice)
{

    switch (choice)
    {
    case 1:
        check=SDB_AddEntry();
        if (check==1)
        {
            Index++;
        }
        else {}
        break;
    case 2:
        printf("=> Used size in database = %d \n", SDB_GetUsedSize());
        break;
    case 3:
        printf("Enter student ID:");
        scanf(" %d", &studentID);
        SDB_ReadEntry(studentID);
        break;
    case 4:
        SDB_GetList(&Index,ListofIDs);
        printf("List of IDs: \n");
        for(uint8 i=0;i<Index;i++)
        {
            printf("%d \n",ListofIDs[i]);
        }
        break;
    case 5:
        printf("Enter student ID:");
        scanf(" %d", &studentID);
        check =SDB_IsIdExist(studentID);
        if (check==TRUE) printf("=> ID exists\n");
        else printf("=> ID doesn't exist\n");

        break;
    case 6:
        printf("Enter student ID:");
        scanf(" %d", &studentID);
        SDB_DeletEntry(studentID);
        break;
    case 7:
        if (1 == SDB_IsFull())
        {
            printf("=> database is full\n");
        }
        else
        {
            printf("=> database is not full\n");
        }
        break;
    case 0:
        printf("=> Exiting...\n");
        break;
    default:
        break;
    }
}

bool SDB_IsFull(void)
{

    if (Index==SIZE)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

uint8 SDB_GetUsedSize(void)
{
    uint8 numReserved = SIZE;
    for (uint8 i = 0; i < SIZE; i++)
    {
        if (students[i].Student_ID == 0)
        {
            numReserved--;
        }
    }
    return numReserved;
}

bool SDB_AddEntry(void)
{
    if (SDB_IsFull())//To make sure there's space in database
    {
        return 0;
    }
    else
    {
        printf("=> Enter Student ID:");
        scanf(" %d", &(students[Index].Student_ID));

        printf("=> Enter Student year:");
        scanf(" %d", &(students[Index].Student_year));


        printf("=> Enter Student Course1_ID:");
        scanf(" %d", &(students[Index].Course1_ID));

        printf("=> Enter Student Course1_grade:");
        scanf(" %d", &(students[Index].Course1_grade));

        printf("=> Enter Student Course2_ID:");
        scanf(" %d", &(students[Index].Course2_ID));

        printf("=> Enter Student Course2_grade:");
        scanf(" %d", &(students[Index].Course2_grade));

        printf("=> Enter Student Course3_ID:");
        scanf(" %d", &(students[Index].Course3_ID));

        printf("=> Enter Student course 3 grade:");
        scanf(" %d", &(students[Index].Course3_grade));
        return 1;
    }
}

void SDB_DeletEntry(uint32 id)
{
    for (uint8 i = 0; i < SIZE; i++)
    {
        if (students[i].Student_ID == id)
        {
            for (uint8 j = i; j < SIZE-1 ; j++) //shifting the array index by one
            {
                students[j].Student_ID = students[j + 1].Student_ID;
                students[j].Student_year = students[j + 1].Student_year;
                students[j].Course1_ID = students[j + 1].Course1_ID;
                students[j].Course1_grade = students[j + 1].Course1_grade;
                students[j].Course2_ID = students[j + 1].Course2_ID;
                students[j].Course2_grade = students[j + 1].Course2_grade;
                students[j].Course3_ID = students[j + 1].Course3_ID;
                students[j].Course3_grade = students[j + 1].Course3_grade;

            }
            Index--;
        }
    }
}
bool SDB_ReadEntry(uint32 id)
{
    for (uint8 i = 0; i < SIZE; i++)
    {
        if (students[i].Student_ID == id)
        {
            printf("=> student year: %d\n", students[i].Student_year);
            printf("=> course 1 ID: %d --> grade: %d\n", students[i].Course1_ID, students[i].Course1_grade);
            printf("=> course 2 ID: %d --> grade: %d\n", students[i].Course2_ID, students[i].Course2_grade);
            printf("=> course 3 ID: %d --> grade: %d\n", students[i].Course3_ID, students[i].Course3_grade);
            return TRUE;
        }
    }
    printf("ID doesn't Exist!\n");
    return FALSE;
}
bool SDB_IsIdExist (uint32 id)
{
    for (uint8 i = 0; i < SIZE; i++)
    {
        if (students[i].Student_ID == id)
        {
            return TRUE;
        }
        else {}
    }
    return FALSE;

}

void SDB_GetList (uint8 * Count, uint32 * List)
{
    for(uint8 i=0;i<*Count;i++)
    {
        List[i]=students[i].Student_ID;
    }
}

void SDB_APP (void)
{
    while (mychoice!=0)
    {
        SDB_Options();
        printf("Enter your choice:");
        scanf(" %d",&mychoice);
        SDB_action(mychoice);
    }
}
