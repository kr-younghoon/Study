#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *Parent, *left, *right;
}Node;

int GetHeight(Node* node) {
    if(node == NULL) return 0;

    int leftDepth = GetHeight(node -> left);
    int rightDepth = GetHeight(node -> right);

    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}