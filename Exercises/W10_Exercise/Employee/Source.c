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

	/* To-do: Delete the employee from the list */
	//EMPLOYEE* eP = (EMPLOYEE*)calloc(1, sizeof(EMPLOYEE));
	//if (!eP)
	//{
	//	exit(EXIT_FAILURE);
	//}

	//SetEmployeeFirstName(eP, "Omar");
	//SetEmployeeID(eP, "99999");
	//SetEmployeeLastName(eP, "Nunez");
	//SetEmployeeWage(eP, 120.6);
	//SetEmployeeEAccess(eP, 3);

	//DisplayEmployee(*eP);

	EMPLOYEE e = CreateEmployee("12345", "", "", 0, 0.0);

	FireAnEmployee(&myList, e);

	printf("\n----------------------- Items after deleting ---------------------\n");
	DisplayList(myList); // display before delete

	StreamWriteList(myList, FILENAME); // writes the current state of the list
	DisposeList(&myList); // don't forget to free dynamically allocated variables!
	free(&myList);
	return 0;
}