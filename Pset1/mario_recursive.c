#include <stdio.h>

int get_pyramid_height(void);
void print_left_pyramid(int);



int main(void) {

    int height = get_pyramid_height();

    printf("\n");

    print_left_pyramid(height);

}





int get_pyramid_height() {
    int height;
    do {
        printf("Please enter a positive interger netween 1 and 8: ");
        scanf("%i", &height);
    } while (height > 8 || height < 1);
    return height;
}

void print_left_pyramid(int h) {
    if (h - 1 != 0) {
        print_left_pyramid(h - 1);
    }
    for (int i = 0; i < h;i++) {

        printf("#");

    }
    printf("\n");
}

