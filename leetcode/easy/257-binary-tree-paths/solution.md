# Binary Tree Paths

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/binary-tree-paths/submissions/2009148326/
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
    bool isLeaf(TreeNode* root){
        return (!root->left && !root->right);
    }
    void path(TreeNode* root, string s, vector<string> &ans){
        if(!root) return;

        if(isLeaf(root)) {
            s+=to_string(root->val);
            ans.push_back(s);
            return;
        }
        
        s+=to_string(root->val)+"->";
        if(root->left) path(root->left, s, ans);
        if(root->right) path(root->right, s, ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s;
        path(root, s, ans);
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
