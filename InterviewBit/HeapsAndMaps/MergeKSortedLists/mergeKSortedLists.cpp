/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &lists) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if (lists.size()==0) return NULL;
    map<int,int> mp;
    int count=0;
    for (ListNode* node:lists){
        if (!node){
            count++;
            continue;
        }
        ListNode* curr=node;
        while(curr){
            mp[curr->val]++;
            curr=curr->next;
        }
    }
    if (count==lists.size()) return NULL;
    ListNode *head = new ListNode(mp.begin()->first);
    mp.begin()->second--;
    ListNode* curr=head;
    for (auto it:mp){
        int t=it.second;
        int val=it.first;
        while(t-->0){
            curr->next=new ListNode(val);
            curr=curr->next;
        }
    }
    return head;
    
}
