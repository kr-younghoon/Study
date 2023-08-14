#include <stdio.h>
#include <stdlib.h>

// node 정의
typedef int element;

// node 타입을 sturct 로 정의한다.
typedef struct ListNode {
    element data;
    struct LinstNode *link;; 
    // 링크 필드 -> 다음 노드를 가리킬 포인터
} ListNode;

// node 생성 앞 부분에 node 삽입
// insert_first : list의 시작 부분에 항목을 insert하는 함수
ListNode* insert_first(ListNode* head, int value) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));
    p -> data = value;
    p -> link = head;
    head = p;
    return head;
}
// insert : 리스트의 중간 부분에 항목을 삽입하는 함수
ListNode* insert(ListNode* head,ListNode* pre, element value) {
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));
    p -> data = value;
    p -> link = pre -> link;
    pre -> link = p;
    return head; 
}

// delete_first() : 리스트의 첫번째 항목을 삭제하는 함수
ListNode* delete_first(ListNode* head) {
    ListNode* removed;
    if (head == NULL) return NULL;
    removed = head;
    head = removed -> link;
    free(removed);

}

// delete() : 리스트의 중간 항목을 삭제하는 함수

// print_list() : 리스트를 방문하여 모든 항목을 출력하는 함수
