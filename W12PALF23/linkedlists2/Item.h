// PAL Week 12 - Examine a C Program - Item ADT header
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-19		initial
// 1.1			2023-03-20		file i/o implementation
// 1.2			2023-03-26		delete implementation

#pragma once

#include <stdio.h>
#include <stdbool.h>

typedef struct Item
{
	short int id;
}ITEM, * PITEM;

ITEM CreateItem(short int);
void DisplayItem(ITEM);
void StreamWriteItem(ITEM, FILE*);
ITEM StreamReadItem(FILE*);
void DisposeItem(PITEM);

//
bool CompareItems(ITEM, ITEM);