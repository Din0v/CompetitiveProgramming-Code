#include <stdio.h>

int main(){
    int a = 2; 
    int *b = &a; 
    int c[3] = {0, 1, 2};
    int *d = c;
    printf("%d\n", *(c+a));
    printf("before operation %d\n", *(c + *b + *d));
    if(*(d+a) == c[a])
        *b = *(c+a) / 2;
    
    // questo di gioco di puntatori e per dire che fa una copia che diventa 1 ma l'array originale non viene modificato!!
    c[*b] = *(c + *b + *d);
    printf("%d\n", *(c + *b + *d));
 


    int i; 
    for(i=0; i<3; i++){
        printf("%d", c[i]);
    }
}