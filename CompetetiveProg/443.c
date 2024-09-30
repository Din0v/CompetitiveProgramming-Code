/*Da rivedere 
problema CF si trova qui: 
la parte interessante di questo problema e come si possono usare i caratteri per imporre una condizione d'usicta nei cicli!*/


#include<stdio.h>

int n[0],i,j=0;
char c;

int main(){

    while(c!='}')
    {
        scanf("%c",&c);
        n[c]++;
    }

    for(i='a';i<='z';i++){
            if(n[i]) j++;
    }
    printf("%d",j);
}