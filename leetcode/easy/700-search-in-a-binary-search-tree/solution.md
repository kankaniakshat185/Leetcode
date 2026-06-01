# Search in a Binary Search Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/2019213591/
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
    TreeNode* node = nullptr;
    void find(TreeNode* root, int value){
        if(!root) return;
        if(root->val==value){
            node=root;
            return;
        }
        if(!root->left && !root->right) return;

        if(root->val>value){
            if(root->left){
                find(root->left, value);
            }
        }
        if(root->val<value){
            if(root->right){
                find(root->right, value);
            }
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        find(root, val);
        return node;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
