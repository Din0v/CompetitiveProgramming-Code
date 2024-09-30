/*this is CF problem Nr. 69A.c found here:
https://codeforces.com/problemset/problem/69/A
this is my next attempt in solving it without using arrays!
*/

#include <stdio.h>

int main(){
    int n, x, y, z;
    int sumX=0, sumY=0, sumZ=0;

    scanf("%d", &n);

// --n  --> n=n-1 
// n-- utiliza il valore di n poi sotrai uno!
    while(n--){
        scanf("%d %d %d", &x, &y, &z);
        
        sumX = sumX + x;
        sumY = sumY + y;
        sumZ = sumZ + z;
    }
    if(sumX== 0 && sumY==0 && sumZ==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}