#include "String.h"
//#include <stdio.h>

int main(void) {
	printf("Enter your first name: ");
	string firstName = getString();
	printf("Enter your last name: ");
	string lastName = getString();
	printf("first name:\t%s\nlast name:\t%s\n", firstName, lastName);
	return 0;
}
