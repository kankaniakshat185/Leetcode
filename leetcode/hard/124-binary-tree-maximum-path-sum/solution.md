# Binary Tree Maximum Path Sum

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Hard
- **URL:** https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/2008846174/
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

    int maxi=INT_MIN;

    int value(TreeNode* root){
        if(root==nullptr) return 0;

        int ls=max(0, value(root->left));
        int rs=max(0, value(root->right));

        maxi=max(maxi, root->val+ls+rs);
        return root->val+max(ls,rs);
    }
    int maxPathSum(TreeNode* root) {
       value(root);
       return maxi;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
