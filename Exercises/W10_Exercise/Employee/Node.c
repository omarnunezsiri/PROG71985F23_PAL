#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

PNODE CreateNode(EMPLOYEE newEmp)
{
	PNODE newNode = (PNODE)malloc(sizeof(NODE));
	if (!newNode) // error checking
	{
		fprintf(stderr, "Error allocating new node. Exiting...\n");
		return NULL;
	}

	newNode->emp = newEmp;
	newNode->next = NULL;

	return newNode;
}

PNODE GetNextNode(PNODE node)
{
	return node->next;
}

void SetNextNode(PNODE currentNode, PNODE nextNode)
{
	currentNode->next = nextNode;
}

EMPLOYEE GetNodeEmployee(PNODE node)
{
	return node->emp;
}

void DisposeNode(PNODE node)
{
	free(node); // free heap (dynamically allocated) memory
}