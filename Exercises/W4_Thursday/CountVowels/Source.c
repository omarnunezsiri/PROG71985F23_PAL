// PAL Week 4 - Write a C Program:
//					count the vowels in a string
// 
// PROG71985-F23
// PAL Attendees
// 
// revision history
// 1.0			2023-09-28		initial

#include <stdio.h>
#define SIZE 30
//#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	char string[SIZE] = { "epizootiologies" };
	int i = 0;
	int counter = 0;

	while (string[i] != '\0') // C strings are null-terminated
	{
		// compare the current character to each vowel
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'o' || string[i] == 'i' || string[i] == 'u')
			counter++;

		printf("The Character at %d Index Position = %c \n", i, string[i]);
		i++;
	}

	printf("%s has %d vowels\n", string, counter);

	return 0;
}
