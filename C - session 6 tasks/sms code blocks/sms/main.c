#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "opf.h"

unsigned int choice = 0;
int n = 0;

int main()
{

    while (choice != 8)
    {
        PrintIntro();
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            AddStudentDetails(n);
            n++;
            break;
        case 2:
            find_Details_rollNum();
            break;
        case 3:
            find_Details_firstName();
            break;
        case 4:
            find_Details_CourseID();
            break;
        case 5:
            totalNumOfStudents();
            break;
        case 6:
            deleteDetails_rollNum();
            break;
        case 7:
            updateDetails_rollnum();
            break;
        case 8:
            printf("Exiting....\n");
            break;
        default:
            break;
        }
    }

    return 0;
}
