# Amount of Time for Binary Tree to Be Infected

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/submissions/2017958868/
- **Date:** 2026-05-31

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
    int amountOfTime(TreeNode* root, int start) {
        queue<TreeNode*> q;
        map<TreeNode*, TreeNode*> mpp;
        TreeNode* startNode = nullptr;

        if(!root) return 0;

        q.push(root);
        while(!q.empty()){
            int n=q.size();

            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();

                if(node->val==start) startNode = node;

                if(node->left){
                    q.push(node->left);
                    mpp[node->left]=node;
                }
                if(node->right){
                    q.push(node->right);
                    mpp[node->right]=node;
                }
            }
        }
        queue<TreeNode*> q2;
        map<TreeNode*, bool> vis;
        int min=0;
        q2.push(startNode);

        while(!q2.empty()){
            int n=q2.size();

            for(int i=0;i<n;i++){
                TreeNode* node = q2.front();
                q2.pop();
                vis[node]=true;

                if(node->left && vis[node->left]==false){
                    q2.push(node->left);
                    vis[node->left]=true;
                }
                if(node->right && vis[node->right]==false){
                    q2.push(node->right);
                    vis[node->right]=true;
                }
                if(mpp.count(node) && vis[mpp[node]]==false){
                    q2.push(mpp[node]);
                    vis[mpp[node]]=true;
                }
            }
            min++;
        }
        return min-1;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
