#include <stdio.h>

// this is a tail recursion function 

int facttail (int n, int a){ // prende Due parametri, il numero e
    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;
    else if (n == 1)
        return a;
    else 
        return facttail(n-1, n*a);
}

int main(){
    printf("Factorial is %d", facttail(12,1));
        return 0;
}

