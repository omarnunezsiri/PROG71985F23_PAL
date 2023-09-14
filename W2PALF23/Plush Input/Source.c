// PAL Week 2 - Second Program:
//					scanf function demonstration
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-01-14		initial
// 1.1			2023-13-09		reworked (plush)

#define _CRT_SECURE_NO_WARNINGS // we will touch on this in the following week's sessions

#include <stdio.h>

int main(void)
{
	int plushes;

	printf("How many plushes do you have?\n");
	scanf("%d", &plushes); // ignore the green squiggle line under the statement for now.
	printf("So you have %d plush(s)!\n", plushes);

	return 0;
}