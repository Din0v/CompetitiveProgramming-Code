/*Problema CF Nr. 1520 si trova qui:
https://codeforces.com/problemset/problem/1520/A
Cosa ho imparato ? 
è un problema di implementazione e forza bruta nel testare tutti i casi possibili 

La parte del if nel secondo while (Giorni--) andrebbe capita meglio....
DA RIPASSARE.
*/


#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t); // prende l'input di tutti i test case possibili 
    while (t--) // esegue finchè i test case finiscono!
    {
        int Giorni, a[256] = {0}, b = 0,  p = 0 ;
        
        scanf("%d\n", &Giorni); // prende i numero dei giorni di PincoPallino
       
        while(Giorni--) 
        {
            int c = getchar(); // prende la stringa da testare in input e la mette nella variabile c.
            if (a[c] && c != p)
            {
                b = 1;
            }
            a[p = c] = 1;
        }
        puts(b ? "NO" : "YES");
    }
    return 0;
}

// come funziona la parte del if nel secondo while ? 
/*
mentre i giorni diminuiscono 
 1. il carattere inserito viene messo nel array A
 2. e poi viene confrontato con P ?  



 */


