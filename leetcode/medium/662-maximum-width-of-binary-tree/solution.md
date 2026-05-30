# Maximum Width of Binary Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/maximum-width-of-binary-tree/submissions/2017160482/
- **Date:** 2026-05-30

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
    int widthOfBinaryTree(TreeNode* root) {
        long long maxi=0;
        queue<pair<TreeNode*, int>> q;

        if(!root) return maxi;
        q.push({root, 0});
        while(!q.empty()){
            int n=q.size();

            long long first = q.front().second;
            long long last = q.back().second;

            maxi = max(maxi, last-first+1);

            for(int i=0;i<n;i++){
                TreeNode* node = q.front().first;
                long long idx = q.front().second;

                if(node->left) q.push({node->left, 2*idx+1});
                if(node->right) q.push({node->right, 2*idx+2});

                q.pop();
            }
        }
        return maxi;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
