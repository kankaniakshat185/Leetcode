# Path Sum

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/path-sum/submissions/2008880889/
- **Date:** 2026-05-21

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==nullptr) return false;

        if(root->left==nullptr && root->right==nullptr && root->val==targetSum) return true;
        if(hasPathSum(root->left, targetSum-root->val) || hasPathSum(root->right, targetSum-root->val)) return true;

        return false;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
