// PAL Week 10 - Examine a C Program - Reviewing pointers using structures
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-12		initial

#include <stdio.h>
#include <stdbool.h>

typedef struct Grade
{
	float floatingGrade; // 0-100
	char letter;         // SABCDF
	bool pass;           // true (passed) ; false (didn't pass)
}GRADE;

void changeGrade(GRADE* g)
{
	g->floatingGrade = 60;
}

void displayGrade(GRADE g)
{
	printf("val: %.1f -- letter: %c -- pass? %d\n", g.floatingGrade, g.letter, g.pass);
}

int main(void)
{
	GRADE newGrade = { .floatingGrade = 91.33, .letter = 'S', .pass = true };

	displayGrade(newGrade);
	// 91.33 -- S -- 1

	GRADE* pGrade = &newGrade; // structures are datatypes, we can have pointers to structures!
	pGrade->floatingGrade = 70.5;
	pGrade->letter = 'C';

	displayGrade(*pGrade); // notice how we are changing pGrade but displaying newGrade?
	// 70.5 -- C -- 1

	printf("%p --- %p\n", &newGrade, pGrade);

	changeGrade(&newGrade);
	displayGrade(newGrade);
	return 0;
}