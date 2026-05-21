# Tree Boundary Traversal

## Problem Information
- **Platform:** Geeksforgeeks
- **Difficulty:** Medium
- **URL:** https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
- **Date:** 2026-05-21

## Solution

```cpp
            ans.push_back(root->data);
            return;
        }
        if(root->left) leafs(root->left, ans);
        if(root->right) leafs(root->right, ans);
    }
    void rightBoundary(Node* root, stack<int> &st){
            if(root->right && !isLeaf(root->right)) {
            st.push(root->right->data);
            rightBoundary(root->right, st);
        }
        else if(root->left && !isLeaf(root->left)) {
            st.push(root->left->data);
            rightBoundary(root->left, st);
        }
    }
    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        stack<int> st;
        ans.push_back(root->data);
        leftBoundary(root, ans);
        leafs(root, ans);
        rightBoundary(root, st);
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
