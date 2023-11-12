// PAL Week 10 - Examine a C Program - Reviewing pointers (pass by reference)
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial

#include <stdio.h>

int Add(int*, int*);

int main(void)
{
	int arr[] = {1,2,3,4,5};
	int x = 10;
	int y = 20;

	printf("arr --- %d\n", arr[0]);
	printf("x before Add: %d\n", x);
	printf("y before Add: %d\n", y);
	printf("address of x in main: %p\n", &x); // 0xAA
	printf("address of y in main: %p\n", &y); // 0xBB

	int result = Add(arr, &y);

	printf("result: %d\n", result);
	printf("arr --- %d\n", arr[0]);
	printf("x after Add: %d\n", x);
	printf("y after Add: %d\n", y);
	return 0;
}

// Pass by Value and Pass by Reference
int Add(int* x, int* y) // 0xAA and 0xBB
{
	//printf("address of x in add: %p\n", x);
	printf("address of y in add: %p\n", y);

	x[0] = 30;
	//*x = 30; // are we changing a copy or the x in main?
	*y = 600;
	return (x[0] + *y);
}