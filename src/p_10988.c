#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[101]; // 입력받을 단어
    int isPel = 1;

    scanf("%s", arr);
    for (int i = 0; i < strlen(arr) / 2; i++) {
        if (arr[i] != arr[strlen(arr) - 1 - i])
            isPel = 0;
    }
    printf("%d\n", isPel);

    return 0;
}