/*MY first geometry problem CF found here:
https://codeforces.com/problemset/problem/1369/A
*/


#include <stdio.h>

int main(){
    int t,n;
    
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        n%4==0?printf("YES\n"):printf("NO\n");
    }
}