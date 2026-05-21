# Binary Tree Zigzag Level Order Traversal

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/2008684104/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        bool odd=true;

        if(root==nullptr) return ans;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> level(n);

            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

                if(odd){
                    level[i]=node->val;
                }
                else{
                    level[n-i-1]=node->val;
                }
            }
            odd=!odd;
            ans.push_back(level);
        }
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
