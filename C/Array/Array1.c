#include <stdio.h>

int main(){
    int a[5] = {0};
    char c[] = "Ciao Bello"; /* cosi si scrivo gli array di char. */
    int Q[5] = {1, 2, 3, 4, 5} ;
    int *b = a;  // b è un puntatore alla array a. 
    char *q = c;
     c[3]= '2';
     c[0]= 'r';

    printf("%d\n", a[3]);
    printf("%d\n", *b);
    printf("%c\n", c[3]);
    printf("%c\n", *q);
    printf("%d\n", 3[Q]);  // Questa forma è lecita per pigliare un elemento dal array. 
    

    

   
    
   
    
}