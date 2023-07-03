#include <stdio.h>

int main(void) {
    int m, n;
    int arr[101] = {
        0,
    };
    int i, j;
    int temp;

    scanf("%d %d", &n, &m);

    for (int p = 1; p <= n; p++) { // 각 바구니 구슬 번호 초기화
        arr[p] = p;
    }

    for (int p = 1; p <= m; p++) {
        scanf("%d %d", &i, &j);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 1; i <= n; i++) { // 각 바구니 구슬 번호 초기화
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}