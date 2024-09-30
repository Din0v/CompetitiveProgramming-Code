/*CF problem of Mishka found here:
https://codeforces.com/problemset/problem/703/A
Cosa ho imparato ?
*/

#include<stdio.h>
    int main(){
    	int n,t1=0,t2=0,m,c;
    	scanf("%d",&n);
    	for(int i=0;i<n;i++){
    		scanf("%d%d",&m,&c);
    		if(m>c) t1++;
    		else if(m<c) t2++;
    	}
    	if(t1>t2) printf("Mishka");
    	else if(t1<t2) printf("Chris");
    	else printf("Friendship is magic!^^");
    }