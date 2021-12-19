#include <stdio.h>
#include <string.h>

int main(void) {
	//initialize array of char with length 1
	char c[1];

	printf("Are you ok?");
	//first arg is the pointer to an array of chars
	/*second arg is the max nr of chars to be read
	including the final null char '\0' that terminates the strings */
	//third arg is in our case standard input which is the keyboard
	fgets(c, 2, stdin);


		if (strcmp(c, "y")==0) {
			printf("Yes! \n");
		}
		else if (strcmp(c, "n") == 0) {
			printf("No :( \n");
			}
		return(0);
}
