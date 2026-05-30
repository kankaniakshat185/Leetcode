# All Nodes Distance K in Binary Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/submissions/2017404121/
- **Date:** 2026-05-30

## Solution

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode* , TreeNode*> mpp;
        queue<TreeNode*> q;

        if(!root) return {};

        q.push(root);
        while(!q.empty()){
            int n=q.size();
            
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();

                if(node->left) {
                    q.push(node->left);
                    mpp[node->left]=node;
                }
                if(node->right) {
                    q.push(node->right);
                    mpp[node->right]=node;
                }
            }
        }
        map<TreeNode*, bool> vis;
        queue<TreeNode*> q2;
        int d=0;
        q2.push(target);
        int n=q2.size();

        while(!q2.empty()){
            int n=q2.size();
            if(d==k) break;

            for(int i=0;i<n;i++){
            TreeNode* node = q2.front();
            q2.pop();
            vis[node]=true;

            if(node->left && vis[node->left]==false){
                q2.push(node->left);
            }
            if(node->right && vis[node->right]==false){
                q2.push(node->right);
            }
            if(mpp.count(node) && vis[mpp[node]]==false){
                q2.push(mpp[node]);
            }
            }
            d++;
        }

        vector<int> ans;
        while(!q2.empty()){
            ans.push_back(q2.front()->val);
            q2.pop();
        }
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
