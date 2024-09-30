/*CF problem 59A found here:
https://codeforces.com/problemset/problem/59/A
what did i learn ?
fitst we need strlen to measure the size of the array, poi due variabili che contano quanti lettere maiuscole e minuscole ci sono, 
per poi infine controtarle in un IF esterno e dare il risultato usando toupper da "ctpye.h". 

ed in fine si confrontano usando i caratteri ASCII ??
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int i,l,j;
    int CountCapital = 0;
    int CountSmall = 0;
    char word[103];
    scanf("%s", word); // ATTENZIONE format specifier for a string is  `s` !!
    l = strlen(word);
    //printf("%d\n", l);

    for(i=0; i<l; i++){
        if(word[i]<=90){
            CountCapital++;
        }
        else{
            CountSmall++;
        }
    }
   // printf("%d\n", CountCapital);
   // printf("%d\n", CountSmall);
    if((CountCapital > CountSmall)){
        for(i=0; i<l; i++){
            word[i] = toupper(word[i]);
        }
        printf("%s", word);
    }
    else{
        for(i=0; i<l; i++){
            word[i]=tolower(word[i]);
        }
        printf("%s", word);
    }
}