// library for getting input and printing an output
#include <stdio.h>

int main(void)
{

	//declare a datatype char which is a array of 20 chars max
	char name[20];

	printf("What's your name? ");

	//get input from user
	fgets(name, 20, stdin);
	printf("Hi %s", name);
	return (0);
}