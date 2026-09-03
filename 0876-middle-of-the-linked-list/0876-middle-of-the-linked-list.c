/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* current = head;
    int count = 0;

    while(current){
        count++;
        current = current->next;
    }

    for(int i=0; i < count/2 ; i++){
        head = head->next;
    }

    return head;
    
}