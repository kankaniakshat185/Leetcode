# Diameter of Binary Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/diameter-of-binary-tree/submissions/2008359364/
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
    int maxi=-1;

    int height(TreeNode* root){
        if (root==nullptr) return 0;

        int lh=height(root->left);
        int rh=height(root->right);
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxi;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
