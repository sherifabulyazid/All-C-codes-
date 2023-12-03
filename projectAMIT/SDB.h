#ifndef _SMS_H_
#define _SMS_H_
#include "STD.h"

#define SIZE 3 /*Here we have maximum data of 4 students */

void SDB_APP (void);/*it has a super loop it will make your project
                    until the user chose to exit you will ask the user to choose between these options*/
void SDB_Options(void);/*prints options*/
void SDB_action(uint32 choice);/*takes the user choice and call the responding function for this choice*/
bool SDB_IsFull();  /*checks if the database is full or not. Returns true if the database is full, else returns false*/
uint8 SDB_GetUsedSize(void);/*Returns the number of students in the database*/
bool SDB_AddEntry(void);/* asks the user for the required data in the database to add one student
                           returns 1 if the data is added successfully return 0 if the data not added to your database */
void SDB_DeletEntry(uint32 id);  /*delete the student data with the given id*/
bool SDB_ReadEntry(uint32 id);   /*print student data by searching in data by the given id*/
bool SDB_IsIdExist(uint32 id);   /*Checks if the given id the Exists*/
void SDB_GetList(uint8 *Count, uint32 *List); /*To get the list of all student IDs*/

typedef struct SimpleDb
{
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
} student;

#endif

