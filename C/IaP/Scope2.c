#include <stdio.h>

int z = 0; 

int g1(int w){
    {
      int  z = 10 + ++w; // è una nuova varibile che non è relazionata alla z globale, and hence the additonal scoping.
    }
    return z + w; 
}

int main(){
    printf("%d %d \n", g1(10), g1(10));
}