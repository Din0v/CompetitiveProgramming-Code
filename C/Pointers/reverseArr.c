#include <stdio.h>
#include <stdlib.h>

int* reverse(int *fonte, int dimensione){
    int i;  /*Variabile per il ciclo*/
    int *ArrayRiverso = (int*) malloc(sizeof (int) * dimensione); /* la malloc ha preso un solo PARAMETRO che è la dimensione totale intesa come dimensione del int e dimensione del array passato */
    if (!ArrayRiverso)
        return 0;
    for(i=0; i<dimensione; i++)
        {
            ArrayRiverso[dimensione-i-1] = fonte[i];
        }
    return ArrayRiverso;
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int *r; // quindi bisogna avere il continitore come puntatore  cosi come definire un Array
    r =  reverse(a, 5); 
    printf("array is %d %d %d %d", *r, *(r+1), *(r+2),*(r+3), *(r+4)); 
    // vedi bel uso del aritmetica dei puntatori per la prima volta... complimenti!!
 }

