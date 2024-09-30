#include <stdio.h>

int count_array(int *a, int a_size, int *b, int b_size) {
    if (b_size < a_size) {
        // casobase: array b terminato o troppo corto per contenere a
        return 0;
    } else {
        int count = 0;
        for (int i = 0; i <= b_size - a_size; i++) {
            // confronta l'elemento corrente di a con quello di b
            int match = 1;
            for (int j = 0; j < a_size && match; j++) {
                if (a[j] != b[i + j]) {
                    match = 0;
                }
            }
            if (match) {
                // se c'è match, incrementa il conteggio e chiama ricorsivamente la funzione
                // con b ridotto della posizione corrente
                count += 1 + count_array(a, a_size, b + i + 1, b_size - i - 1);
            }
        }
        return count;
    }
}

int main() {
    int v1[] = {1, 2};
    int v2[] = {1, 2, 1, 2};
    printf("%d \n", count_array(v1, 2, v2, 4) );
    return 0;
}
