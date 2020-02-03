/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if (!A || !A->next) return A;
    stack <int> s;
    ListNode *head = A;
    int prev;
    while(head){
        if (prev==head->val){
            if (!s.empty() && s.top()==prev) s.pop();   
        }
        else{
            prev = head->val;
            s.push(prev);
        }
        head = head->next;
    }
    ListNode *last = NULL;
    while(!s.empty()){
        ListNode *temp = new ListNode(s.top());
        s.pop();
        temp->next = last;
        last = temp;
    }
    return last;
}
