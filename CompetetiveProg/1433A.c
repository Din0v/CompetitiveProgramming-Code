/*CF problem found here:
DA RIPASSARE!!!
https://codeforces.com/problemset/problem/1433/A
Cosa ho imparato ?*/

#include <stdio.h>
#include <string.h>
        
int main() {
    char s[20];
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%s", s);
        int n = s[0] - '1';
        int m = strlen(s);
        printf("%d\n", 10 * n + (m * (m + 1)) / 2);
    }
}