// PAL Week 7 - Midterm Review - Examine a C Program
//							ClassCord
// 
// PROG71985-W23/F23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-20		initial
// 2.0			2023-10-14		reviewed/refactored

#include <stdio.h> // standard input and output streams (stdin, stdout)
#include "Cord.h"

#define DATAFILE "ClassCord.txt" // MACRO

int main(void)
{
	return 0;
}

/*
* Example without an existing datafile
	USER user1 = CreateUser(1, "omarnunez", "conestogac", "2002-21-11");
	USER user2 = CreateUser(2, "johndoe", "doejohn", "1996-01-01");
	USER user3 = CreateUser(3, "linus", "torvlin111", "1969-12-28");

	CORD myCord = CreateCord(1);

	// What does the & symbol represent?
	AddNewUser(&myCord, user1);
	AddNewUser(&myCord, user2);
	AddNewUser(&myCord, user3);

	DisplayCord(myCord);

	StreamWriteCord(myCord, DATAFILE);
*/

/*
* Example with existing datafile
	CORD myCord = StreamReadCord(DATAFILE);

	DisplayCord(myCord);

	StreamWriteCord(myCord, DATAFILE);
*/