/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int max(int a, int b)
 {
     return (a>b)?a:b;
 }
 
 int height(TreeNode *root)
 {
     if (root==NULL)
     return 0;
     return (max(height(root->left), height(root->right))+1);
 }
int Solution::maxDepth(TreeNode* A) {
    
    
    int ht=height(A);
    return ht;
}
