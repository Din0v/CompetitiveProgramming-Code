/*CF problem 318A found here:
https://codeforces.com/problemset/problem/318/A
cosa ho imparato ?*/

#include <stdio.h>

int main(){
    long long n, k;

    scanf("%lld %lld", &n, &k);

    if (k <= (n + 1) / 2){
        printf("%lld", k * 2-1);
    }
    else{
        printf("%lld", (k - (n+1)/2) *2);
    }

    
}