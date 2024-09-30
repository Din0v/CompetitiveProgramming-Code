# include  <stdio.h>

int main () {
	
    int m = 10;
    int n, o;
    int *z; // is an integer
    
    z = &m ;

    // stampera di sicuro l'indirizzo in "hex" dato che il format specifier è %p!! 
    printf(" the memory address of m is %p\n", z);

    // questo stampa il valore puntato di &m
    printf(" the memory address of m is %d", *z);
    
   
    




}
