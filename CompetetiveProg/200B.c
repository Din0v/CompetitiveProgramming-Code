/*CF problem 200B found here:
https://codeforces.com/problemset/problem/200/B
Cosa ho imparato ?
ez pz  example as it only relies on the knowledge of putting zeros before the format specifier 
"per stampare il valore più preciso!"
*/

#include <stdio.h>

int main(){
    int i;
    float n, res, sum=0;
    float percent[103];

    scanf("%f", &n);
    for(i=0; i<n; i++){
        scanf("%f", &percent[i]);
    }

    for(i=0; i<n; i++){
        sum = percent[i] + sum;
    }

    res = sum/n;

    printf("%0000f", res);
}
