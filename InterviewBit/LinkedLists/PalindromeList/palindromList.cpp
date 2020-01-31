/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    if (!A || !A->next) return 1;
    stack <int> s;
    ListNode *fast, *slow, *curr;
    fast = slow = curr = A;
 
    while (fast && fast->next){
        s.push(slow->val);
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast) slow = slow->next;
    
    while(!s.empty()){
        if (s.top()!=slow->val) return 0;
        s.pop();
        slow = slow->next;
    }
    return 1;
}