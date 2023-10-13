// PAL Week 6 -  Write a C Program:
//					implements Keyboard ADT, creates an array of keyboards and displays it
// 
// PROG71985-W23/F23
// PAL Atteendees
// 
// revision history
// 1.0			2023-10-12		initial

#include <stdio.h>
#include <stdbool.h>

#define MAX_STRING_SIZE 20 /* Max string size to be used by brand and model */

// Brand
// Model
// Percentage (70, 100, etc.)
// RGB (flag T/F)
typedef struct keyboard {
	char brand[MAX_STRING_SIZE];
	char model[MAX_STRING_SIZE];
	int percentage;
	bool RGB;       
}KEYBOARD;

void printTheBoard(KEYBOARD);

int main(void)
{
	/* Three hardcoded keyboards *can be replaced with user input* */
	KEYBOARD keyboard1 = { "ASUS", "AZOTH", 75, true };
	KEYBOARD keyboard2 = { "STEELSERIES", "APEX PRO", 70, false };
	KEYBOARD keyboard3 = { "OMARS BRAND", "The Keyboard", 60, true };

	KEYBOARD keyboardArray[] = { keyboard1, keyboard2, keyboard3 }; // hardcoded array of structs
	for (int i = 0; i < (sizeof(keyboardArray) / sizeof(keyboardArray[0])); i++) // sizeof(array) / sizeof(array[0]) provides the number of elements
	{
		printTheBoard(keyboardArray[i]);
	}

	return 0;

}

void printTheBoard(KEYBOARD keyboard) 
{
	printf("%s %s %d %d\n", keyboard.brand, keyboard.model, keyboard.percentage, keyboard.RGB);
}