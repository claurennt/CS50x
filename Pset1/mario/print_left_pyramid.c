#include "print_left_pyramid.h"

#include <stdio.h>

void print_left_pyramid(int h)
{
    for (int i = 0; i < h; i++)
    {

        for (int y = 0; y < h - i - 1; y++)
        {

            printf(" ");
        }

        for (int j = 0; j < i + 1; j++)
        {

            printf("#");
        }
        printf("\n");
    }
}