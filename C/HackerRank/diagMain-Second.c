#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate the sum of the main diagonal elements
    for (int i = 0; i < arr_rows; i++) {
        primaryDiagonalSum += arr[i][i];
    }

    // Calculate the sum of the secondary diagonal elements
    for (int i = 0; i < arr_rows; i++) {
        secondaryDiagonalSum += arr[i][arr_columns - 1 - i];
    }

    // Return the absolute difference between the two diagonal sums
    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}

int main() {
    // Example usage
    int rows = 3;
    int columns = 3;

    // Allocate memory for a 2D array
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(columns * sizeof(int));
    }

    // Initialize the matrix
    int counter = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = counter++;
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Call the diagonalDifference function
    int result = diagonalDifference(rows, columns, matrix);

    // Print the result
    printf("\nAbsolute Diagonal Difference: %d\n", result);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
