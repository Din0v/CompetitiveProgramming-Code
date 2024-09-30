/*112A codeFoces here:
https://codeforces.com/problemset/problem/112/A
it's an exercise in string compare (strcmp) function 
nothing less nothing more
important thing to know is the return value of the strcmp 
0 0> or 0< depending on the ASCII difference between the compared strings! 
ho imparato cos'è un scanset
ed adesso voglio capire come finire questa cosa... :(
vedi 112A2nd.c per avere la soluzione funzionante 
ci sono due problemi primo con scanf e l'altro con l'allocazione di spazio nella stringa!
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ 
    char str1[100];  // nella dichiarazione NON si assegna il valore!! ma si mette vicino alla variabile!!
    char str2[100];
     // "gets" has been removed from C11 because it overflows!!
    //fgets(str1, 100,stdin);
     scanf("%[^\n]s", str1);
   
    //fgets(str2, 100,stdin);

    scanf("%[^\n]s", str2);
     for(int q=0;q<strlen(str1);q++) {
        str1[q]=tolower(str1[q]);
        }
    //scanf("%[^\n]%*c", str2);
    for(int r=0;r<strlen(str2);r++){
        str2[r]=tolower(str2[r]);
    }
     printf("string1: %s\n", str1);
     printf("string2: %s\n", str2);


    int retrunValueofStrcmp = strcmp(str1,str2); // variabile ausiliare!
    printf("value of strcmp is: %d\n", strcmp(str2, str1) );
    printf("string1: %s ", str1);
    printf("string2: %s ", str2);
    if( retrunValueofStrcmp == 0)
        printf("0\n");
    else if( retrunValueofStrcmp < 0)
        printf("-1 \n");
    else   
        printf("1 \n");

}