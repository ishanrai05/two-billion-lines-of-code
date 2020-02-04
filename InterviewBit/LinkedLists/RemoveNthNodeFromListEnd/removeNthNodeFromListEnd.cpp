/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if (!A) return A;
    ListNode *curr = A;
    int len = 0;
    while(curr){
        len++;
        curr = curr->next;
    }
    curr = A;
    if (B>=len){
        curr = curr->next;
        return curr;
    }
    for (int i=0;i<(len-B-1);i++){
        curr=curr->next;
    }
    if (curr->next) curr->next = curr->next->next;
    else curr = NULL;
    return A;
}
