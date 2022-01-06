#include <stdio.h>

int main(void)
{

    for (int i = 0; i < 3; i++)
    {
        printf("This is a for loop\n");
    }

    int y = 1;
    while (y < 4)
    {
        printf("This is a while loop\n");
        y++;
    }

    int x;
    //prompt the user again and again if they enter a nr less thatn 1
    do
    {
        printf("Please enter a positive interger: ");
        scanf("%i", &x);
    } while (x < 1);

    printf("thanks for entering the following positive number: %i!\n", x);

    // nested loops

    for (int v = 0; v <= 7; v++)
    {

        for (int l = 0; l <= 7; l++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}