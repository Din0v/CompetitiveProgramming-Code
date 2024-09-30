/*CF dynamic programming problem found here:
Forma compattissima di scrivere codice in C
*/


#include<stdio.h>
int main(){
    int n,x[100005]={0},i,j;

    for(i=0,scanf("%d",&n);i<n;scanf("%d",&j),x[j]++,i++);

    for(i=1;i<100001;i++) x[i]+=x[i-1];
    
    for(i=0,scanf("%d",&n);i<n;scanf("%d",&j),printf("%d\n",x[j<=100000?j:100000]),i++);
}