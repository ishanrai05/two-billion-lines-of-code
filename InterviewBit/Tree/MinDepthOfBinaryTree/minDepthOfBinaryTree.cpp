/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int min_count;
void dfs(TreeNode* node, int count){
    if (!node) return;
    if (!node->left and !node->right){
        count++;
        min_count=min(min_count,count);
        return;  
    } else{
        count++;
        dfs(node->left,count);
        dfs(node->right,count);
    }
    
    
}
int Solution::minDepth(TreeNode* A) {
    min_count=INT_MAX;
    dfs(A,0);
    return min_count;
}
