#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"
#include "List.h"

#define FILENAME "Employee.txt"

int main(void)
{
	/* Create a few employees, add them to the list and display the list */
	EMPLOYEE e;

	SetEmployeeID(&e, "58192");
	SetEmployeeFirstName(&e, "John");
	SetEmployeeLastName(&e, "Joe");
	SetEmployeeEAccess(&e, 3);
	SetEmployeeWage(&e, 69.9);

	EMPLOYEE e2;

	SetEmployeeID(&e2, "12345");
	SetEmployeeFirstName(&e2, "Johnson");
	SetEmployeeLastName(&e2, "Bob");
	SetEmployeeEAccess(&e2, 2);
	SetEmployeeWage(&e2, 100);

	// bool AddEmployeeToList(PLIST, EMPLOYEE);
	LIST myList = CreateList();
	if (!AddEmployeeToList(&myList, e))
		exit(EXIT_FAILURE);

	if (!AddEmployeeToList(&myList, e2))
		exit(EXIT_FAILURE);

	DisplayList(myList);

	DisposeList(&myList);
	return 0;
}

// Old implementation from W10
//EMPLOYEE e;

//if (!LoadEmployee(FILENAME, &e))
//	exit(EXIT_FAILURE);
//
//printf("%s --- %s --- %s --- %d --- %lf\n", getEmployID(e), getEmployFirstName(e), getEmployLastName(e), getEmployEAccess(e), getEmployWages(e));
//
//SetEmployeeFirstName(&e, "Steve");

//printf("%s --- %s --- %s --- %d --- %lf\n", getEmployID(e), getEmployFirstName(e), getEmployLastName(e), getEmployEAccess(e), getEmployWages(e));