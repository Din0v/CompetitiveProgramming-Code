/*CF problem 148A found here:
https://codeforces.com/problemset/problem/148/A
it's about math 
*/

#include <stdio.h>

int main(){
    int k, l, m, n, d, i, count=0;
    int res[3]= {0};

    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);


    for(i=1; i<=d; i++)
    {
       if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
       {
           count++;
       }
    }
    
    printf("%d\n", count);

   // res[0] = d%k;
    // res[1] = d%l;
    // res[2] = d%m;
    // res[3] = d%n;
    
    // for(i=0; i<4; i++){
    //     count = res[i] + count;
    // }

}