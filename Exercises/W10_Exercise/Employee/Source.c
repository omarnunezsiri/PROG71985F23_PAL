// PAL Week 12 - Building Program: Currently at reading/writing to a file
// 
// PROG71985-W23
//
//

#define FILENAME "EmployeeDB.txt"

#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"
#include "List.h"

int main(void)
{	
	printf("CoolBuilding :)\n\n");

	/* Placeholder main function. Write your code here! */
	LIST myList = StreamReadList(FILENAME); // reads the past state of the list

	printf("\n----------------------- Items before deleting ---------------------\n");
	DisplayList(myList); // display before delete

	EMPLOYEE e = CreateEmployee("69120", "", "", 0, 0.0); // only criteria required is the id

	EMPLOYEE* found = FindEmployeeRecursively(GetListHeadNode(&myList), e);

	if (!found) // no one to fire
	{
		fprintf(stderr, "\nEmployee with id %s not found.\n", getEmployID(e));
	}
	else
	{
		printf("Employee with id %s found. Proceeding to delete employee from list.\n", getEmployID(e));
		FireAnEmployee(&myList, e);
	}

	printf("\n----------------------- Items after deleting ---------------------\n");
	DisplayList(myList); // display before delete

	StreamWriteList(myList, FILENAME); // writes the current state of the list
	DisposeList(&myList); // don't forget to free dynamically allocated variables!
	return 0;
}