/*CF Problem 1551 found here:
https://codeforces.com/problemset/problem/1551/A
*/
#include <stdio.h>
    
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a = n / 3 + (n % 3 == 1), b = n / 3 + (n % 3 == 2);
        printf("%d %d\n", a, b);
    }
    return 0;
}