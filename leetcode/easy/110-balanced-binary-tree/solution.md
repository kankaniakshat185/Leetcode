# Balanced Binary Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/balanced-binary-tree/submissions/2008333194/
- **Date:** 2026-05-20

## Solution

```cpp
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
    int height(TreeNode* root){
        if (root==nullptr) return 0;

        int lh=height(root->left);
        int rh=height(root->right);
        if(lh==-1 || rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;

        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root){
        if(height(root)==-1) return false;
        return true;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
