/*Crazy attempt to solve 96A using strcmp function
che cosa ho imparato ?
allora per primo non tutto ciò che lucica è un array questo poco ma sicuro 
poi impara ad usare cose gia presenti tipo strstr
se mi impegno posso arrivare a delle soluzioni come appunto qui: confrontare la stringa intera alla sotto stringa voluta!*/


#include <stdio.h>
#include <string.h>

int main(){
    int i,l, trovato = 0;
    char players[103];
    scanf("%s", players);

// NULL and 0 are equal ? ABSOLUTELY FUCKING NOT
    if(strstr(players, "1111111") !=NULL){
        printf("YES");
    // strstr restituisce un puntatore e per questo che stiamo usando NULL!
    //https://cplusplus.com/reference/cstring/strstr/
    }
    else if(strstr(players, "0000000") !=NULL){
        printf("YES");
    }
    else{
        printf("NO");
    }
}