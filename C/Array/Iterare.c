# include <stdio.h>

int Stampa(int *PrimoElementoDellaMatrice, int size){
    int i;
    for(i=0; i<size; i++) 
        printf("Elements are: %d \n", PrimoElementoDellaMatrice[i]); 
        /* si iterare usando la variabile della matice 
         che abbiamo passato alla funzione!
         appunto Partendo dal primoElementoDellaMatice! */
    return i;

}


int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 69};
    Stampa(a, 9);
}