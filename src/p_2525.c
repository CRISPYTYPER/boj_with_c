#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int hour = c / 60;
    int minute = c % 60;
    if (b + minute >= 60) {
        b = b + minute - 60;
        a++;
    } else {
        b += minute;
    }
    a = (a + hour) % 24;
    printf("%d %d\n", a, b);
    return 0;
}