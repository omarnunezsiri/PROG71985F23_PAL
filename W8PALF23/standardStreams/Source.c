// PAL Week 9 - Examine a C Program - using all 3 common standard streams
// 
// PROG71985-W23/F23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-05		initial

#include <stdio.h>
#include <stdbool.h>
#define MAXSTR 50

int main(void)
{
	char input[MAXSTR];
	puts("Enter a string: "); // adds a newline to the end
	//printf("Enter a string: "); // does not add a new line to the end
	//fprintf(stdout, "Enter a string: "); // can we simplify this line?

	fgets(input, MAXSTR, stdin); // scanf or fgets? It depends!

	fputs("Writing to stream...(stdout)\n", stdout); // can we simplify this line? same idea as before
	int fputsReturn = fputs(input, stdout);

	if (fputsReturn == EOF) // what are we checking here?
	{
		fputs("ERROR. Exiting...\n", stderr);
	}

	return 0;
}