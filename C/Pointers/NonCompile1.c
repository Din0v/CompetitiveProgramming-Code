#include <stdio.h>

void add(int *a, int *b){
    // Non compilava dato che avevo sbagliato i tipi, SEMPRE si usa il tipo puntatore quando si modifica una varriabile puntata alla funzione !!!
    *a = *a + *b;
}

int main(){
    int x=1; 
    int y=2;
    add (&x, &y); 
    printf("%d %d \n", x,y);

    return 0;
}