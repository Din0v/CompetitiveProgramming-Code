/*Dp and Math problem found here:
https://codeforces.com/problemset/problem/1472/B
cosa ho imparato da questa implementazione ?
*/

# include <stdio.h>

int main(){
    int t, n, i, l, casi, somma=0;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(l=0; l<n; l++){
            scanf("%d", &casi);
            somma = somma + casi;
        }

       // printf("%d\n", somma);
        /*spiegazione del (if):
        se il resto della divisione di somma per 2 è uguale a zero, 
        è 
        (TUTTO Invertito)
        {
        la divisione per due è uguale ad n 
        la divisione per due Modulo due NON è UGUALE a zero
        }
        ALLORA VA BENE, e stampa YES
        */
        int divisonDue = somma/2;
        if(somma%2==0 &&  !(divisonDue==n && divisonDue%2!=0)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

        somma = 0; // Dato che ho messo il contatore fouri dal loop, cosi so che nella prossima iterazione si azerra !!
    }


}
