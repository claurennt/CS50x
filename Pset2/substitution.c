#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

char LETTERS[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void check_key_validity(string key, int length);
void encode_text(string input, string key);

int main(int argc, string argv[])
{
    // exit the program if the user does not type an argument in the comamnd line or if the argument's length is not 26
    if (argc != 2 || strlen(argv[1]) != 26)
    {
        printf("Usage: ./substitution key\n");
        exit(1);
    }
    string key = argv[1];
    int key_length = strlen(key);

    // check if command line arguments and key respect the specifications
    check_key_validity(key, key_length);
    if (key)
    {

        string user_input = get_string("plaintext: ");

        // prints encrypted text
        printf("ciphertext: ");
        encode_text(user_input, key);
        printf("\n");
    }

    return 0;
}

//function to check the validity of the key provided
void check_key_validity(string key, int length)
{

    for (int i = 0; i < length; i++)
    {
        // exit the program if the key contains a non-alphabetical number
        if (!isalpha(key[i]))
        {
            printf("The key can only contain alphabetical characters.\n");
            exit(1);
        }
        // exit the program if key containes double characters
        for (int j = 1; j < length; j++)
        {
            for (int k = i + 1; k < length; k++)
            {
                if (key[i] == key[k])
                {
                    printf("You are not allowed to use double characters.\n");
                    exit(1);
                }
            }
        }
    }
    return;
}

// function to encode the text according to the key
void encode_text(string input, string key)
{
    for (int i = 0; input[i] != '\0' && i < strlen(input); i++)
    {

        //if the char is a space, a digit or punctuation, leave it as it is
        isspace(input[i]) && printf(" ");

        ispunct(input[i]) && printf("%c", input[i]);

        isdigit(input[i]) && printf("%c", input[i]);

        // for each of the character print the char of the key found at the position matching the letter's position in the alphabet
        for (int k = 0; k < strlen(key); k++)
        {
            if (tolower(input[i]) == LETTERS[k])
            {
                // if the char is uppercase, print it uppercase  // if the char is lowercase, print it lowercase
                isupper(input[i]) ? printf("%c", toupper(key[k])) : printf("%c", tolower(key[k]));
            }
        }
    }
}
