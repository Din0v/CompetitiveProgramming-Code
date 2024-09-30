#include <stdio.h>

int main(){
    int matrice[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // flattened array!!
    int* m = (int*) &(matrice[0][0]);
    /*punta a se stessa ? oppure come funziona ?*/
    printf(" %d  %d \n", m[0], matrice[0][0]); /*la prima riga si referisce alla riga*/
    printf(" %d  %d \n", m[1], matrice[0][1]); /*menr*/
    printf(" %d  %d \n", m[2], matrice[0][2]);

    printf(" %d  %d \n", m[3], matrice[1][0]);
    printf(" %d  %d \n", m[4], matrice[1][1]);
    printf(" %d  %d \n", m[5], matrice[1][2]);

    printf(" %d  %d \n", m[6], matrice[2][0]);
    printf(" %d  %d \n", m[7], matrice[2][1]);
    printf(" %d  %d \n", m[8], matrice[2][2]);
}