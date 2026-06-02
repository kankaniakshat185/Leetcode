# Insert into a Binary Search Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/insert-into-a-binary-search-tree/submissions/2019989718/
- **Date:** 2026-06-02

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)return new TreeNode(val);
        TreeNode* prev = NULL;
        TreeNode* newRoot = root;
        while(root){
            if(root->val<val){
                prev = root;
                root = root->right;
            }else{
                prev = root;
                root = root->left;
            }
        }
        if(prev->val>val)prev->left = new TreeNode(val);
        else prev->right = new TreeNode(val);
    return newRoot;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
