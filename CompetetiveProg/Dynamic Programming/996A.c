/*Yet another Dynamic programming question:
https://codeforces.com/problemset/problem/996/A

vedi questa: 
https://www.geeksforgeeks.org/understanding-the-coin-change-problem-with-dynamic-programming/
*/

# include <stdio.h>

// int main(){
//     int n, t;
//     scanf("%d", n);

//     int CountBills = 0;
//     while(n--){
//         n= n%100;

//         printf
        
//     }
// }

int n;
int main(){
	scanf("%d",&n);
    /*
    Attenzione: dato che stiamo utilizzando un int  tutte le frazzioni vengono ommesse!!
    - n/100: ci dice il numero di banconote di taglia 100
    - n/20%5 ci dice il numero di banconote di taglia 20 
    --> perchè il modulo 5 ti chiedi ?
    
    -n/10%2 ci dice il numero di banconote di taglia 10
    -n/5%2 ci dice il numero di banconote di taglia 5 

    --> perchè abbiamo usato il modulo 2 ? 

    -n%5 ci dice il numero di banconote di taglia 1
    */
    int t = (n/100) + (n/20%5) + (n/10%2) + (n/5%2) + (n%5);
	printf("%d", t);
}