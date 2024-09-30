/*Code forces problem 794A found here 
https://codeforces.com/problemset/status/749/problem/A
La seguente sarà una soluzione non ottimizzata del problema sopra citato 
dove si cerca una soluzione esclusivamente usando i primi 2 e 3  (dove la loro somma può esprimere qualsiasi numero in termine di numeri primi )
*/

# include <stdio.h>

int main(){
    int x; 
    scanf("%i", &x);
    
    printf("%d \n", x/2); // questa formula ci restituisce il numero di fattori di un dato numero 

    while(x>3){
        printf("%i ", 2);
        x = x-2; // perchè semplicemente stiamo decrementando per 2 ogni volta che la stampiamo in output
    }
    printf("%i", x);
}

