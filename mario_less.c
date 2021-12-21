#include <stdio.h>

int get_pyramid_height(void);
char fff(int);

int main(void) {

    int h = get_pyramid_height();

    fff(h);




    // for (int i = 0; i < h;i++) {
    //    
    //     pr for (int k = 1; k < h;k++) {
    //         printf(".");

    //     }intf("#");
    //     printf("\n");
    //     h--;
    //     for (int k = 0; k < h - 1;k++) {
    //         printf(".");

    //     }
    //     for (int f = 0; f < h - 1;f++) {
    //         printf("#");

    //     }

    //     printf("\n");
    //     h--;
    //     for (int k = 0; k < h - 1;k++) {
    //         printf(".");

    //     }
    //     for (int f = 0; f < h - 1;f++) {
    //         printf("#");

    //     }
    //     printf("\n");
    // }



}

char fff(int h) {
    if (h < 1) {

        return 0;
    }

    for (int x = 0; x < h;x++) {


        printf("  ");
        printf("#");

        for (int j = h - x; j < h;j++) {

            printf("#");

        }

        printf("\n");
    }






}



// for (int i = 0; i < h;i++) {


//     for (int y = 1;y < h; y++) {

//         printf(".");
//     }
//     printf("#");

//     printf(".");
//     printf("#");

//     printf("\n");


// }




int get_pyramid_height() {
    int height;
    do {
        printf("Please enter a positive interger netween 1 and 8: ");
        scanf("%i", &height);
    } while (height > 8 || height < 1);
    return height;
}