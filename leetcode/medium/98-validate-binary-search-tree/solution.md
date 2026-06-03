# Validate Binary Search Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/validate-binary-search-tree/submissions/2020964105/
- **Date:** 2026-06-03

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
    void inorder(TreeNode* root, vector<int> &v){
        if(!root) return;

        if(root->left) inorder(root->left, v);
        v.push_back(root->val);
        if(root->right) inorder(root->right, v);
    }
    bool isValidBST(TreeNode* root) {
       vector<int> v;
       inorder(root, v);
       bool ans = true;

       for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                ans = false;
                break;
            }
       }
       return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
