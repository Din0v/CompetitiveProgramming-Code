/*CF problem found here:
https://codeforces.com/problemset/problem/432/A
cosa ho imparato? 
che si poù dichiarare n e k nell argomento del main senza problemi !!!*/


#include<stdio.h>
    
int main (n,k){
    scanf("%d%d",&n,&k);
   
    int i=0,t,c=0;
        for(i=0;i<n;i++){
            scanf("%d",&t);
             if(t<=(5-k))
            c++;
    }

    printf("%d",c/3);
}

