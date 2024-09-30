#include <stdio.h>
#include <stdlib.h>

int Min(int a, int b){
  if (a<b)
    return a;
  else
    return b;
}

int Minimo(int* v, int v_size){
  int i;
  if(0>=v_size) exit(EXIT_FAILURE);
  int accum = v[0];
  for(i=1 ; i<v_size ; i++)
    accum = Min(v[i], accum);
  return accum;


}


int main() {
  int x[] = {10,20,30,40,50,60}; // proprietà associativa. 
  int q = Minimo(x , 6);
  printf("%d\n", q);
  return 0;
}
