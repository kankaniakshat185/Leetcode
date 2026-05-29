# Vertical Order Traversal of a Binary Tree

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Hard
- **URL:** https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/submissions/2016564420/
- **Date:** 2026-05-29

## Solution

```cpp
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mpp;
        queue<pair<TreeNode*, pair<int, int>>> q;
        vector<vector<int>> ans;

        if(!root) return ans;
        q.push({root, {0,0}});
        
        while(!q.empty()){
            auto p= q.front();
            q.pop();

            TreeNode* node = p.first;
            int x=p.second.first;
            int y=p.second.second;
            if(node->left) q.push({node->left, {x-1,y+1}});
            if(node->right) q.push({node->right, {x+1,y+1}});
            mpp[x][y].insert(node->val);
        }
        for(auto p:mpp){
            vector<int> col;
            for(auto q: p.second){
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};

```

---
*Generated automatically by LeetFeedback Extension*
