/* 이진 검색 */
#include <stdio.h>
#include <stdlib.h>

/*---요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 이진 검색*/
int bin_search(const int a[], int n, int key) {
    int pl = 0;     // left
    int pr = n - 1; // right
    int pc;         // center
    do {
        pc = (pl + pr) / 2;
        if (a[pc] == key)
            return pc;
        else if (a[pc] < key)
            pl = pc + 1;
        else
            pr = pc - 1;
    } while (pl <= pc);
    return -1;
}