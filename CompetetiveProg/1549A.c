/*CF problema per quanto banale è impegnativo da capire il principio 
Si trova qui: https://codeforces.com/problemset/problem/1549/A

2 è sempre primo, e stiamo puntando per avere un modulo sempre di 1 
e dato che stiamo trattando numeri primi il principio vale: 

Primo modulo (num) == Primo Modulo (num2) = 1 

il numero primo è sempre dispari! (tranne il 2)

Ho provato a fare 3 anzichè 2 comme il gli altri hanno fatto Non va xD
*/

# include <stdio.h>


int main(){
    int t, i;
    long long Prime;

    scanf("%d", &t);
   
    for(i=0; i<t; i++){
        scanf("%lld", &Prime);

        printf("%d %d \n",2, Prime-1);
    }
}
