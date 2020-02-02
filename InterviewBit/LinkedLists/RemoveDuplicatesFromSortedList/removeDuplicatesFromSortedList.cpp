/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if (A->next == NULL) return A;
    ListNode* curr = A;
    ListNode* temp = NULL;
    while (curr->next!=NULL){
        while (curr->val == curr->next->val){
            curr->next = curr->next->next;
            if (curr->next==NULL) return A;
        }
        curr = curr->next;
    }
    return A;
}
