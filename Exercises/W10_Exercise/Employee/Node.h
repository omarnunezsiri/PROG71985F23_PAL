#pragma once
#include "Employee.h"

typedef struct Node
{
	EMPLOYEE emp;  
	struct Node* next;
}NODE, * PNODE;

PNODE CreateNode(EMPLOYEE);
PNODE GetNextNode(PNODE);
EMPLOYEE GetNodeEmployee(PNODE);
void SetNextNode(PNODE, PNODE);
void DisposeNode(PNODE);