/*Cf problem found here:
https://codeforces.com/problemset/problem/1760/A
cosa ho imparato ?*/
#include <stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
    scanf("%d%d%d",&a,&b,&c);
    if((a>b && a<c)||(a<b && a>c))
        printf("%d\n",a);
    else if((b>a && b<c)||(b<a && b>c))
        printf("%d\n",b);
    else
        printf("%d\n",c);
    }
}