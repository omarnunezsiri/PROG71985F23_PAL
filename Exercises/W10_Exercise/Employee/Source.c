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

	printf("\n----------------------- Items ---------------------\n");
	DisplayList(myList); // display before delete

	/* To-do: Find an employee in the list */

	/* To-do: Delete the employee from the list */

	/* To-do: Try to find the employee in the list after deleting */

	StreamWriteList(myList, FILENAME); // writes the current state of the list
	DisposeList(&myList); // don't forget to free dynamically allocated variables!
	return 0;
}