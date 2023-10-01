// PAL Week 5 - Program 2:
//					implement integerInRange function
// 
// PROG71985-W23/F23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-04		initial
// 1.1			2023-09-28		reviewed

#include <stdio.h>
#include <stdbool.h>

#define LOWER_LIMIT 0
#define UPPER_LIMIT 65536 // 16-bit integer limits (2^16)

bool integerInRange(int);

int main(void)
{
	int num;
	bool inRange = false; // why assign it before the loop?
	printf("16-bit Encoder\n");

	do
	{
		printf("Please enter an integer in the 0-2^16 range: ");
		scanf_s("%d", &num); // review - what does _s indicate?

		inRange = integerInRange(num);
		if (inRange)
			printf("%d is in the 0-2^16 range!\n", num);
		else
			printf("%d is not in the 0-2^16 range.\n", num);

	} while (!inRange);

	return 0;
}

bool integerInRange(int integer)
{
	if (integer >= LOWER_LIMIT && integer <= UPPER_LIMIT)
		return true;
	else
		return false;
}