#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *getKthFromEnd(struct ListNode *head, int k) {
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    for (int i = 0; i < k; i++) {
        fast = fast->next;
    }
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

/*
 * 更新优化
*/
struct ListNode* getKthFromEnd_update(struct ListNode* head, int k){
    struct ListNode *fast = head;
    struct ListNode *slow = head;

    if (head == NULL) // 判断是不是空链表
        return NULL;

    int length = 0;
    while (fast != NULL) { // 历遍链表算出链表长度
        fast = fast->next;
        length++;
    }
    if (k > length || k <= 0) //要求返回第0个或第-1个或返回比链表还长的数则返回NULL
        return NULL;

    length -= k; // 如果链表长5，k是2，则5-2=3，slow移动3步就是倒数第二个数
    while (length--) {
        slow = slow->next;
    }
    return slow;
}

int main() {
    return 0;
}