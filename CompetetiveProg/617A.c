/*Elephant 617A in CF found here:
https://codeforces.com/problemset/problem/617/A
it's a factorization problem simply put
cosa ho imparato ?

non è sempre un ciclo ciò che lucica 

questa soluzione e molto intelligente dato che l'else è geniale:
prendiamo l'esempio di 17: 
17%5 non è uguale a  0 perciò:
17/5 = 3 con resto 2 ( che non ci frega), 
3 + 1 = 4 allora si ha che i fattori sono 
5 + 5 + 4 + 3  ( 4 passi !!)
dove si applica ? nella fattorizazione dei numeri ma solo per capire quanti fattori
ci sono in quel esempio. ?
*/

#include <stdio.h>

int main(){
    int n, i, sum = 0;
    scanf("%d", &n);
    // for(i=0; i<=n; i++){
    //     if(n%5 == 0){
    //         n - 5;
            
    //     }
    //     sum++;
    // }
   
        if(n%5==0){
            n = n / 5;
        }
        else{
            n= (n/5) +1;
        }
    

    //r = n%5; 

    printf("%d", n);
}