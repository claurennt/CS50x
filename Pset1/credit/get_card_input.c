#include "get_card_input.h"

#include <stdio.h>

long get_card_input(void) {
    long credit_card;

    printf("Paste your Credit Card Number here: ");
    scanf("%li", &credit_card);


    return credit_card;
}