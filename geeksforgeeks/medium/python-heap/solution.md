# PYTHON - HEAP

## Problem Information
- **Platform:** Geeksforgeeks
- **Difficulty:** Medium
- **URL:** https://www.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1
- **Date:** 2026-06-10

## Solution

```cpp
// User function Template for C++
class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        int n=arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                pq.push(sum);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
