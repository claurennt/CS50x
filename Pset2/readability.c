#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string t);
int count_sentences(string text);

int main(void)
{
    // gets text from user
    string text = get_string("Text: ");

    // gets number of letters
    int letters = count_letters(text);

    // gets number of words
    int words = count_words(text);

    // gets number of sentences
    int sentences = count_sentences(text);

    // calculates average letter per 100 words
    float avg_letters = (float)letters / (float)words * 100;

    // calculates average sentences per 100 words
    float avg_sentences = (float)sentences / (float)words * 100;

    //// calculates Coleman-Liau index
    float index = 0.0588 * avg_letters - 0.296 * avg_sentences - 15.8;
    int grade = round(index); //rounds index to nearest integer

    //creates conditions for final output
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade >= 1 && grade < 16)
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string text)
{
    int letter_count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i])) //checks for alphabetic characters
        {
            letter_count++; //counts number of alphabetic characters,i.e. letters
        }
    }
    return letter_count;
}

int count_words(string text)
{
    int word_count = 0;
    for (int j = 0; j < strlen(text); j++)
    {

        /* loop iterates checking letter by letter as long as letter is not space, last array character */
        while ((text[j] != '\0' && text[j] != ' '))
        {
            j++;
        }
        //counts words, which is everything separated by space
        word_count++;
    }
    return word_count;
}

int count_sentences(string text)
{
    int sentence_count = 0;
    for (int n = 0; n < strlen(text); n++)
    {
        //loop iterates checking letter by letter, if letter is not a dot, or ? or ! and ? followed by "
        while ((text[n] != '.' && text[n] != '?' && text[n] != '!') || (text[n] == '?' && text[n + 1] == '"'))
        {
            n++; //dot, ?, ! and ?" define a sentence
        }
        sentence_count++;
    }
    return sentence_count;
}
