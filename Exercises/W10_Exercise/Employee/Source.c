#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"

#define FILENAME "Employee.txt"

int main(void)
{
	EMPLOYEE e;

	if (!LoadEmployee(FILENAME, &e))
		exit(EXIT_FAILURE);
	
	printf("%s --- %s --- %s --- %d --- %lf\n", getEmployID(e), getEmployFirstName(e), getEmployLastName(e), getEmployEAccess(e), getEmployWages(e));
	
	SetEmployeeFirstName(&e, "Steve");

	printf("%s --- %s --- %s --- %d --- %lf\n", getEmployID(e), getEmployFirstName(e), getEmployLastName(e), getEmployEAccess(e), getEmployWages(e));
	return 0;
}