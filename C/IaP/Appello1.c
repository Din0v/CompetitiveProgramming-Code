/*questo programmino trova il valore più piccolo in una array*/

#include <stdio.h>

// herer we have a clevar way to use NOT Logic in context!! 

int find(int *a, int size){ // per il decay d'informazione
    int found = 0; // ci dice se l'abbiamo trovato o no, ? ma come ? not logic 0 not found, 1 is for found!!
    int smallest, i; // variabili locali, del ciclo, e dell'elemento della matrice più piccolo che soddisfa la condizione.
    for (i=0; i<size; i++){
        int q = a[i]*a[i]; // il quadrato 
        if(q>66){ 
            if(!found || a[i]<smallest){  // Se non lo trovi, oppur
                found = 1;  // The not Logic Nullifier!! COME URLARE TROOVAAATOOO
                smallest = a[i];
                }
        }
    }
    if (found)
            return smallest;
        else
            return -1;
}


int main(){
    int a[] = {5, 7, 9, 11, -100};
    int r = find(a, 5);
    printf("Smallest number is:\n %d\n ", r);
    return 0;
}