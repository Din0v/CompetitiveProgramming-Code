/*QUESTA è una soluzione che usa il doppio puntatore  per fare qualcosa simile 
al teorema dei due poliziotti con i limiti
l'implementazione è abbastanza semplice da intuire ma la sintassi non è molto leggibile */

#include <stdio.h>
#define N 1000

int deck[N], *sinistra = deck, *destra = deck - 1, i, n, p[2], t;

int main() {
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", ++destra);
    }
    // operazione Doppio Puntatore 

    while (sinistra <= destra) {
        if (*sinistra > *destra) p[t] += *sinistra++;
        else p[t] += *destra--;
        t = !t;
    }

    printf("%d %d\n", p[0], p[1]);
    return 0;
}