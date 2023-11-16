// PAL Week 11 - Examine a C Program - Reviewing Linked Lists (reading from a file)
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-19		initial
// 1.1			2023-03-20		file i/o implementation

#define FILENAME "list.dat"

#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int main(void)
{
	LIST myList = StreamReadList(FILENAME); // use the previous file to load the list

	printf("----------------------- Items ---------------------\n");
	DisplayList(myList); // display with items

	StreamWriteList(myList, FILENAME);
	DisposeList(&myList); // don't forget to free dynamically allocated variables!
	return 0;
}