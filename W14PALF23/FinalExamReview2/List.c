#include "List.h"
#include <stdio.h>
#include <stdlib.h>

LIST CreateList()
{
	LIST newList = { 0 };

	return newList;
}

bool AddComponentToList(PLIST pList, COMPONENT component)
{
	PNODE newnode = CreateNode(component);

	if (!newnode) // malloc failed
		return false;

	if (pList->head == NULL) // list is empty
	{
		pList->head = newnode;
	}
	else
	{
		PNODE currentNode = pList->head;

		while (GetNodeNextNode(currentNode)) // keep traversing the list until we get to the last slot
		{
			currentNode = GetNodeNextNode(currentNode);
		}

		SetNodeNextNode(currentNode, newnode);
	}
	return true;
}

void DisplayList(LIST list)
{
	if (list.head) // list is not empty
	{
		PNODE current = list.head;
		while (current)
		{
			DisplayComponent(GetNodeComponent(current));
			current = GetNodeNextNode(current);
		}
	}
	else
	{
		printf("List is empty!");
	}
}

void DisposeList(PLIST pList)
{
	PNODE temp;
	PNODE current = pList->head;
	while (current)
	{
		temp = current;
		current = GetNodeNextNode(current);
		DisposeNode(temp);
	}
}