#include "get_pyramid_height.h"

#include <stdio.h>

int get_pyramid_height(void)
{
    int height;
    do
    {
        printf("Please enter a positive interger netween 1 and 8: ");
        scanf("%i", &height);
    } while (height > 8 || height < 1);
    return height;
}