#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 == score2)
    {
        printf("Tie!");
        return 0;
    }

    score1 > score2 ? printf("Player 1 wins!\n") : printf("Player 2 wins!\n");
    return 0;
}

int compute_score(string word)
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        //do some calculations only if the char is alphabetical
        if (isalpha(word[i]))
        {
            // if the char is lower case
            if (islower(word[i]))
            {
                //calculate the position by subtracting 'a' from the char, both convert to their ASCII numerical value
                int lower_case_letter_position = (word[i]) - 'a';

                //add to the score the point element of the POINT array that is found at the position of the lowercase letter..their positions match
                score += POINTS[lower_case_letter_position];
            }
            if (isupper(word[i]))
            {
                //calculate the position by subtracting 'A' from the char, both convert to their ASCII numerical value
                int upper_case_letter_position = (word[i]) - 'A';

                //add to the score the point element of the POINT array that is found at the position of the uppercase letter..their positions match
                score += POINTS[upper_case_letter_position];
            }
        }
    }

    return score;
}
