/*Una clarificazione su due cose incontrate mentre stavo studiando IAP
e risolvendo il problema 785B.c in CodeForces
*/

#include <stdio.h>

int main(){
    char Matrice2[3][4] = {"ciao", "Derp", "MEEH"};

    // stessa logica per il int;

    int ArrNumeri[3][3] = {1, 2, 3, 4, 5 ,6 ,7 ,8, 9};
 
    printf("%c\n", Matrice2[0][3]);  // dovrebbe restituire E 
    printf("%d\n", ArrNumeri[2][1]); // dovrebbe restituire 8 !!


/*il referimento originale a questa cosa nelle esercitazioni è qeusto*/

// int main() {

    /*la matrice fu divisa in due!! da (1 a 3) e da (4 a 6)*/
    int matrice[2][3] = {1,2,3,4,5,6};
    int* m = (int*) &(matrice[0][0]);
    printf("%d %d\n", m[0], matrice[0][0]);
    printf("%d %d\n", m[1], matrice[0][1]);
    printf("%d %d\n", m[2], matrice[0][2]);
    printf("%d %d\n", m[3], matrice[1][0]);
    printf("%d %d\n", m[4], matrice[1][1]);
    printf("%d %d\n", m[5], matrice[1][2]);
    return 0;
    }