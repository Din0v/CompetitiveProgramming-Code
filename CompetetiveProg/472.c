/* Da rivedere comunque. 

CF problem found here: 
https://codeforces.com/problemset/problem/472/A
Cosa ho imparato ?
*/   


#include<stdio.h>
  
  
    int main()
    {
    	int n;
    	scanf("%d",&n);
    	int a=(n%2==0)?8:9;
    	printf("%d %d",a,n-a);
    }