/*Domino piling in C
https://codeforces.com/problemset/problem/50/A
Check the Rnote save for more explanation 
*/

/*Breve speigazione su cosa fa e come funziona questo programma
allora l'idea è una semplice calcolo di quante piastrine posso coprire una superfice!!
quindi prendiamo l'input indicato dai parametri iniziali 
poi si calcola la superifice del "rettangolo" ovvero multiplicando l'input N x M ed infine si divide per 2 che è la misura standarad della piastrina ( pezzettino di domino!)*/

#include <stdio.h>
 
 int main(){
    int M, N, s;
    scanf("%d %d", &M, &N);
    if(N>=1 && M<=16)
        s=(M*N)/2;
    
    printf("%d", s);
 }

