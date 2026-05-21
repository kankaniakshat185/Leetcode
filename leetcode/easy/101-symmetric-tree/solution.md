# Symmetric Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/symmetric-tree/submissions/2008888660/
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
    bool isSame(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        if(!p || !q) return false;

        if(p->val==q->val && isSame(p->left, q->right) && isSame(p->right, q->left)) return true;
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left, root->right);
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
