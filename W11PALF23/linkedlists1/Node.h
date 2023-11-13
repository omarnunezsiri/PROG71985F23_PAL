// PAL Week 11 - Examine a C Program - Node ADT header
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-19		initial

#pragma once
#include "Item.h"

typedef struct Node
{
	ITEM item;
	struct Node* next;
}NODE, * PNODE;

PNODE CreateNode(ITEM);
PNODE GetNextNode(PNODE);
ITEM GetNodeItem(PNODE);
void SetNextNode(PNODE, PNODE);
void DisposeNode(PNODE);