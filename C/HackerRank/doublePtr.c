#include <stdio.h>

int main(){
    int a = 123; 
    int* b = &a; 
    int** c = &b;

    printf("%p \n", b);
    printf("%i \n", **c);
    printf("%i", *c); // this would compile but shows garbage 

    
}