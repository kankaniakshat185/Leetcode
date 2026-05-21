# Tree Boundary Traversal

## Problem Information
- **Platform:** Geeksforgeeks
- **Difficulty:** Medium
- **URL:** https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
- **Date:** 2026-05-21

## Solution

```cpp
    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        if(root == nullptr)
            return ans;
        // root
        if(!isLeaf(root))
            ans.push_back(root->data);
        // left boundary
        leftBoundary(root->left, ans);
        // leaf nodes
        leafs(root, ans);
        // right boundary
        stack<int> st;
        rightBoundary(root->right, st);
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
