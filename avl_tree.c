#include <stdio.h>
#include <math.h>
typedef struct node
{
    int data;
    struct node *left, *right; //*p, *Parent,

} node;
//이진 탐색 트리를 중위 순회하면서 출력
void display(node *root) {
}
// 값이 x인 노드의 위치 탐색
node* searchBST(node *root, int x) {
}

node* LL_rotate(node *parent) {
    // y는 z의 왼쪽 자식 노드이고, x는 y의 왼쪽 자식 노드인 경우 right rotation을 수행하여 균형을 맞춥니다.
    node* childNode = parent -> right;
    parent -> right = childNode -> left;
    // right rotation 수행 과정
    // 1. y노드의 오른쪽 자식 노드를 z노드로 변경합니다.
    // 2. z노드 왼쪽 자식 노드를 y노드 오른쪽 서브트리(T2)로 변경합니다.
    // 3. y는 새로운 루트 노드가 됩니다.
}
node* RR_rotate(node *parent) {
}
node* LR_rotate(node *parent) {
}
node* RL_rotate(node *parent) {
}
//서브 트리의 높이를 구하는 연산
int getHeight(node *p) {

}
// 균형인수를 구하는 연산
int getBF(node *p) {
    int l = getHeight(p->left);
    int r = getHeight(p->right);
    int diff = abs(l - r);
    if (diff < 2) {
        return 0;
    }
    else if (r > l)
}
//불균형이 발생한 경우 회전 연산 호출
node* rebalance(node **p) {
}
//AVL 트리에 노드 삽입 -> rebalance() 호출
node* insertNode(node **root, int x) {
}