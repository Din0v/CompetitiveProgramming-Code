/*CF problem 151A found here:

*/

#include<stdio.h>
#include<math.h>

int main(){
    int n,k,l,c,d,p,nl,np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int x=k*l/nl ,y=c*d ,z=p/np;

    int u=fmin(x,fmin(y,z));  // Fmin from the math.h header 
    printf("%d\n",u/n);

    // long long Rpc =pow(7,219)
    // printf("%lld", Rpc);
}