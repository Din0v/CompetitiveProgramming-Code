/* è una ricetta di codice che mi restituisce la prima recorenza repetitiva da una data stringa 
tipo Racecar ---> la lettera c è la prima ricorenza repetitiva.
usa una funzione di controllo ausiliare che è la ifexists
e poi la logica di iterazione nel main. 
*/
#include <stdio.h>
#include <string.h>

int ifexists(char u, char z[], int v){
    int i; 
    for(i=0; i<v; i++)
        if(z[i] == u) return 1;
    return 0;    
}

void main(){
    char str1[80], str2[80]; 
    int n,i,x;
    printf("Enter string: ");
    scanf("%s", str1);  // vedi non serve il puntatore dato che una stringa è un puntatore.
    n= strlen(str1);
    str2[0]=str1[0];
    x=1;
    for(i=1; i<n; i++){
        if(ifexists(str1[i], str2, x)){
            printf("the first repetitive charachter in the string is %s is --> (%c) <--", str1, str1[i]);
            break;
        }
        else{
            str2[x]=str1[i];
            x++;
        }
    }
    if (i==n)
        printf("there is no repetitive character in the string %s ", str1);

    }