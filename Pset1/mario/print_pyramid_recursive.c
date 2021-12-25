#include "print_pyramid_recursive.h"
#include "print_left_pyramid.h"

#include <stdio.h>

void print_pyramid_recursive(int h) {
    if ((h - 1) != 0) {
        print_left_pyramid(h);
    }
    for (int i = 0; i < h;i++) {

        printf("#");

    }
    printf("\n");
}