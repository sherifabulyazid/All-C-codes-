#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintIntro(void);
void AddStudentDetails(int n);     // 1
void find_Details_rollNum(void);   // 2
void find_Details_firstName(void); // 3
void find_Details_CourseID(void);  // 4
void totalNumOfStudents(void);     // 5
void deleteDetails_rollNum(void);  // 6
void updateDetails_rollnum(void);  // 7

typedef struct
{
    char firstName[20];
    char lastName[20];
    char courseID[10];
    float gpa;
    unsigned int rollNum;
} student_t;

student_t student[50];
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
void PrintIntro(void)
{
    printf("\nChoose one of the below Tasks:\n\n");
    printf("1.add student details\n");
    printf("2.find student details by roll number\n");
    printf("3.find student details by first name\n");
    printf("4.find student details by course ID\n");
    printf("5.find the total number of students\n");
    printf("6.Delete student details by roll number\n");
    printf("7.update student details by roll number\n");
    printf("8.Exit\n\n");
    printf("Enter your choice: ");
}

void AddStudentDetails(int n)
{
    printf("Enter first name:");
    scanf(" %s", &(student[n].firstName));
    printf("Enter last name:");
    scanf(" %s", &(student[n].lastName));
    printf("Enter Roll Number:");
    scanf(" %i", &(student[n].rollNum));
    printf("Enter course ID:");
    scanf(" %s", &(student[n].courseID));
    printf("Enter GPA:");
    scanf(" %f", &(student[n].gpa));
}

void find_Details_rollNum(void)
{
    unsigned int rnum;
    unsigned short i = 0;
    printf("enter roll number of student:");
    scanf(" %d", &rnum);
    printf("\n");
    for (i = 0; i < 50; i++)
    {
        if (student[i].rollNum == rnum)
        {
            printf("First name: %s\n", student[i].firstName);
            printf("Last name: %s\n", student[i].lastName);
            printf("Course ID: %s\n", student[i].courseID);
            printf("Roll Number: %d\n", student[i].rollNum);
            printf("GPA: %0.2f\n", student[i].gpa);
            printf("\n");
        }
    }
}

void find_Details_firstName(void)
{
    char arr[20];
    printf("Enter first name:");
    scanf(" %s", arr);
    printf("\n");
    int i = 0;
    for (i = 0; i < 50; i++)
    {
        if (!(strcmp(arr, student[i].firstName)))
        {
            printf("First name: %s\n", student[i].firstName);
            printf("Last name: %s\n", student[i].lastName);
            printf("Course ID: %s\n", student[i].courseID);
            printf("Roll Number: %d\n", student[i].rollNum);
            printf("GPA: %0.2f\n", student[i].gpa);
            printf("\n");
        }
    }
}

void find_Details_CourseID(void)
{
    char arr[20];
    printf("Enter Course ID:");
    scanf(" %s", arr);
    printf("\n");
    int i = 0;
    for (i = 0; i < 50; i++)
    {
        if (!(strcmp(arr, student[i].courseID)))
        {
            printf("First name: %s\n", student[i].firstName);
            printf("Last name: %s\n", student[i].lastName);
            printf("Course ID: %s\n", student[i].courseID);
            printf("Roll Number: %d\n", student[i].rollNum);
            printf("GPA: %0.2f\n", student[i].gpa);
            printf("\n");
        }
    }
}
void totalNumOfStudents(void)
{
    unsigned int num = 50;
    int i = 0;
    for (i = 0; i < 50; i++)
    {
        if (student[i].rollNum == 0)
        {
            num--;
        }
        else
        {
        }
    }
    printf("Total Number of students= %d\n", num);
}
void deleteDetails_rollNum(void)
{
    unsigned int num = 0;
    int i = 0;
    printf("To Delete: Enter roll number of student:");
    scanf(" %d", &num);
    for (i = 0; i < 50; i++)
    {
        if (num == student[i].rollNum)
        {
            memset(student[i].firstName, '\0', 20);
            memset(student[i].lastName, '\0', 20);
            memset(student[i].courseID, '\0', 20);
            student[i].gpa = 0;
            student[i].rollNum = 0;
        }
    }
}

void updateDetails_rollnum(void)
{
    unsigned int num = 0;
    int i = 0;
    printf("To update: Enter student roll number:");
    scanf(" %d", &num);
    for (i = 0; i < 50; i++)
    {
        if (student[i].rollNum == num)
        {
            printf("Enter first name:");
            scanf(" %s", &(student[i].firstName));
            printf("Enter last name:");
            scanf(" %s", &(student[i].lastName));
            printf("Enter course ID:");
            scanf(" %s", &(student[i].courseID));
            printf("Enter GPA:");
            scanf(" %f", &(student[i].gpa));
        }
        else
        {
        }
    }
}