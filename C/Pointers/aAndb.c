#include <stdio.h>

int g1(int *a, int *b){
    int z = *a + *b;
    return z; 
}

int main(){
    int a=10;
    int b =20;
    int c = g1(&a, &b);
    printf("%d \n", c);
    return 0;
}