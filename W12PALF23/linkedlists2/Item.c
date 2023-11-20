// PAL Week 11 - Examine a C Program - Item ADT implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-19		initial
// 1.1			2023-03-20		file i/o implementation
// 1.2			2023-03-26		delete implementation

#include "Item.h"

ITEM CreateItem(short int id)
{
	ITEM item = { id };

	return item;
}

bool CompareItems(ITEM itemA, ITEM itemB)
{
	return itemA.id == itemB.id;
}

void DisplayItem(ITEM item)
{
	printf("Item id: %hu\n", item.id);
}

void StreamWriteItem(ITEM item, FILE* fp)
{
	fprintf(fp, "%hu\n", item.id);
}

ITEM StreamReadItem(FILE* fp)
{
	short int id;

	fscanf_s(fp, "%hu\n", &id);

	return CreateItem(id);
}

void DisposeItem(PITEM item)
{
	// no free!
}