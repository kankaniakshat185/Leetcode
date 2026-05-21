# Tree Boundary Traversal

## Problem Information
- **Platform:** Geeksforgeeks
- **Difficulty:** Medium
- **URL:** https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
- **Date:** 2026-05-21

## Solution

```cpp
        }
        if(root->left) leafs(root->left, ans);
        if(root->right) leafs(root->right, ans);
    }
    void rightBoundary(Node* root, stack<int> &st){
            if(!isLeaf(root)) {
            st.push(root->data);
            rightBoundary(root->right, st);
        }
        else if(!isLeaf(root)) {
            st.push(root->data);
            rightBoundary(root->left, st);
        }
    }
    vector<int> boundaryTraversal(Node *root) {
        if(root==nullptr) return {};
        vector<int> ans;
        stack<int> st;
        if(!isLeaf(root))
    ans.push_back(root->data);
        leftBoundary(root->left, ans);
        leafs(root, ans);
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
