/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int bitshift = 0;
    while(head != NULL){

    bitshift = (bitshift<<1) | (head->val);
    head = head->next;
    }

  return bitshift;


}