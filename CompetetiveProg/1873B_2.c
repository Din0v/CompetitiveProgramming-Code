// soluzione da clown :p

#include <stdio.h>

long long productWithOneAddedToSmallest(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= (long long)arr[i];
    }

    return product * (1 + min);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t-- > 0) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("%lld\n", productWithOneAddedToSmallest(arr, n));
    }

    return 0;
}
