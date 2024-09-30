/*StairCase function using #*/

#include <stdio.h>

void printStaircase(int n) {
    // outer loops controls the hight of the stair 
    for (int i = 1; i <= n; i++) {
        // Print spaces
         for (int j = 1; j <= n-i; j++) {
            printf("*");
        }

        // Print '#' for the steps
         for (int k = 1; k <= i; k++) {
            printf("#");
        }

        // Move to the next line after printing each step
        printf("\n");
    }
}

int main() {
    int height;

    // Get the height of the staircase from the user
    printf("Enter the height of the staircase: ");
    scanf("%d", &height);

    // Call the function to print the staircase
    printStaircase(height);

    return 0;
}
