#ifndef _SMS_H_
#define _SMS_H_
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

extern student_t student[50];

#endif
