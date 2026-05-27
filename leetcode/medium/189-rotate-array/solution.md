# Rotate Array

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/rotate-array/submissions/2014557911/
- **Date:** 2026-05-27

## Solution

```cpp
class Solution {
public:
    void reverseArray(vector<int>& nums, int start, int end){
        if(start>=end) return;
        swap(nums[start], nums[end]);
        reverseArray(nums, start+1, end-1);
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(nums.size()==1) return;
        reverseArray(nums, 0, nums.size()-1);
        reverseArray(nums, 0, k-1);
        reverseArray(nums, k, nums.size()-1);
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
