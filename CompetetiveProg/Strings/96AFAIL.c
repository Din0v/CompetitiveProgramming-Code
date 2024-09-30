/*CF problem 96A found here:
https://codeforces.com/problemset/problem/96/A
bisogna trovare il numero d'occrenze nella matrice data
mi vinene in mente il contatore "trovato" dal eserciziario
conta l'indice e quello successivo se sono uguali 7 volta allora c'è un pericolo sostanziale.
la soluzione sarà in un futuro migliore dove magari sarò più bravo :(

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,l, trovato = 0;
    char players[103];
    scanf("%s", players);
    l = strlen(players);
    
  //  printf("%d\n", l);
  while(trovato!=7){
    for(i=0; i<l; i++){
        if(players[i]==players[i+1]){
            trovato++;
        }
        else if(trovato <7 && players[i]!=players[i+1]){
                trovato = 0;
            }
        
    }
  }

    if(trovato==7){
        printf("YES\n");
            }
    else{
        printf("NO\n");
    }
    
   // printf("%d\n", trovato);    
}
    
    

