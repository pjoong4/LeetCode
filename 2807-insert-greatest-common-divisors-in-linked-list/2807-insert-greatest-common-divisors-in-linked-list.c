/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* curr = head;

    while(curr->next){
        for(int i = curr->val ; i>=1 ; i--){
            if((curr->next->val % i == 0) && (curr->val %i ==0)){
                struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
                newNode->next = curr->next;
                curr->next = newNode;
                newNode->val = i;
                printf("%d ", i);
                curr =  newNode->next;
                break;
            }
        }
    }
    return head;
}