#pragma once
typedef char element; // 이진탐색트리 element의 자료형 정의

typedef struct treeNode 
{
    element key; // data field
    struct treeNode* left; // left sub-tree link field
    struct treeNode* right; // right sub-tree link field
} treeNode;

void displayInorder(treeNode* root);
