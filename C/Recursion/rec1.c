#include <stdio.h>

int numPrint(int);

int main(){

    int n = 1;
    printf ("the natural numbers are:  ");
    numPrint(n);
    
    printf("\n");
    
}

int numPrint(int n){

    if(n <= 50){
    
        printf(" %d ", n);
      //  printf(" \n uhh ");
        numPrint(n+4);
      //  printf(" No ? ");
        }
}
