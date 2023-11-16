// PAL Week 11 - Examine a C Program - List ADT header
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-19		initial
// 1.1			2023-03-20		file i/o implementation

#pragma once
#include "Node.h"
#include "stdbool.h"
#include <stdio.h>

typedef struct List
{
	PNODE head;
}LIST, * PLIST;

LIST CreateList();
bool AddItemToList(PLIST, ITEM);
void DisplayList(LIST);
void StreamWriteList(LIST, char*);
LIST StreamReadList(char*);
void DisposeList(PLIST);