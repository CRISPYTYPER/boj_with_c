#include <stdio.h>

int main(void) {
    int n, m;
    int i, j; // iterator에 i나 j 사용 금지
    int arr[101];
    int temp;

    scanf("%d %d", &n, &m);

    for (int p = 1; p <= n; p++) { // 배열 초기화
        arr[p] = p;
    }
    for (int p = 1; p <= m; p++) { // 바구니 뒤집기
        scanf("%d %d", &i, &j);
        for (int q = 0; q <= (j - i) / 2; q++) {
            temp = arr[i + q];
            arr[i + q] = arr[j - q];
            arr[j - q] = temp;
        }
    }
    for (int p = 1; p <= n; p++) { // 최종 배열 출력
        printf("%d ", arr[p]);
    }
    printf("\n");

    return 0;
}