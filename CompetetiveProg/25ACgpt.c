// #include <stdio.h>

// int find_different_element(int a[], int n) {
//     // Assume all elements are even
//     int even = 1;

//     for (int i = 0; i < n; i++) {
//         // If an odd element is found, set even to 0
//         if (a[i] % 2 == 1) {
//             even = 0;
//             break;
//         }
//     }

//     // If all elements are even, return 0
//     if (even) {
//         return 0;
//     }

//     // Otherwise, search for an odd element that is different from the rest
//     for (int i = 0; i < n; i++) {
//         if (a[i] % 2 == 1) {
//             // Check if this is the only odd element
//             int different = 1;
//             for (int j = 0; j < n; j++) {
//                 if (i != j && a[j] % 2 == 1) {
//                     different = 0;
//                     break;
//                 }
//             }
//             if (different) {
//                 return a[i];
//             }
//         }
//     }

//     // If no such element is found, return 0
//     return 0;
// }

// int main() {
//     int a[] = {1, 2, 1, 1};
//     int n = sizeof(a) / sizeof(a[0]);
//     int different = find_different_element(a, n);
//     printf("%d\n", different);
//     return 0;
// }

// #include <stdio.h>

// void print_pattern(int n) {
//     if (n == 0) {
//         return;
//     }
//     printf("%d ", n);
//     print_pattern(n - 1);
//     printf("%d ", n);
// }

// int main() {
//     int n = 5;
//     print_pattern(n);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #include <gif_lib.h>

// #define WIDTH 640
// #define HEIGHT 480

// void draw_recursive_painting(GifFileType *gif, int x, int y, int size) {
//     // Base case
//     if (size <= 2) {
//         return;
//     }

//     // Draw a filled rectangle
//     int color = rand() % 256;
//     GifColorType c;
//     c.Red = c.Green = c.Blue = color;
//     SavedImage *frame = &gif->SavedImages[gif->ImageCount - 1];
//     GifByteType *image = frame->RasterBits;
//     for (int i = x; i < x + size; i++) {
//         for (int j = y; j < y + size; j++) {
//             image[j * WIDTH + i] = color;
//         }
//     }

//     // Recursively draw four smaller paintings in the corners
//     int half = size / 2;
//     draw_recursive_painting(gif, x, y, half);
//     draw_recursive_painting(gif, x + half, y, half);
//     draw_recursive_painting(gif, x, y + half, half);
//     draw_recursive_painting(gif, x + half, y + half, half);
// }

// int main() {
//     // Initialize the GIF file
//     GifFileType *gif = EGifOpenFileName("painting.gif", false);
//     EGifSetGifVersion(gif, true);
//     EGifPutScreenDesc(gif, WIDTH, HEIGHT, 256, 0, NULL);
//     EGifPutImageDesc(gif, 0, 0, WIDTH, HEIGHT, false, NULL);

//     // Draw the recursive painting
//     draw_recursive_painting(gif, 0, 0, WIDTH);

//     // Close the GIF file
//     EGifCloseFile(gif);

//     return 0;
// }

#include <stdio.h>

#define SIZE 8

int main() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if ((i + j) % 2 == 0) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}

