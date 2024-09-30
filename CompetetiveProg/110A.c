/*CF Problem 110A nearly lucky numbers found here:
https://codeforces.com/problemset/problem/110/A
cosa ho imparato ? 

se noi volessimo andare a cercare le occorenze di un numero in un altro numero possiamo utilizzare il metodo del modulo

quando in CF mi dice che avrai un numero molto ma molto grande non pensare ad un enorme array di numeri grazie, pensa ad un solo valore!

*/

#include <stdio.h>

int main(){
    long long n;
    int count = 0;
    scanf("%lld", &n);

    while(n!=0){
        if(n%10 == 4 || n%10 ==7){
            count++;
        }
         n= n/10;
         printf("Value of n after devision: %lld\n", n);
         printf("Counter: %d\n", count);
    }
    if (count == 4 || count == 7)
    {
       printf("YES");
    }
    else
    {
        printf("NO");    }
}