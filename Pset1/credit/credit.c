#include "get_card_input.h"
#include <stdio.h>

int main(void) {
    long credit_card = get_card_input();

    int odd_numbers[7];
    int even_numbers[8];
    int multiplied_digits = 0;
    int summed_digits = 0;


    //cut off last digit from input
    credit_card /= 10;
    for (int i = 0; i < 8; i++) {

        //get odd digits, i.d. last and multiply it by 2
        odd_numbers[i] = credit_card % 10 * 2;

        //get even digits, second last
        even_numbers[i] = credit_card / 10 % 10;


        multiplied_digits += odd_numbers[i];
        summed_digits += even_numbers[i];


        //cut off unncesessary digit
        credit_card = credit_card / 100;
    }



    int last_digit = credit_card % 10;

    int first_digit;
    first_digit = credit_card;

    while (first_digit >= 10)
        first_digit = first_digit / 10;

    //printf("%i", first_digit);
    return (0);
}