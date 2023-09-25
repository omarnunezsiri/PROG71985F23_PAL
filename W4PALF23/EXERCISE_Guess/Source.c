// PAL Week 4 - Write a C Program:
//					prompt the user to guess a pre-defined number
// 
// PROG71985-W23/F23
// PAL Session Attendees
// 
// revision history
// 1.0			2023-09-25		initial

#include <stdio.h>

#define SECRET_NUM 11
int main(void)
{
	int number;

	/* Add-on: indicate whether guess is lower or higher than the SECRET NUMBER */
	do
	{
		printf("Enter a number: ");
		scanf_s("%d", &number);

		if (number == SECRET_NUM)
		{
			printf("You guessed it!\n");
		}
		else if (number < SECRET_NUM)
		{
			printf("Try higher!\n");
		}
		else if (number > SECRET_NUM)
		{
			printf("Try lower!\n");
		}
	} while (number != SECRET_NUM);

	return 0;
}