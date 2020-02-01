/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode *first, *second, *f, *s;
    first = new ListNode(0);
    second = new ListNode(0);
    while(A){
        if (A->val<B){
            first->next = new ListNode(A->val);
            first = first->next;
            if (!f) f = first;
        } 
        else {
            second->next = new ListNode(A->val);
            second = second->next;
            if (!s) s = second;
        }
        A = A->next;
    }
    if (!first) first = s;
    else if (!first->next) first->next = s;
    return f;
}
