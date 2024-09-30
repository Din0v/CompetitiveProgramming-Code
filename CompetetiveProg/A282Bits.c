/* questo è il problema N. 282a in codeforces 
https://codeforces.com/problemset/problem/282/A
*/
/*Breve spiegazione:
Non Ci sto capendo una sega...!!

un giorno dopo l'ho capita...

allora è un semplice modo per capire come confrontare ed interpretare una data stringa in input in un valore!
inanzi tutto si prende la variabile t come numero di "trail" prove, 
poi si usa la funzione strcmp (string compare) dal header string.h per confrontare le due stringe la prima e quella data in input che viene salvata nella variabile X e poi quella "letterale" scritta entro le due parentesi!
si confronta l'input o si aggiunge 1 oppure si sotrae 1. 
tutto qui!

la funzione strcmp restituisce 0 se le due stringe sono uguali 

*/

#include <stdio.h>
#include <string.h>

int main(){
    int i, t, s=0;
    char x[4]; // Dato che la stringa non è altro che X++ quindi 3 caratteri più il end of line "\0"
    scanf("%d \n", &t); // t: STANDS for number of trails
    t = t-1;  // just so we can have the (=) in the for statement otherwise we get one more input since we are starting the count from zero
  
    for(i=0; i<=t; i++){
        scanf("%s", &x);
        if(strcmp(x,"X++")==0 || strcmp(x,"++X")==0){
            s = s+1;
        }
        else if((strcmp(x,"X--")==0) || (strcmp(x,"--X")==0)){
            s = s-1;
        }
        s=s;
    } 
    // {
    //     scanf("%s", &x);
    //     if(strcmp(x,"uno")==0 || strcmp(x,"due")==0){
    //         s = s+1;
    //     }
    //     else if((strcmp(x,"tre")==0) || (strcmp(x,"ert")==0)){
    //         s = s-1;
    //     }
    //     s=s;
    // } 
    printf("%d \n", s);

return 0;

}