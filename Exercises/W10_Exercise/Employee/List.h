#pragma once
#include "Node.h"
#include "stdbool.h"
#include <stdio.h>

typedef struct List
{
	PNODE head;
}LIST, * PLIST;

LIST CreateList();
bool AddEmployeeToList(PLIST, EMPLOYEE);
PNODE GetListHeadNode(PLIST);
EMPLOYEE* FindEmployeeRecursively(PNODE, EMPLOYEE);
void DisplayList(LIST);
void StreamWriteList(LIST, char*);
LIST StreamReadList(char*);
void FireAnEmployee(PLIST, EMPLOYEE);
void DisposeList(PLIST);