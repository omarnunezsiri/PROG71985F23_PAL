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
void DisplayList(LIST);
void DisposeList(PLIST);