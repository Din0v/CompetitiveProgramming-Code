#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int sumA = 0, sumB = 0, i; 
    for (i = 0; i < a_count; i++) {
        if (a[i] > b[i]) {
            sumA = sumA + 1;
        } else if (a[i] < b[i]) {
            sumB = sumB + 1;
        }
    }

    *result_count = 2;
    int *res = (int*)malloc(*result_count * sizeof(int));
    res[0] = sumA;
    res[1] = sumB;

    return res;
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** a_temp = split_string(rtrim(readline()));
    int* a = malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++) {
        int a_item = parse_int(*(a_temp + i));
        *(a + i) = a_item;
    }

    char** b_temp = split_string(rtrim(readline()));
    int* b = malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++) {
        int b_item = parse_int(*(b_temp + i));
        *(b + i) = b_item;
    }

    int result_count;
    int* result = compareTriplets(3, a, 3, b, &result_count);

    for (int i = 0; i < result_count; i++) {
        fprintf(fptr, "%d", *(result + i));

        if (i != result_count - 1) {
            fprintf(fptr, " ");
        }
    }

    fprintf(fptr, "\n");

    // Free allocated memory
    free(a);
    free(b);
    free(result);

    fclose(fptr);

    return 0;
}

// The rest of your functions remain unchanged
