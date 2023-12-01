#include "List.h"
#include <stdlib.h>

LIST CreateList()
{
	LIST newList = { 0 }; // sets ADT to a "safe" state

	return newList;
}

PNODE GetListHeadNode(PLIST list)
{
	return list->head;
}

bool AddEmployeeToList(PLIST list, EMPLOYEE newEmp)
{
	PNODE newNode = CreateNode(newEmp);

	if (!newNode) // checks if the node was allocated
		return false;

	if (list->head == NULL) // list is empty
	{
		list->head = newNode;
	}
	else
	{
		PNODE currentNode = list->head;

		while (GetNextNode(currentNode))
		{
			currentNode = GetNextNode(currentNode);
		}

		SetNextNode(currentNode, newNode);
	}

	return true;
}

void FireAnEmployee(PLIST list, EMPLOYEE employeeToFire)
{
	PNODE current = list->head;

	/* Delete the first element */
	if (CompareEmployees(current->emp, employeeToFire))
	{
		if (GetNextNode(current) != NULL) // information to change is in the first node.
			list->head = GetNextNode(current);
		else  // there is only one node
			list->head = NULL;

		DisposeNode(current); // free dynamically allocated memory!
		return;
	}

	PNODE prev = NULL; // we need to keep track of the previous link 
	while (current != NULL && !CompareEmployees(current->emp, employeeToFire))
	{
		prev = current;
		current = GetNextNode(current);
	}

	if (current == NULL) // what if we traversed the list and the item wasn't found?
		return;

	SetNextNode(prev, GetNextNode(current)); // remove the link

	/*
	* Initially:
	* 1            2               3
	* prev --->  current ---> currentNext
	*
	* Link removed:
	* 1           3
	* prev --> currentNext
	*
	* Get rid of node:
	* 2
	* free(current)
	*/

	DisposeNode(current); // free dynamically allocated memory
}

void DisplayList(LIST list)
{
	if (list.head)
	{
		PNODE current = list.head;
		while (current)
		{
			DisplayEmployee(GetNodeEmployee(current));
			current = GetNextNode(current);
		}
	}
	else
	{
		printf("List is empty. Add items to it!\n");
	}
}

/* To-do */
EMPLOYEE* FindEmployeeRecursively(PNODE list, EMPLOYEE employeeToFind)
{
	PNODE current = list;

	if (!current) // base case (employee not found)
		return NULL;
	else
	{
		EMPLOYEE currentEmployee = GetNodeEmployee(current);
		if (CompareEmployees(employeeToFind, currentEmployee))
			return &currentEmployee;
		else
			return FindEmployeeRecursively(current->next, employeeToFind);
	}
}

void StreamWriteList(LIST list, char* fileName)
{
	if (list.head) // list is not empty
	{
		FILE* fp = fopen(fileName, "w");
		if (!fp) // opening file wen't wrong
		{
			fprintf(stderr, "Error opening %s. Exiting...\n", fileName);
			exit(EXIT_FAILURE);
		}

		PNODE current = list.head;
		while (current)
		{
			SaveEmployee(GetNodeEmployee(current), fp);
			current = GetNextNode(current);
		}

		fclose(fp); // don't forget to close your files!
	}
}

LIST StreamReadList(char* fileName)
{
	LIST newList = CreateList();

	FILE* fp = fopen(fileName, "r");
	if (!fp)
	{
		fprintf(stderr, "Error opening %s. Exiting...\n", fileName);
		exit(EXIT_FAILURE);
	}

	while (!(feof(fp))) // while we don't hit end-of-file
	{
		EMPLOYEE newEmployee;
		LoadEmployee(fp, &newEmployee);
		if (!AddEmployeeToList(&newList, newEmployee))
			exit(EXIT_FAILURE);
	}

	return newList;
}

void DisposeList(PLIST list)
{
	PNODE temp;
	PNODE currentNode = list->head;

	while (currentNode)
	{
		/* free what is behind me that way i don't let go of the chain */
		temp = currentNode;
		currentNode = GetNextNode(currentNode);
		DisposeNode(temp);
	}
}