/*scrivere una funzione che prende in input m ed n 
e restituisce in output il numero di passagi (unici)
partendo dal quandrante superiore a sinistra fino a che arrivasse 
al quadrante inferiore a destra,
puoi mouverti solo un passo alla volta!*/

#include <stdio.h>

int grid(int n, int m){
    if(n==1 || m==1)
        return 1; 
    else 
        return grid(n-1, m) + grid(n, m-1);
}

int main(){
    int n, m; // dimensione della matrice 
    scanf("%d %d", &n, &m); 

    printf("%d", grid(n,m));
}