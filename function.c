#include <stdio.h>


// Prototype of the function, function declaration to tell the compiler that there will be a unction called get_max later on
int get_max(int, int);
void print_quote(int);



// Main function where the program starts executing
int main(void) {

    // initialize a variable of type int 
    int number;

    // store the value of the max of the two numbers into the previouly declared variable
    number = get_max(3, 5);

    printf("This is the result %i\n", number);
    print_quote(number);

}






// Function definitions

void print_quote(int num) {
    for (int i = 0; i < num; i++) {
        printf("C is really cool!\n");
    }
}


int get_max(int num1, int num2) {
    int result;
    num1 > num2 ? (result = num1) : (result = num2);
    return result;
};

