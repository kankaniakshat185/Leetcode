# Maximum Depth of Binary Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/2008314708/
- **Date:** 2026-05-20

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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        int finalAns=0;
        if(root==nullptr) return 0;
        q.push(root);

        while(!q.empty()){
            int n=q.size();

            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            finalAns++;
        }
        return finalAns;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
