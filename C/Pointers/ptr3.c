#include <stdio.h>

int main(){

    int m = 300;
    float fx = 300.60;
    char cht = 'z';   
    
    int* pt1; // è un puntatore di tipo int
    float* pt2; // è un puntatore di tipo float
    char* pt3; // è un puntatore di tipo char
    
    pt1 = &m; // il puntatore pt1 ricava l'indirizzo di m 
    pt2 = &fx; 
    pt3 = &cht;
    
    
    printf(" m = %d\n", m);
    printf(" fx = %f\n", fx);
    printf(" cht = %c\n", cht);    
    printf("\n Using & operator :\n");    
    printf("-----------------------\n");  
    printf(" address of m is %p\n", (&m));
    printf(" address of fx is %p\n", &fx);
    printf(" address of cht is %p\n", &cht);
    printf("\n Using & operator and * operator :\n");    
    printf("-----------------------\n"); 
    printf(" the value of m is %d\n", *(&m));
    printf(" the value of fx is %f\n", *(&fx));
    printf(" the value of char is %c\n", *(&cht));
    printf(" \n using only pointer variable \n");
    printf("-----------------------\n");
    printf(" address of m is %p\n", pt1);
    printf(" address of fx is %p\n", pt2);
    printf(" address of cht is %p\n", pt3);
    printf(" \n using only pointer operator: \n");
    printf("-----------------------\n");
     printf(" the value of m is %d\n", *pt1);
    printf(" the value of fx is %f\n", *pt2);
    printf(" the value of char is %c\n", *pt3);
    
    
}
