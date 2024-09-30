/*Stones on tables 266A that can be found here:
https://codeforces.com/problemset/problem/266/A
dobbiamo indicare quanti sasassi da eliminare per avere un risultato 
Da risolvere prima di dormire il 8Dicembre2022!
Attenzione nel confronto degli indici controlla che l'indice della stringa viene confrontato con "==" e non assegnato con "="
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,len,i,j ; 
    int count = 0;
    char s[52];
    scanf("%d\n", &n); // the \n doesn't let this program skip the second fgets!!!
    fgets(s, n+1, stdin);
    len = strlen(s);

// la logica del codice è qui!! in pratica il richiesto e quello di calcolare quante occorenze di una lettra vi sono in una stringha!!! 
    for(i=0; i<len; i++){
            if(s[i]==s[i+1]) // UGUALIZANZA e NON ASSEGNAMENTO!!!
                count++;
        }

    printf("%d\n", count);
    // printf("%d\n", n);
    // for(i = 0; i<len; i++){
    //     printf("%c", s[i]);
    // }
    
}