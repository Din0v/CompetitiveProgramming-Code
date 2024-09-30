/*Prova 2020 Avril */
#include <stdio.h>
long Mult(int (*a)[10]){
    int i;
    long r =1L;

    for(i=0; i<10; ++i){
        r *= a[i][9-i];  // prima riga ultimo elemento 
                        // Ricordati la matrice char Bidimensionale che stampa parole distinte ma sempre in un singolo array.
    }
    return r;
}

int main(){
    int a[10][10];
    int i, j;
    long res;

    for(i=0; i<10; ++i){
        for(j=0; j<10; ++j)
            a[i][j] = i + j +1; // il più uno è per evitare che ci sia uno zero nel primo elemento !
    }

       for(i=0; i<10; ++i){
        printf("\n");
        for(j=0; j<10; ++j)
            printf("%d ", *a[j]);
    }
    
  //  printf("%d", a);
   // printf("%ld", res);

}