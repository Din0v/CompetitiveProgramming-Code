/*Da rivedere!!
CF problem 1360A found here:
https://codeforces.com/problemset/problem/1360/A
Solution from here:
https://codeforces.com/problemset/submission/1360/81335879

Cosa ho imparato ?? 
Vedi i appunti su obsidian...
*/
#include<stdio.h>
    int main()
    {
        int t,a,b,k;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d%d",&a,&b);
            if(b>a){k=a;a=b;b=k;}
            if(a>=2*b)printf("%d\n",a*a);
            else printf("%d\n",4*b*b);
        }
        return 0;
    }