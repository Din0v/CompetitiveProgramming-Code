/*DA RIVEDERE 
cf problem found here:
https://codeforces.com/problemset/problem/1367/A
Cosa ho imparato ?*/

#include<stdio.h>
    int main(){

    	char a[105];
    	int t, i, l, j;
    	scanf("%d", &t);
    	for(i=1; i<=t; i++){

    		scanf("%s", a);
    		l=strlen(a);
    		for(j=0; j<l; j+=2)
    		{
    			printf("%c", a[j]);
    		}
    		printf("%c\n", a[l-1]);
    	}
}