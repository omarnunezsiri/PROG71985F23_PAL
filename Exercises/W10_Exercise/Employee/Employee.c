#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "Employee.h"

/* Create an employee */
EMPLOYEE CreateEmployee(char* id, char* firstName, char* lastName, int eAccess, double wage)
{
    EMPLOYEE newEmployee;

    strncpy(newEmployee.id, id, MAXSTR);
    strncpy(newEmployee.firstName, firstName, MAXSTR);
    strncpy(newEmployee.lastName, lastName, MAXSTR);
    newEmployee.eAccess = eAccess;  
    newEmployee.wage = wage;      

    return newEmployee;
}

/* Set information */  
bool SetEmployeeID(EMPLOYEE* e, char* id){
    if (id == NULL || strlen(id) == 0)
        return false;
    strncpy(e->id, id, MAXSTR);
    return true; 
}

bool SetEmployeeFirstName(EMPLOYEE* e, char* firstName){
	if (firstName == NULL || strlen(firstName) == 0)
		return false;
	strncpy(e->firstName, firstName, MAXSTR);
    return true;
}

bool SetEmployeeLastName(EMPLOYEE* e, char* lastName) {
    if (lastName == NULL || strlen(lastName) == 0)
        return false;
    strncpy(e->lastName, lastName, MAXSTR);
	return true;
}

bool SetEmployeeEAccess(EMPLOYEE* e, int eAccess) {
    e->eAccess = eAccess; //TODO: check range
	return true;
}

bool SetEmployeeWage(EMPLOYEE* e, double hopefullyBigBucks) {
    e->wage = hopefullyBigBucks;
	return true;
}

/* Get information */
char* getEmployID(EMPLOYEE e){
    return e.id;
}

char* getEmployFirstName(EMPLOYEE e){
    return e.firstName;
}

char* getEmployLastName(EMPLOYEE e){
    return e.lastName;
}

int getEmployEAccess(EMPLOYEE e){
    return e.eAccess;
}

double getEmployWages(EMPLOYEE e){
    return e.wage;
}

/*
* id
* firstName
* lastName
* access
* wage
*/

// Credits: PROG71985 Week 6 - Dr. Hendrikse
void removeTrailingNewLine(char* buffer)
{
    for (int i = 0; i < strlen(buffer); i++)
        if (buffer[i] == '\n')
            buffer[i] = '\0';
}

/* File IO */
bool LoadEmployee(char* filename, EMPLOYEE* e){
    FILE* fp;
    fp = fopen(filename, "r");
    bool readFromFile = true;
    if(fp == NULL)
    {
        fprintf(stderr, "open failed");
        return false; //fopen failed
    }

    /* Reading the id */
    char id[MAXSTR];
    fgets(id, MAXSTR, fp);
    removeTrailingNewLine(id);

    /* Reading the firstName */
    char firstName[MAXSTR];
    fgets(firstName, MAXSTR, fp);
    removeTrailingNewLine(firstName);

    /* Reading the lastName */
    char lastName[MAXSTR];
    fgets(lastName, MAXSTR, fp);
    removeTrailingNewLine(lastName);

    /* Reading the eAccess */
    int eAccess;

    if (fscanf(fp, "%d", &eAccess) != 1)
        readFromFile = false;

    /* Reading the wage */
    double wage;
    if (fscanf(fp, "%lf", &wage) != 1)
        readFromFile = false;

    /* If no errors; create the employee */
    if (readFromFile)
        *e = CreateEmployee(id, firstName, lastName, eAccess, wage);

    fclose(fp); // don't forget to close your files!

    return readFromFile;
}

//bool SaveEmployee(EMPLOYEE, char*){
//
//}