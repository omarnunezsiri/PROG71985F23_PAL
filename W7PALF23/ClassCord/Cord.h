// PAL Week 7 - Cord ADT header
// 
// PROG71985-W23/F23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-20		initial
// 2.0			2023-10-14		refactored

#pragma once
#include "User.h"

#define MAXUSERS 24

typedef struct Cord {
	int id;
	int currentIndex;
	USER users[MAXUSERS]; // reusing the USER struct
}CORD;

CORD CreateCord(int); // creates a Cord
void DisplayCord(CORD); // displays a Cord
void AddNewUser(CORD*, USER); // adds a new user
void StreamWriteCord(CORD, char[]); // writes a Cord to a file
void StreamReadCord(CORD*, char[]); // reads a Cord from a file