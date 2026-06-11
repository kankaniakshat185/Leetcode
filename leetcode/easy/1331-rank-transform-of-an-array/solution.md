# Rank Transform of an Array

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/rank-transform-of-an-array/submissions/2029842346/
- **Date:** 2026-06-11

## Solution

```cpp
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int n=arr.size();

        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }

        map<int, int> mpp;
        int i=1;
        while(!pq.empty()){
            if(mpp.find(pq.top())==mpp.end()){
                mpp[pq.top()]=i;
                i++;
            }
            pq.pop();
        }

        for(int i=0;i<n;i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
