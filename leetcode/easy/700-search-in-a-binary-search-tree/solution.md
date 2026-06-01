# Search in a Binary Search Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/2019283508/
- **Date:** 2026-06-01

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return nullptr;

        while(root!=nullptr && root->val!=val){
            root = val<root->val?root->left:root->right;
        }
        return root;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
