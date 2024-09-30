#include <stdio.h>
#include <stdbool.h>

// Funzione ausiliaria per controllare se due array sono uguali
bool are_arrays_equal(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

bool is_sub_list_recursive(int *x, int *l, int size_x, int size_l) {
    if (size_x == 0) {
        return true;  // L'array vuoto è sempre una sotto-lista
    }
    if (size_l == 0) {
        return false;  // Se l'array principale è vuoto, x non può essere una sotto-lista
    }

    // Se l'elemento corrente degli array è uguale, procedi ricorsivamente
    if (*x == *l) {
        return is_sub_list_recursive(x + 1, l + 1, size_x - 1, size_l - 1);
    }

    // Se i due elementi non sono uguali, prova a cercare x nella sottolista successiva di l
    return is_sub_list_recursive(x, l + 1, size_x, size_l - 1);
}

bool is_sub_list(int *x, int *l, int size_x, int size_l) {
    return is_sub_list_recursive(x, l, size_x, size_l) || are_arrays_equal(x, l, size_x);
}

int main() {
    // Esempio di utilizzo
    int arr1[] = {1, 2, 3};
    int arr2[] = {0, 1, 10, 2, 3};
    int arr3[] = {4, 3, 2, 1, 0};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("Arr1 is a sub-list of Arr2: %s\n", is_sub_list(arr1, arr2, size1, size2) ? "true" : "false");
    printf("Arr1 is a sub-list of Arr3: %s\n", is_sub_list(arr1, arr3, size1, size3) ? "true" : "false");

    return 0;
}
