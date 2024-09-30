/*this is the Soldier banana problem CF found here:
https://codeforces.com/problemset/problem/546/A
Dio Mio, e semplice ma devi essere sveglio per farla 

i soldi che ha il soldato sono del tipo long long. 

come si calcola la somma di un array iterando un elemento alla votla, con una variabile ausiliare ("sum").
e come 
*/

# include <stdio.h>

int main(){
    int prezzoBanana, BananeDaComprare, i,sum=0;
    long long SoldiSoldat ;
    int prezzototale[10005];

    scanf("%d %d %d", &prezzoBanana, &SoldiSoldat, &BananeDaComprare);

    for(i=1; i<=BananeDaComprare; i++){
        prezzototale[i-1] = i*prezzoBanana;
    }

    for(i=0; i<=BananeDaComprare;i++){
        sum = sum+ prezzototale [i];
        
    }
    
    if(sum>SoldiSoldat){
        printf("%d\n ", sum-SoldiSoldat);
    }
    else if(sum<=SoldiSoldat){
        printf("0\n");
    }
}