#include <stdio.h>
int Somma (int* v, int V_size){ // funzione di tipo int che prende in input un
  // puntatore ad un array di nome "v" e un intero che denota la dimensione del array. 
  int i; //
  int accum = 0; //iniziallizazione di zero al punto di accumolo
  for(i=0 ; i<V_size ; i++){ // the Loop
    accum = accum + v[i];
    }
  return accum; // deve essere fuori
}

int main() {
  int x[] = {10,20,30,40,50,60}; // Vettore di int
  int s = Somma(x, 6); // un int che contiene il risultato della funzione Somma
  printf("%d\n", s); // Output Sul schermo
  return 0;
}
