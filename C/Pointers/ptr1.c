# include <stdio.h>

int main() {

    int m = 10, n, o;
    int* z = &m;  // il puntatore* z di tipo int contiene l'indirizzo di M 
    
    printf("\n z stores the address of the variable M is: %p \n", z); // are there 2 variables ? z and *z ? YES THERE ARE !!
    
    printf("\n *z stores the value of m  = %i \n", *z);
    
    printf("\n &m is the address of m = %p \n", &m);
    
    printf("\n &n stores the address of n = %p\n", &n);
    
    printf("\n &o stores the address of o = %p\n", &o);
    
    printf("\n &z stores the address of z = %p\n", &z);
    
    
    
    


}
