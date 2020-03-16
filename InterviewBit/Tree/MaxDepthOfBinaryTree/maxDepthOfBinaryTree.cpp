/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int max_count;
void dfs(TreeNode* node, int count){
    if (node==NULL){
        max_count=max(max_count,count);
        return;  
    } else{
        count++;
        dfs(node->left,count);
        dfs(node->right,count);
    }
    
    
}
int Solution::maxDepth(TreeNode* A) {
    max_count=0;
    dfs(A,0);
    return max_count;
}
