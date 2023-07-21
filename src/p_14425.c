#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUCKET 10000

typedef struct _Node *NodePointer;
typedef struct _Node {
    char data[501];
    NodePointer link;
} Node;

NodePointer hash[BUCKET];

int stringToInt(char *string) {
    int sum = 0;
    while (*string) {
        sum += *string;
        string++;
    }
    return sum;
}

int hashing(int key) { return key % BUCKET; }

void chaining(NodePointer node) {
    int index = hashing(stringToInt(node->data));

    if (hash[index] == NULL) {
        hash[index] = node;
    } else {
        node->link = hash[index];
        hash[index] = node;
    }
}

int searching(char *string) {
    int index = hashing(stringToInt(string));

    NodePointer cur = hash[index];
    while (cur != NULL) {
        if (!strcmp(cur->data, string))
            return 1;
        cur = cur->link;
    }
    return 0;
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        NodePointer newNode = (NodePointer)malloc(sizeof(Node));
        scanf("%s", newNode->data);
        newNode->link = NULL;
        chaining(newNode);
    }

    int count = 0;
    for (int i = 0; i < m; i++) {
        char string[501];
        scanf("%s", string);

        if (searching(string)) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}