/*CF problem found here:
https://codeforces.com/problemset/problem/1352/A
Cosa Ho imparato ??
*/


#include<stdio.h>
    
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, a[6], x=0, y=1;
        scanf("%d",&n);
        for(;n>0;y*=10,n/=10){  // a for can start with no inital condition !!
        if((a[x]=(n%10)*y)>0)
        x++;
    }

    printf("%d\n",x);
    for(int i=0;i<x;i++)
        printf("%d ",a[i]);
    }

}