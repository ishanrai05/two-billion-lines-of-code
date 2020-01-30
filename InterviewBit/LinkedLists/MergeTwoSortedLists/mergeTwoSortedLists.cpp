/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *head, *curr;
    if (A->val<B->val){
        head = new ListNode(A->val);
        A = A->next;
    }
    else{
        head = new ListNode(B->val);
        B = B->next;
    }
    curr = head;
    while(A&&B){
        if (A->val<B->val){
            head->next = new ListNode(A->val);
            A = A->next;
        }
        else{
            head->next = new ListNode(B->val);
            B = B->next;
        }

        head = head->next;
    }
    while(A){
        head->next = A;
        A = A->next;
        head = head->next;
    }
    while(B){
        head->next = B;
        B = B->next;
        head = head->next;
    }
    
    return curr;
}
