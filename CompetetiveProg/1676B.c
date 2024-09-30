/*Cf problem found here:
https://codeforces.com/problemset/problem/1676/B*/

#include<stdio.h>
#define ll long long 
    
int main()
{
    ll n, i, k, a, mina,s=0,j;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++) {
        s = 0; mina = 987654321;
        scanf("%lld", &k);
        for (j = 1; j <= k; j++) {
            scanf("%lld", &a);
            s += a;
            if (a < mina) mina = a;
        }
        if (k != 1) printf("%lld\n", s - mina * k);
        else printf("0\n");
    }
    return 0;
}