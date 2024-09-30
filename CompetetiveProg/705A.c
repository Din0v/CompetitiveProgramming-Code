/*CF problem HULK found here:
https://codeforces.com/problemset/problem/705/A
*/

#include <stdio.h>

int main(){
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        for (int i=1;i<=n;i++)
        {
            if (i%2) printf("I hate ");
            else printf("I love ");
            if (i==n) printf("it\n");
            else printf("that ");
        }
    }
    return 0;
}