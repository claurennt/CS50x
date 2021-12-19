#include <stdio.h>
#include <string.h>


int main(void) {
	//initialize char
	char input;

	printf("Are you ok?");

	/*reads formatted data from stdin (i.e, the standard input stream, which is usually the keyboard,
	 and then writes the results into the arguments given*/
	scanf("%c", &input);


	//if condition and comparison
	if (input == 'Y' || input == 'y') {
		printf(" :) \n");
	}
	else if (input == 'N' || input == 'n') {
		printf(" :(\n");
	}
	return (0);
}





// ################## SOLUTION WITH FGETS AND STRCMP
// int main(void) {
// 	//initialize array of char with length 1
// 	char c[1];

// 	printf("Are you ok?");
// 	//first arg is the pointer to an array of chars
// 	/*second arg is the max nr of chars to be read
// 	including the final null char '\0' that terminates the strings */
// 	//third arg is in our case standard input which is the keyboard
// 	fgets(c, 2, stdin);


// 	//cmpare
// 	if (strcmp(c, "y") == 0 || strcmp(c, "Y") == 0) {
// 		printf(" :) \n");
// 	}
// 	else if (strcmp(c, "n") == 0 || strcmp(c, "N") == 0) {
// 		printf(" :(\n");
// 	}
// 	return (0);
// }