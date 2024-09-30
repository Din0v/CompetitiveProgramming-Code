#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura della tessera
typedef struct {
    int num1;
    int num2;
} Tessera;

// Funzione per inizializzare una tessera
Tessera creaTessera(int num1, int num2) {
    Tessera tessera;
    tessera.num1 = num1;
    tessera.num2 = num2;
    return tessera;
}

// Funzione per stampare una tessera
void stampaTessera(Tessera tessera) {
    printf("[%d|%d] ", tessera.num1, tessera.num2);
}

// Funzione per calcolare il punteggio di una disposizione di tessere
int calcolaPunteggio(Tessera *disposizione, int numTessere) {
    int punteggio = 0;
    for (int i = 0; i < numTessere; i++) {
        punteggio += disposizione[i].num1 + disposizione[i].num2;
    }
    return punteggio;
}

// Funzione per giocare al Domino Lineare
void giocaDominoLineare(Tessera *tessere, int numTessere) {
    Tessera *disposizione = (Tessera *)malloc(numTessere * sizeof(Tessera));
    int numDisposizione = 0;

    // Scelta della prima tessera
    disposizione[numDisposizione++] = tessere[0];

    // Iterazione per posizionare le tessere
    for (int i = 1; i < numTessere; i++) {
        int scelta;
        printf("Disposizione attuale: ");
        for (int j = 0; j < numDisposizione; j++) {
            stampaTessera(disposizione[j]);
        }
        printf("\n");

        // Scelta della posizione
        printf("Vuoi posizionare la tessera a sinistra (1) o a destra (2)? ");
        scanf("%d", &scelta);

        if (scelta == 1) {
            disposizione = realloc(disposizione, (numDisposizione + 1) * sizeof(Tessera));
            disposizione[numDisposizione++] = tessere[i];
        } else if (scelta == 2) {
            disposizione = realloc(disposizione, (numDisposizione + 1) * sizeof(Tessera));
            disposizione[numDisposizione++] = tessere[i];
        } else {
            printf("Scelta non valida. Riprova.\n");
            i--;
        }
    }

    // Calcolo e stampa del punteggio
    int punteggio = calcolaPunteggio(disposizione, numDisposizione);
    printf("Disposizione finale: ");
    for (int i = 0; i < numDisposizione; i++) {
        stampaTessera(disposizione[i]);
    }
    printf("\nPunteggio finale: %d\n", punteggio);

    // Liberare la memoria
    free(disposizione);
}

int main() {
    int numTessere = 10; // Modificare il numero di tessere a seconda delle esigenze
    Tessera tessere[] = {
        creaTessera(6, 6),
        creaTessera(6, 6),
        creaTessera(6, 6),
        creaTessera(3, 6),
        creaTessera(1, 6),
        creaTessera(2, 6),
        creaTessera(1, 4),
        creaTessera(3, 4),
        creaTessera(4, 4),
        creaTessera(4, 5)
    };

    giocaDominoLineare(tessere, numTessere);

    return 0;
}
