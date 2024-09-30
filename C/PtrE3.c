#include <stdio.h>

int main(){

    int m = 300;
    float fx = 300.6005f;
    char cht = 'z';
    
    int *pt1;
    float *pt2;
    char *pt3; 
    
    pt1 = &m;
    pt2 = &fx;
    pt3 = &cht;
    
    printf("Using th & operator \n");
    
    printf("address of m = %p \n", &m); // ricava l'indirizzo. 
    printf("address of fx = %p \n", &fx);
    printf("address of cht = %p \n\n\n", &cht);
    
    printf("value at address of m = %d \n", *(&m)); // deRefrencing 
    printf("value at address of fx = %f \n", *(&fx));
    printf("value at address of cht = %c \n\n\n", *(&cht));
    
    printf("address of m = %p \n", pt1);  // prende l'indirizzo di memoria a cui il puntatore punta 
    printf("address of fx = %p \n", pt2);
    printf("address of cht = %p \n\n\n  ", pt3);
    
    printf("value at address of m = %d \n", *pt1); // stampa il valore.
    printf("value at address of fx = %f \n", *pt2);
    printf("value at address of cht = %d \n", *pt3);



}
