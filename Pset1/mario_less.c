#include <stdio.h>

//function declarations
int get_pyramid_height(void);
void print_pyramids(int);

int main(void) {

    int height = get_pyramid_height();

    printf("\n");

    print_pyramids(height);

}


//function definitions
void print_pyramids(int h) {
    for (int x = 0; x < h;x++) {

        for (int y = 0; y < h - x - 1; y++) {

            printf(" ");
        }
        //this prints the left pyramid
        for (int j = 0; j < x + 1; j++) {

            printf("#");
        }

        printf("  ");

        //this prints the right pyramid
        for (int a = h - x - 1; a < h;a++) {

            printf("#");

        }

        printf("\n");

    }
}


int get_pyramid_height() {
    int height;
    do {
        printf("Please enter a positive interger netween 1 and 8: ");
        scanf("%i", &height);
    } while (height > 8 || height < 1);
    return height;
}
