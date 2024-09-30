/*Tribonaccci sequence on LeetCode
https://leetcode.com/problems/n-th-tribonacci-number/
*/


#include <stdio.h>

int Tribonacci(int n) {
    if (n <= 0)
        return 0;
    if (n <= 2)
        return 1;

    int prev1 = 0;
    int prev2 = 1;
    int prev3 = 1;
    int current = 0;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2 + prev3;
        prev1 = prev2;
        prev2 = prev3;
        prev3 = current;
    }

    return current;
}

int main() {
    int n;
   // printf("Enter the value of n: ");
    scanf("%d", &n);

    //printf("Tribonacci(%d) = %d\n", n, tribonacci(n));
    printf("%d", Tribonacci(n));

    return 0;
}
