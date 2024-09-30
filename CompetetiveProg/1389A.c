/*codeFores problem 1389 Found here
https://codeforces.com/problemset/problem/1389/A
it's about finding two numbers between a given l,r that would rappresent the least common multiple. 

ATTENZIONE il numero non deve dividere i limiti proposti, 
quindi in realtà possiamo scegliere i numeri che siano il minore possibile 

e per questo basta porre che il doppio del limite inferiore sia minore del limite superiore. 

*/

#include<stdio.h>

int main() {
    int t, l, r;
    scanf("%d", &t); // test cases
   
    while(t--) {
        scanf("%d%d", &l, &r); // upper and lower bound 

        if(l * 2 <= r) {
            printf("%d %d\n", l, 2 * l); // tutto il trucco sta qui:
        // se il limite massimo è almeno o uguale al doppio dell limite minimo allora 
        }
        
        else printf("-1 -1\n");
    }
}