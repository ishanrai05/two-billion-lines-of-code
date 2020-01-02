/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int symmetric(TreeNode* l, TreeNode* r){
    if (!l || !r) return l==r;
    return symmetric(l->left,r->right) && symmetric(l->right,r->left) && l->val==r->val;
}
 
int Solution::isSymmetric(TreeNode* A) {
    return !A || symmetric(A->left,A->right);
}
