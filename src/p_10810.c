#include <stdio.h>

int main(void) {
    int m, n;
    int arr[101] = {
        0,
    };
    int i, j, k;
    scanf("%d %d", &n, &m);
    for (int p = 0; p < m; p++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int q = i; q <= j; q++) {
            arr[q] = k;
        }
    }

    for (int p = 1; p <= n; p++) {
        printf("%d ", arr[p]);
    }
    printf("\n");

    return 0;
}