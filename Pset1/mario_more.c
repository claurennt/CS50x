#include <stdio.h>

int get_pyramid_height(void);
char print_left_pyramid(int h);



int main(void) {

    int height = get_pyramid_height();

    printf("\n");

    print_left_pyramid(int height);

}





int get_pyramid_height() {
    int height;
    do {
        printf("Please enter a positive interger netween 1 and 8: ");
        scanf("%i", &height);
    } while (height > 8 || height < 1);
    return height;
}

char print_left_pyramid(int h) {
    for (int i = 0; i < h;i++) {

        for (int y = 0; y < h - i - 1; y++) {

            printf(" ");
        }

        for (int j = 0; j < i + 1; j++) {

            printf("#");
        }
        printf("\n");
    }
}

