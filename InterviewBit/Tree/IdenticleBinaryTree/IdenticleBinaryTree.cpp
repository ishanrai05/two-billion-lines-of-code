/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if (!A && !B) return 1;
    if (!A || !B) return 0;
    queue <TreeNode*> a;
    queue <TreeNode*> b;
    a.push(A);
    b.push(B);
    while(!a.empty() &&  !b.empty()){
        TreeNode* t1 = a.front();
        TreeNode* t2 = b.front();
        if (t1->val!=t2->val) return 0;
        a.pop();b.pop();
        if (t1->left) a.push(t1->left);
        if (t1->right) a.push(t1->right);
        if (t2->left) b.push(t2->left);
        if (t2->right) b.push(t2->right);
    }
    
    if (a.empty()&&b.empty()) return 1;
    return 0;
    
}
