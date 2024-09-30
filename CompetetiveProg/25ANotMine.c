#include<stdio.h>


int main(){
    int n,a[105],i=0,j=0,p,q,x;
    scanf("%d",&n);

    for(x=1;x<=n;x++){
        scanf("%d",&a[x]);
        if(a[x]%2==1)i++,p=x;
        else j++,q=x;
}
printf("%d",i<j?p:q);
}