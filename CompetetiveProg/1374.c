/*CF problema 1347 found here:
https://codeforces.com/problemset/problem/1374/A
Cosa ho imparato ?*/

#include<stdio.h>
 
int main()
{
	int t, x, y, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d%d", &x, &y, &n);
		printf("%d\n", ((n - y) / x)*x + y);
	}
	return 0;
}