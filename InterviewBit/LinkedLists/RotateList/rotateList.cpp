/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if (!A || B==0) return A;
    int len = 1;
    ListNode *last = A;
    while (last->next){
        len++;
        last = last->next;
    }
    B = B%len;
    if (B==0) return A;
    
    ListNode *end = A;
    for (int i=0;i<(len-B-1);i++) end = end->next;

    ListNode *head = end->next;
    last->next = A;
    end->next = NULL;
    return head;
}
