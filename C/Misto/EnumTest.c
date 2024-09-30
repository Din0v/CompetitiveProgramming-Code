#include <stdio.h>

enum week{Sunday, Monday, Thursday, Wednesday, Tuseday,Friday, Saturday};

int main(){
    enum week day; // abbiamo creato una variable di tipo week di nome day
    day = Friday;
    printf("%d\n", day); // stampa il numero del elemento nella lista 
    return 0;
}