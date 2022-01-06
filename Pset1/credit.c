
#include <stdio.h>
#include <cs50.h>

int get_card_length(long);

int main(void)
{

    // prompt user for credit card number usign CS50 custom get_long function(automatically rejects non digits)
    long credit_card = get_long("Number: ");

    // initialize variables
    int digits_to_multiply[8];
    int multiplied_digits[8];
    int plain_digits[8];
    int sum_plain_digits = 0;
    int sum_multiplied_digits = 0;

    //calculates the length of the input
    int credit_card_length = get_card_length(credit_card);

    // for loop to iterate over the digits of the credit card and perform calculations
    for (int i = 0; i < 8; i++)
    {

        //get second to last digit
        digits_to_multiply[i] = credit_card / 10 % 10;

        // multiply second to last digit by 2
        multiplied_digits[i] = digits_to_multiply[i] * 2;

        // if the multiplied digit is greater than 9, add the digits together
        if (multiplied_digits[i] > 9)
        {
            multiplied_digits[i] = multiplied_digits[i] % 10 + multiplied_digits[i] / 10;
        }

        //get last digit
        plain_digits[i] = credit_card % 10;

        //sum multiplied digits and plain digits
        sum_multiplied_digits += multiplied_digits[i];
        sum_plain_digits += plain_digits[i];

        //cut off 2 digits from the end of the credit card input
        credit_card /= 100;
    }

    // second digit of the sum should be 0 to not fail
    if ((sum_plain_digits + sum_multiplied_digits) % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (credit_card_length == 15 && plain_digits[7] == 3 && (digits_to_multiply[6] == 4 || digits_to_multiply[6] == 7))
    {
        printf("AMEX\n");
    }
    else if ((credit_card_length == 16) && (digits_to_multiply[7] == 5) && (plain_digits[7] == 1 || plain_digits[7] == 2 || plain_digits[7] == 3 || plain_digits[7] == 4 || plain_digits[7] == 5))
    {
        printf("MASTERCARD\n");
    }
    else if (((credit_card_length == 13) && (plain_digits[6] == 4)) || ((credit_card_length == 16) && (digits_to_multiply[7] == 4)))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return (0);
}

int get_card_length(long card)
{
    int number_of_digits = 0;
    char last;

    //calculate number of digits in credit card number
    while (card > 0)
    {
        card /= 10;
        last = card % 10;
        ++number_of_digits;
    }
    return number_of_digits;
}
