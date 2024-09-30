/*Longest common subsequence found here
https://codeforces.com/problemset/problem/172/A

*/

// # include <stdio.h>

// int lengthOfLongestCommonSubSequence(int array, int size){



// }

// int main(){

//     int n ; 
//     scanf("%d", &n);

//     int PhoneNumbers[30001];
//     int i; 

//     for(i=0; i<length; i++){
//         scanf("%d", &PhoneNumbers[i]);
//     }



// }


#include <stdio.h>
#include <string.h> // solo per usare strlen

int main(){
    int i,n,ans;
    char s[21]; // definizione lunghezza della stringa
    scanf("%i\n",&n);
    scanf("%20s",s); // dato che è una stringa(che è un array ) non serve il: & 
    // e qui stiamo prendendo in Input SOLO LA PRIMA!!! e dato che tutto il resto per definizione sono Uguali allora lo si puo fare 

    // se fosse un algoritmo di LCS più generale non possiamo farlo!


    ans = strlen(s); // calcola la lunghezza della stringa e assume e assume che è tutte sono uguali

    for(i=1;i<n;i++){
        char c[21]; // la var che prende il resto del input e lo confronta 
        scanf("%20s",c);
        int j;

        for(j=0;j<ans;j++)
            if(s[j]!=c[j]){  // se l'indice non sono uguali ritorna il punto di stacco.
                ans = j;
                break; // stacca quando trovi e assegni il punto di differenza
            }
        }
    
    
    printf("%i",ans);
 
}


/*
3
77012345678999999999
77012345678901234567
77012345678998765432*/