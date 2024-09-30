#include <stdio.h>

int smallest(int array[], int length) { // zuchherino sintattico anziche usare il puntatore !
    int smallest_even = -1;  // Valore di default se non ci sono numeri pari

    for (int i = 0; i < length; i++) {
          
             // Verifica se il numero è pari e
            if (array[i] % 2 == 0 && (smallest_even == -1 || array[i] < smallest_even)) { // dato che la condizione la matrice è sempre maggiore di 1 usiamo questa informazione a nostro vantaggio confrontando l'elemento con indice i e il numero più piccolo ricavato fin'ora
              
                smallest_even = array[i];  // Aggiorna il valore se è il più piccolo trovato finora
            }
        } 
    return smallest_even;
}

int main() {
    int array[] = {3, 7, 2, 9, 4, 6, 1};
    int length = sizeof(array) / sizeof(array[0]); // serve solo se non si sa la lunghezza del array alla compilazione 

    int result = smallest(array, length);
    printf("Il numero pari più piccolo è: %d\n", result);

    return 0;
}

