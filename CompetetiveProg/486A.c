/*CF Problem 486A.c found here
https://codeforces.com/problemset/problem/486/A
it's a simple function implementation
well it turns out that it's not so simple!
first time i encounter the time limit exceeded error!
becasue my solution is arguabely a stupid one 

MERITA UN APPROFONDIMENTO DI PER SE!!
*/


# include <stdio.h>

int main(){
    long long n, res;

    scanf("%lld", &n); // attenzione al format specifier of scanf Alrimenti passa valori errati!

    if(n%2==0){
        res= n/2;
    }
    else{
        res= ((n+1)/2)*(-1);
    }
    printf("%lld", res);
}
    // # include <math.h>
    // int i;
    // for(i=1; i<=n; i++){
    //     res = res + pow(-1, i)*i;
    // }
    // printf("%lld\n", res);
    
