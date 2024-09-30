/*questa ricetta di codice determina se lo string è un palindromo oppure no 
palindromo ricordati escher e le sue logiche

--> bisogna fare attenzione al carattere \0 (terminazione di una stringa) altrimenti abbiamo un errore logico 
e la "ricetta" non funzionerà mai !! 
*/


#include <stdio.h>
#include <string.h> // perchè ci serve string compare (strcmp) & string length (strlen)

int main(){
    // the basic part
    char str[80], rev[80];
    int n,i,x;
    printf("enter a string: ");
    scanf("%s", str);

    // the logic:
    n = strlen(str); // ci serve per iterare i caratteri nel ciclo!
    printf("the length of the string is (%d) \n", n);
    x=0; // indice della stringa a rovescio
    for(i=n-1; i>=0; i--){ // (quanti elementi devo iterare? ; fino al zero; uno alla volta)
        rev[x] = str[i]; // swap del indice!
        x++;  // this is a neat mechanism to increment an extirior variable
    }
    rev[x] = '\0'; // aggiungiamo questo elemento alla fine della stringa per essere sicure che str e rev abbiano la stessa lunghezza!
    
    if(strcmp(str,rev)==0)  // string compare from the string header (see documentation "nel dubbio")
        printf("the string (%s) is a palindrome\n", str);
    else
        printf("the string (%s) is NOT a palindrome\n", str);
}