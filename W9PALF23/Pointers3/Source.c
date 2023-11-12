// PAL Week 10 - Examine a C Program - Reviewing pointers using floats
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial


#include <stdio.h>

int main(void)
{
	// Two heights: one in centimeters, and the same value in inches
	float heightInCm = 2.50f;
	float heightInInch = 0.984f;

	float* pHeight = &heightInCm; // pointer to a float
	printf("heightInCm: %f -- *pHeight: %f\n", heightInCm, *pHeight); // 2.5 -- 2.5
	printf("&heightInCm: %p -- pHeight: %p\n", &heightInCm, pHeight); // 0xAA -- 0xAA

	*pHeight = 3.50f; // dereferencing a pointer
	printf("heightInCm: %f -- *pHeight: %f\n", heightInCm, *pHeight); // 3.5 -- 3.5

	// Updating height in inches too!
	pHeight = &heightInInch;
	*pHeight = 1.37795f;
	printf("heightInInch: %f -- *pHeight: %f\n", heightInInch, *pHeight); // 1.37795 -- 1.37795
	printf("&heightInInch: %p -- pHeight: %p\n", &heightInInch, pHeight); // 0xBB -- 0xBB

	return 0;
}