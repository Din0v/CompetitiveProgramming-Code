#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int *problems = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &problems[i]);
        }

        qsort(problems, n, sizeof(int), compare);

        long long duration = problems[k - 1];
        int idx = k - 2;

        while (idx >= 0 && problems[idx] == problems[k - 1]) {
            duration += problems[idx];
            idx--;
        }

        printf("%lld\n", duration);

        free(problems);
    }

    return 0;
}
