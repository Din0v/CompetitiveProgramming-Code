#include <stdio.h>
#include <stdbool.h>


int isDominant( int *M, int n_rows, int n_cols ) {
    int r, c; // Dichiarazione delle variabili per gli indici di riga e colonna

    for (c=0; c<n_cols; c++) { // Ciclo for per iterare sulle colonne
        for (r=1; r<n_rows; r++) { // Ciclo for per iterare sulle righe, a partire dalla seconda riga (r=1)
            if ( M[(r-1)*n_cols + c] <= M[r*n_cols + c] ) // Confronto tra l'elemento corrente e l'elemento precedente nella stessa colonna
                return 0; // Se il confronto non è soddisfatto, la matrice non è dominante e viene restituito 0
        }
    }
    return 1; // Se il controllo viene superato per tutti gli elementi della matrice, la matrice è dominante e viene restituito 1
}


// soluzione martina

int dominante(int *a, int rows, int cols) {
    int c, r;
    
    for (c = 0; c < cols; c++) {
        for (r = 0; r < rows - 1; r++) {
            if (a[r * cols + c] <= a[(r + 1) * cols + c]) {
                return 0;
            }
        }
    }
    
    return 1;
}


int main() {

int M[3][3] = { {3,4,5},
                {2,3,3},
                {6,7,8} };

int N[2][3] = { {3,4,5},
                {4,5,6}};

printf("Martina: %d\n", dominante( &(M[0][0]), 3, 3) );
printf("Martina: %d\n", dominante( &(N[0][0]), 2, 3) );

printf("Prof: %d\n", isDominant( &(M[0][0]),3, 3) );
printf("Prof: %d\n", isDominant( &(N[0][0]),2, 3) );

    return 0;
}
