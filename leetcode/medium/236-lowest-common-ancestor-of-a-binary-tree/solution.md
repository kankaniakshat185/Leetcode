# Lowest Common Ancestor of a Binary Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/2016648289/
- **Date:** 2026-05-29

## Solution

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* root, TreeNode* a, vector<TreeNode*> &path){
        if(!root) return false;

        path.push_back(root);
        if(root==a){
            return true;
        }
        
        if(helper(root->left, a, path) ||
        helper(root->right, a, path)) return true;
        path.pop_back();

        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1, path2;
        helper(root, p, path1);
        helper(root, q, path2);

        int i=0, j=0;
        TreeNode* ans;
        while(i<path1.size() && j<path2.size()){
            if(path1[i]==path2[j]){
                ans=path1[i];
            }
            i++;
            j++;
        }
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
