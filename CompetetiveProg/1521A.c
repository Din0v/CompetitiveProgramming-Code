/*Problema 1521A che si trova qui

we got a number N = A . B,

Good: if it's divisible by A and B
Nearly good: è un nummero divisibile per A ma non per B

We can prove that 
a*(b-1) and are always nearly good numbers.
(except for edge cases described below) 
and obviously their sum is a good number. 

Any two consecutive integers are always coprime.

Dimostrazione della soluzione!
https://cp-notes.com/notes/snasibov05/CodeForces/1521/A
*/


#include <stdio.h>

// 

void nearly_Good(long long a, long long b){
    // a = 2*a ;
    // b = 2*b ;
    // long long c = a * b;
    if(b==1){
        printf("NO\n");
    }
    else if(b==2){   // bisognava solo considerare questo caso!!
        printf("YES\n%lld %lld %lld\n",a,2*a,3*a);
        }
    else{
        printf("YES\n%lld %lld %lld\n",a,a*(b-1),a*b);
    }
}


int main(){
    int t;
    long long a, b;

    scanf("%d", &t);

    while(t--){
        scanf("%lld %lld", &a, &b);
        nearly_Good(a, b);
    }
}