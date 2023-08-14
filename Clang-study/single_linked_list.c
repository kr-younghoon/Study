#include <stdio.h>
#include <stdlib.h>

// 노드 정의
typedef int element;

// 노드 타입을 구조체로 정의한다.
typedef struct ListNode {
    element data; // 데이터 필드
    struct ListNode *link; // 링크 필드 -> 다음 노드를 가리킬 포인터
} ListNode;

// 노드 생성 앞부분에 노드 삽입
// insert_first : 리스트의 시작 부분에 항목을 삽입하는 함수
ListNode* insert_first(ListNode* head, int value) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode)); //(1)
    p -> data = value; // (2)
    p -> link = head; // (3)
    head = p; // (4)
    return head;
}

// insert : 리스트의 중간 부분에 항목을 삽입하는 함수
ListNode* insert(ListNode* head, ListNode* pre, element value){
    ListNode* p = (ListNode*)malloc(sizeof(ListNode)); // (1)
    p -> data = value; // (2)
    p -> link = pre -> link; // (3)
    pre -> link = p; // (4)
    return head; // (5)
}

// delete_first() : 리스트의 첫번째 항목을 삭제하는 함수
ListNode* delete_first(ListNode* head) {
    ListNode* removed;
    if (head == NULL) return NULL;
    removed = head;
    head = removed -> link;
    free(removed);
    return head;
}                                                             

// delete() : 리스트의 중간 항목을 삭제하는 함수
ListNode* delete(ListNode* head,ListNode* pre) {
    ListNode* removed;
    removed = pre -> link;
    pre -> link = removed -> link;
    free(removed);
    return head;
}

// print_list() : 리스트를 방문하여 모든 항목을 출력하는 함수
void print_list(ListNode* head) {
    for (ListNode* p = head; p != NULL; p = p -> link)
        printf("%d ->", p -> data);
    printf("NULL \n");
}

int main(void) {
    ListNode *head = NULL; // 연결리스트의 초기화(init)

    for (int i = 0; i < 5; i++){
        head = insert_first(head, i);
        print_list(head);
    }

    for (int i = 0; i < 5; i++) {
        head = delete_first(head);
        print_list(head);
    }
    return 0;
}