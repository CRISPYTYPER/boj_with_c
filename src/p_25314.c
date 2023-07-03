#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n > 0) {
        n -= 4;
        printf("long ");
    }
    printf("int\n");
    return 0;
}