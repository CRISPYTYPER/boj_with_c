#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1002] = {0};
    int i;

    scanf("%s", s);
    scanf("%d", &i);
    printf("%lu\n", strlen(s));

    return 0;
}