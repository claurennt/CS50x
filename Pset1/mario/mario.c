
#include "get_pyramid_height.h"
#include "print_left_pyramid.h"
#include "print_left_right_pyramids.h"
#include "print_pyramid_recursive.h"

#include <stdio.h>

int main()
{

    int height = get_pyramid_height();

    printf("\n");

    print_left_pyramid(height);

    print_pyramid_recursive(height);

    print_left_right_pyramids(height);
}
