/*CF Problem 758A found here:
Cosa ho imparato ?*/
#include<stdio.h>

int main(){
    int n,a,i,s=0,sum=0,x;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        sum=sum+a;
        if(s<a)s=a;
        }

    x=s*n-sum;
    printf("%d",x);
}