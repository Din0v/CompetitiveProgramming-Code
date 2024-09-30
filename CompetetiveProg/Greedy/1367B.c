/*Cf problem 1367A si trova qui:
https://codeforces.com/problemset/problem/1367/B
Cosa ho imparato ?
di nuovo non tutto ciò che lucica è un array ci sono modi più semplici per organizzare i dati...
dovrei implementare una funzione che faccia il confronti ed il incremento dei contatori chiamandola: EvenArrayCount.
*/

#include<stdio.h>

    /*
    1. TestCase: è la prima variabile richiesta
    2. n: è la lunghezza della matrice data
    3. i: è il elemento contatore del for 
    4. a, b: sono i due contatori che tengono conto se il mod per 2 sono uguali (Da espandere questa implementazione..)
    5. x: è l'elemento dentro la matrice
    */
    
int main(){
    int TestCase,n,i,x,ContatoreElemento, ContatoreIndice;

    scanf("%d",&TestCase);
    
    while(TestCase--){
        ContatoreElemento=0; ContatoreIndice=0;
        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d",&x);
            /*se il risultato del modulo 2 del indice e del elememto è diverso bisogna capire quale contatatore bisogna incrementare?
            1. se mod 2 del elemento della matrice è uguale a 0 allora incrementa il contatoreElemento per uno 
            2. altrimenti (sarà l'indice 0), e quindi si incremnenta il ContatoreIndice
            Attenzione al IF nestatato (vi sono due IF annidati !!!)
            */
            if(x%2!=i%2){
                if(x%2==0) ContatoreElemento++;
                else ContatoreIndice++;
            }
    }
    if(ContatoreElemento!=ContatoreIndice) printf("-1\n");
    else printf("%d\n",ContatoreElemento);
    }
}