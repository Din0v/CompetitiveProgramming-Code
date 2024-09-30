/*CF problem about dp the maximum sum subarray.
https://codeforces.com/problemset/problem/455/A
Devo ripassare questo esempio 
*/

#include<stdio.h>
#define max(a,b)(a<b? b:a)  // this is a macro defenition although i could have written this as a function

long long a[100001]={0},n,i,c=0,d=0,t,x;
int main(){
    // the inputs 
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&x);
        a[x]+=x;
    }

    // the logic: it's the devision into subproblems
    for(i=1;i<100001;i++){
        t=c;
        c=max(c,d+a[i]),d=t;
    }
    printf("%lld",c);
    }

