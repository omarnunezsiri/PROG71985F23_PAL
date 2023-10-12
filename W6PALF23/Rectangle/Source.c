// PAL Week 6 - Program 2:
//					implements rectangle ADT and finds its area
// 
// PROG71985-W23/F23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-11		initial
// 1.1			2023-10-10		reviewed

#include <stdio.h>
#define MAX_ORIENTATION 25

typedef struct Rectangle {
	float length;
	float width;
}RECTANGLE;

float getRectangleArea(RECTANGLE);
int main(void)
{
	RECTANGLE rectangle1 = { 2.5, 3.7 };
	RECTANGLE rectangle2 = { 4.5, 7.5 };

	printf("Area of rectangle1: %f\n", getRectangleArea(rectangle1));
	printf("Area of rectangle2: %f\n", getRectangleArea(rectangle2));
	return 0;
}

float getRectangleArea(RECTANGLE rectangle)
{
	return (rectangle.length * rectangle.width);
}