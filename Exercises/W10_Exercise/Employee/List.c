#include "List.h"

LIST CreateList()
{
	LIST newList = { 0 }; // sets ADT to a "safe" state

	return newList;
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