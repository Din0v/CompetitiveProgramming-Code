#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool anagram(char const* L, char const* R) {
    // Get the lengths of the input strings
    int len_L = strlen(L);
    int len_R = strlen(R);

    // If the lengths are different, the strings cannot be anagrams
    if (len_L != len_R)
        return false;

    // Allocate memory for arrays to store character occurrences
    int* occ_L = (int*)malloc(256 * sizeof(int));
    int* occ_R = (int*)malloc(256 * sizeof(int));

    // Initialize arrays with zeros
    for (int i = 0; i != len_L; ++i)
        occ_L[i] = occ_R[i] = 0;

    // Count occurrences of each character in both strings
    for (int i = 0; i != len_L; ++i) {
        occ_L[L[i]] += 1;
        occ_R[R[i]] += 1;
    }

    // Check if the character counts are the same for both strings
    int is_anagram = true;
    for (int i = 0; i != 256; ++i) {
        if (occ_L[i] != occ_R[i]) {
            is_anagram = false;
            break;
        }
    }

    // Free the allocated memory
    free(occ_L);
    free(occ_R);

    // Return whether the strings are anagrams or not
    return is_anagram;
}
