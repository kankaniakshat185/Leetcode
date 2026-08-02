/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: 
    int solve(TreeNode* root, bool isleft){
        if(!root) return 0;
        if(isleft && !root->left && !root->right) return root->val;

        int left=solve(root->left, true);
        int right=solve(root->right, false);
        
        return left+right;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        return solve(root, false); 
    }
};