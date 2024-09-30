#include <stdio.h>

 int main() {
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