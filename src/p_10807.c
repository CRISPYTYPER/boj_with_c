#include <stdio.h>

int main() {
    int n;
    int arr[101];
    int v;
    int cnt = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i + 1]);
    }
    scanf("%d", &v);

    for (int i = 0; i < n; i++) {
        if (arr[i + 1] == v) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
