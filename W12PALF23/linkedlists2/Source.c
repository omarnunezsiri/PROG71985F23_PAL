// PAL Week 12 - Examine a C Program - Reviewing Linked Lists (deleting an item)
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-19		initial
// 1.1			2023-03-20		file i/o implementation
// 1.2			2023-03-26		delete implementation

#define FILENAME "list.dat"

#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int main(void)
{
	LIST myList = StreamReadList(FILENAME); // use the previous file to load the list

	cyan();
	printf("----------------------- Items ---------------------\n");
	DisplayList(myList); // display with items

	RemoveItemFromList(&myList, CreateItem(3)); // removes the 3rd element! list should be now 1-->2-->4

	yellow();
	printf("----------------------- Items after delete ---------------------\n");
	DisplayList(myList);

	green();
	printf("----------------------- Writing to file ---------------------\n");
	StreamWriteList(myList, FILENAME);
	DisposeList(&myList); // don't forget to free dynamically allocated variables!
	reset();
	return 0;
}