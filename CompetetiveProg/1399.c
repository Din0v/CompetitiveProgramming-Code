/* TO BE REVISEDDD
Cf problem remove Smallest found here:
https://codeforces.com/problemset/problem/1399/A
*/


#include<stdio.h>
int main()
{
    int t,n,i,j,temp,a[100],count;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        count=0;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<=1)
            count++;
        }
        if(count==n-1)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}