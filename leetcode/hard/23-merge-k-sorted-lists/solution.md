# Merge k Sorted Lists

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Hard
- **URL:** https://leetcode.com/problems/merge-k-sorted-lists/submissions/2029824601/
- **Date:** 2026-06-11

## Solution

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Compare{
public:
    bool operator()(ListNode* a, ListNode* b){
        return a->val>b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        for(auto node:lists){
            if(node) pq.push(node);
        }

        ListNode* dummy=new ListNode(-1);
        ListNode* tail=dummy;

        while(!pq.empty()){
            ListNode* node=pq.top();
            pq.pop();

            tail->next=node;
            tail=tail->next;

            if(node->next!=nullptr) pq.push(node->next);
        }
        return dummy->next;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
