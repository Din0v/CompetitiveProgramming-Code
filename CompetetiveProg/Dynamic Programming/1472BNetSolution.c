#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int x,sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            sum+=x;
        }
        int k;
        k=sum/2;
        if(sum%2==0 &&  !(k==n && k%2!=0))
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;}