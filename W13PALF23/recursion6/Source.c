// PAL Week 13 - Examine a C Program - Recursion example 6
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-04-02		initial

#include <stdio.h>

int factorial(int);
int factorialWithLoop(int); // new for PROG71985-F23

int main(void)
{
	printf("Factorial of 5: %d\n", factorial(9));
	printf("Factorial of 5 using loop: %d\n", factorialWithLoop(9));
	return 0;
}

int factorial(int n)
{
	if (n == 0) // base case
		return 1;
	else
	{
		/* recursive case */
		return n * factorial(n - 1);
	}
}

// identify the differences
int factorialWithLoop(int n)
{
	int fact = 1;

	while (n != 0)
	{
		fact *= n;
		n--;
	}

	return fact;
}