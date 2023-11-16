// PAL Week 11 - Examine a C Program - List ADT implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-19		initial
// 1.1			2023-03-20		file i/o implementation

#define _CRT_SECURE_NO_WARNINGS
#include "List.h"
#include <stdlib.h> // exit() functionality

LIST CreateList()
{
	LIST newList = { 0 }; // sets ADT to a "safe" state

	return newList;
}

bool AddItemToList(PLIST list, ITEM newItem)
{
	PNODE newNode = CreateNode(newItem);

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
			DisplayItem(GetNodeItem(current));
			current = GetNextNode(current);
		}
	}
	else
	{
		printf("List is empty. Add items to it!\n");
	}
}

void StreamWriteList(LIST list, char* fileName)
{
	if (list.head) // list is not empty
	{
		FILE* fp = fopen(fileName, "w");
		if (!fp) // opening file went wrong
		{
			fprintf(stderr, "Error opening %s. Exiting...\n", fileName);
			exit(EXIT_FAILURE);
		}

		PNODE current = list.head;
		while (current)
		{
			StreamWriteItem(GetNodeItem(current), fp);
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
		ITEM newItem = StreamReadItem(fp);
		if (!AddItemToList(&newList, newItem))
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
		temp = currentNode;
		currentNode = GetNextNode(currentNode);
		DisposeNode(temp);
	}
}