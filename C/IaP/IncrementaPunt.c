#include <stdio.h>

// cool application of pointers where we send the pointer to manipulate a variable. 
// you may ask how do we find that variable ? ez we add the & to the variable we want our pointer to access. 
void incrementa(int *a){ 
*a = *a + 1;
}

int main(){
    int x = 0; 
    for(int i=0; i<10; i++){
        incrementa(&x);
        printf("value of i %d \n", i);
        printf("granulare di X è: %d \n \n", x);
       
    }
    
    
    printf("value of x %d \n", x);
}