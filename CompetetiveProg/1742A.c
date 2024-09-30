/*CodeForces problem 1742 che si trova qui di nome SUM 
https://codeforces.com/problemset/problem/1742/A
questo è un sempilicissimo caso di un uso del OR dentro l'argomento del if, per valutare se una somma delle tre equivale ad uno dei numeri 
*/

#include <stdio.h>

int main(){
    int t, a, b, c ; 

    scanf("%d", &t);

    while(t--){ // solo per i test case 
        scanf("%d%d%d", &a, &b, &c);
        
        if(a+b==c || a+c == b || b+c == a){ // il uso del OR logico
            printf("\n YES");
        } else{
            printf("\n NO");
        }
    }
}