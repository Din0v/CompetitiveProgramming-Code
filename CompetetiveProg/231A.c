/*CF Problem 231A found here
https://codeforces.com/problemset/problem/231/A
programers vote on which problem to solve:
*/

#include <stdio.h>

int main(){
    int i, n, a,b,c,  res=0;
    int votes[4];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d %d", &a, &b, &c);
            if((a+b+c)>=2)
                res++;
    }   

    printf("%d", res);
}