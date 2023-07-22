#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NODE_MAX 10000001
#define HASH_MAX 10007

typedef struct _element {
    char *name;
} element;

typedef struct _Node *NodePointer;

typedef struct _Node {
    element data;
    NodePointer link;
} Node;

NodePointer hash[HASH_MAX];
char *enterName[NODE_MAX];

int stringToInt(char *string) {
    int sum = 0;
    while (*string) {
        sum += *string;
        string++;
    }
    return sum;
}

int hashing(int key) { return key % HASH_MAX; }

void chaining(NodePointer node) {
    int index = hashing(stringToInt(node->data.name));

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
        if (!strcmp(cur->data.name, string))
            return 1;
        cur = cur->link;
    }
    return 0;
}

void deleting(char *string) {
    int index = hashing(stringToInt(string));

    NodePointer cur = hash[index];
    NodePointer prev = NULL;
    NodePointer temp = NULL;
    printf("---");
    while (cur != NULL) {
        if (!strcmp(cur->data.name, string)) {
            temp = cur;
            if (prev == NULL) {
                cur = NULL;
                free(temp);
            } else {
                prev->link = cur->link;
                temp = cur;
                free(temp);
            }
        }
        printf("---");
        prev = cur;
        cur = cur->link;
    }
    printf("---");
}

int main() {
    int n;
    char name[6];  // 사람 이름
    char state[6]; // enter or leave
    int cntEnter = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s", name, state);
        if (!strcmp(state, "enter")) {
            NodePointer newNode = (NodePointer)malloc(sizeof(Node));
            newNode->data.name = name;
            newNode->link = NULL;
            chaining(newNode);
        } else if (!strcmp(state, "leave")) {
            deleting(name);
        }
    }
    printf("------------\n");
    for (int i = 0; i < HASH_MAX; i++) {
        if (hash[i] != NULL) {
            NodePointer cur = hash[i];
            enterName[cntEnter++] = hash[i]->data.name;
            printf("%s\n", hash[i]->data.name);
            cur = cur->link;
        }
    }
    return 0;
}