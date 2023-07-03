#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[1000];
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", arr);
        printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
    }
    return 0;
}