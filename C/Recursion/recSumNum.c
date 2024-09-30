/*calcolare la somma di numeri con la ricosrsione 
guardare questo video ben spiegato: https://www.youtube.com/watch?v=ngCos392W4w*/


#include <stdio.h>

int sumUptoNum(int n){
    if(n==0)
        return 0;  // caso base, la forma più semplice del problma! 
    else 
        return n + sumUptoNum(n - 1);
        /*passo ricorsivo ( mi ricorda il passo induttivo in discreta!!),
         il nuovo numero + tutta la somma dei scorsi numeri 
         ossia tutta l'area del trianglo stante sopra il nuovo valore (vedere il video sopra!)*/

    
}

int main(){
    int n;
    scanf("%d", &n); 
    printf("%d", sumUptoNum(n));
}