# Delete Node in a BST

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/delete-node-in-a-bst/submissions/2020469993/
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
    TreeNode* findMax(TreeNode* root){
        while(root->right!=nullptr){
            root=root->right;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(!root) return nullptr;

        if(root->val>key){
            root->left = deleteNode(root->left, key);
        }
        else if(root->val<key){
            root->right = deleteNode(root->right, key);
        }
        else{
                if(!root->left && !root->right){
                    delete root;
                    return nullptr;
                }
                if(!root->left){
                    TreeNode* temp = root->right;
                    delete root;
                    return temp;
                }
                else if(!root->right){
                    TreeNode* temp = root->left;
                    delete root;
                    return temp;
                }
                else {
                    TreeNode* prev = root->left;
                    TreeNode* temp = findMax(prev);
                    temp->right = root->right;
                    delete root;
                    return prev;
                }
        }
        return root;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
