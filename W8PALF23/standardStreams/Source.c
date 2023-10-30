// PAL Week 9 - Examine a C Program - using all 3 common standard streams
// 
// PROG71985-W23/F23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-05		initial

#include <stdio.h>

#define MAXSTR 50

int main(void)
{
	char input[MAXSTR];
	fprintf(stdout, "Enter a string: "); // can we simplify this line?

	fgets(input, MAXSTR, stdin); // scanf or fgets?

	fputs("Writing to stream...(stdout)\n", stdout);
	int fputsReturn = fputs(input, stdout);

	if (fputs == EOF) // what are we checking here?
	{
		fputs("ERROR. Exiting...\n", stderr);
	}

	return 0;
}