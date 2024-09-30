/*CF problem 1409 trovato qui:
https://codeforces.com/problemset/problem/1409/A
Cosa ho imparato ?
i programmatori sono tirchi... */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main(){

    int t;
    scanf("%d",&t);
    
    while(t--){
        int a,b,c,d,i;
        scanf("%d %d",&a,&b);
        c=(abs(a-b)+9)/10;

        printf("%d\n",c);
    }
}