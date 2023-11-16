#pragma once

#include <stdbool.h>
#include <stdio.h>

#define ENTRY 0
#define INTER 1
#define ADVANCED 3
#define MAXSTR 30

typedef struct Employee
{
	char id[MAXSTR];
	char firstName[MAXSTR];
	char lastName[MAXSTR];
	int eAccess;
	double wage;
}EMPLOYEE;

/* Create an employee */
EMPLOYEE CreateEmployee(char*, char*, char*, int, double);

/* Set information */
bool SetEmployeeID(EMPLOYEE*, char*);
bool SetEmployeeFirstName(EMPLOYEE*, char*);
bool SetEmployeeLastName(EMPLOYEE*, char*);
bool SetEmployeeEAccess(EMPLOYEE*, int);
bool SetEmployeeWage(EMPLOYEE*, double);

/* Get information */
char* getEmployID(EMPLOYEE);
char* getEmployFirstName(EMPLOYEE);
char* getEmployLastName(EMPLOYEE);
int getEmployEAccess(EMPLOYEE);
double getEmployWages(EMPLOYEE);

/* File IO */
bool LoadEmployee(FILE*, EMPLOYEE*);
bool SaveEmployee(EMPLOYEE, FILE*);

/* Display */
void DisplayEmployee(EMPLOYEE);