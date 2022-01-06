#include "print_left_right_pyramids.h"
#include <stdio.h>

void print_left_right_pyramids(int h)
{
    for (int x = 0; x < h; x++)
    {

        for (int y = 0; y < h - x - 1; y++)
        {

            printf(" ");
        }
        //this prints the left pyramid
        for (int j = 0; j < x + 1; j++)
        {

            printf("#");
        }

        printf("  ");

        //this prints the right pyramid
        for (int a = h - x - 1; a < h; a++)
        {

            printf("#");
        }

        printf("\n");
    }
}