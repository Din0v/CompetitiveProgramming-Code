/*CF special Problem of fitting group of friends in a taxi
found here: 
https://codeforces.com/problemset/problem/158/B
cosa ho imparato ?
che è un problema strano :(
*/

#include <stdio.h>

int main()
{
    int n, s, count[5]= {0};
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%d", &s);
        count[s] += 1;
    }

    for(int i = 0; i<n; i++){
        printf("%d ", count[i]);
    }


    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];

    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    printf("%d\n", total);
    return 0;
}