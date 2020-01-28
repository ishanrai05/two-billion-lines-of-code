/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if (!B) return A;
    if (!A) return B;
    
    int sum = A->val+B->val;
    int carry = sum/10;
    
    ListNode *head = new ListNode(sum%10);
    A = A->next;
    B = B->next;
    
    ListNode *curr = head;
    
    while (A||B||carry){
        sum = (A?A->val:0) + (B?B->val:0) + carry;
        carry = sum/10;
        curr->next =  new ListNode(sum%10);
        curr = curr->next;
        if (A) A = A->next;
        if (B) B = B->next;
    }
    
    return head;
    
}
