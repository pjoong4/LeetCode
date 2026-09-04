/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* curr = NULL;

struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) {
        return 0;
    }

    reverseList(head->next);

    if (head->next == NULL) {
        curr = head;
    } else {
        head->next->next = head;
        head->next = NULL;
    }

    return curr;
}