/*Cf problem found here: 
https://codeforces.com/problemset/problem/1360/B
Cosa Ho imparato ?*/
#include<stdio.h>
int main()
{ int t,n,i,j,k,a[50],q;
    scanf("%d",&t);
    while(t!=0) {
        scanf("%d",&n);
        for(i=0; i<n; i++) scanf("%d",&a[i]);
        for(i=0; i<n-1; i++) {
            for(j=i+1; j<n; j++) {
                if(a[i]>a[j]) {
                    q=a[i]; a[i]=a[j]; a[j]=q;}}}
        k=a[n-1]-a[0];
        for(i=0; i<n-1; i++) {
            if(a[i+1]-a[i]<k) k=a[i+1]-a[i];}
        printf("%d\n",k);
        t--;
    }
}