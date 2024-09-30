#include <stdio.h>

int find_smallest(int a[], int n) {
    int smallest = a; // Initialize smallest with the first element of the array
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }
    return smallest;
}

int find_index(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            return i;
        }
    }
    return -1;
}

long long calculate_product(int a[], int n) {
    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= a[i];
    }
    return product;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        int smallest = find_smallest(a, n);
        int index = find_index(a, n, smallest);
        a[index]++;

        long long product = calculate_product(a, n);
        printf("%lld\n", product);
    }

    return 0;
}
