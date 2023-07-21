#include <stdio.h>
#include <string.h>

char arr1[10000][501];
char arr2[10000][501];
int main() {

    int n, m;
    int cnt = 0;
    char check2[10000] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%s", arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (check2[j] == 1) {
                continue;
            }
            if (!strcmp(arr1[i], arr2[j])) { // 두 문자열이 같으면
                cnt++;
                check2[j] = 1;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}