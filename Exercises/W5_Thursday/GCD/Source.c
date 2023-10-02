// PAL Week 5 - Write a C Program:
//					GCD
// 
// PROG71985-F23
// PAL Attendees
// 
// revision history
// 1.0			2023-10-02		initial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int GCD(int num1, int num2) 
{
	int factor = 0;
	for (int i = 1; i<=num1 || i<=num2 ; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			factor = i;
		}
	}

	return factor;
}

int main(void)
{
	int first;
	int second;

	printf("Enter two numbers (separated by a space): ");
	scanf("%d %d", &first, &second);

	printf("GCD of %d and %d is: %d", first, second, GCD(first, second));
	return 0;
}