#include <stdio.h>

int contaOccorrenze(int arr1[], int n1, int arr2[], int n2, int index) {
    int i, trovato = 1;
    /* Caso base: se l'indice di arr2 supera la lunghezza dell'array, termina la ricorsione*/
    if (index > n2 - n1) {
        return 0;
    }

    /* Verifica se l'array arr1 appare in arr2 a partire dall'indice corrente
    */
   ;
    for (i = 0; i < n1; i++) {
        if (arr1[i] != arr2[index + i]) {
            trovato = 0;
            break;
        }
    }

    /* Se arr1 è stato trovato, incrementa il contatore e passa all'indice successivo
    */
    if (trovato) {
        return 1 + contaOccorrenze(arr1, n1, arr2, n2, index + n1);
    } else {
        /* Se arr1 non è stato trovato, passa all'indice successivo*/
        return contaOccorrenze(arr1, n1, arr2, n2, index + 1);
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {1, 2, 3, 4, 1, 2, 3, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int risultato = contaOccorrenze(arr1, n1, arr2, n2, 0);

    printf("Il numero di occorrenze di arr1 in arr2 senza sovrapposizioni è: %d\n", risultato);

    return 0;
}




