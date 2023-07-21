#include <stdio.h>
#include <string.h>

int main() {
    char string[100] = {};
    int b;
    int sum = 0;
    int temp = 0;
    int mult = 1;
    scanf("%s %d", string, &b);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= 65 && string[i] <= 90) { // 대문자 알파벳이면
            temp = string[i] - 55;
        } else { // 숫자면
            temp = string[i] - '0';
        }
        sum += temp * mult;
        mult *= b;
    }

    printf("%d\n", sum);
    return 0;
}