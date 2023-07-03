#include <stdio.h>

int main(void) {
    int arr[6] = {1, 1, 2, 2, 2, 8};
    int num;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &num);
        printf("%d ", arr[i] - num);
    }
    printf("\n");

    return 0;
}