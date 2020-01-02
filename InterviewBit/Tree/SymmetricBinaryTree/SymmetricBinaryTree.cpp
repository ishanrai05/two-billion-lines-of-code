/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSymmetric(TreeNode* A) {
    if (!A) return 1;
    if (!A->left||!A->right){
        if (A->left) return 0;
        if (A->right) return 0;
        return 1;
    }
    queue <TreeNode*> l;
    queue <TreeNode*> r;
    l.push(A->left);
    r.push(A->right);
    while(!l.empty()&&!r.empty()){
        TreeNode* tr1=l.front();
        TreeNode* tr2=r.front();
        l.pop();r.pop();
        if (tr1->val!=tr2->val) return 0;
        if (tr1->left) l.push(tr1->left);
        if (tr1->right) l.push(tr1->right);
        if (tr2->right) r.push(tr2->right);
        if (tr2->left) r.push(tr2->left);
    }
    if (l.empty()&&r.empty()) return 1;
    return 0;
}
