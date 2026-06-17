# Subset Sums

## Problem Information
- **Platform:** Geeksforgeeks
- **Difficulty:** Medium
- **URL:** https://www.geeksforgeeks.org/problems/subset-sums2234/1
- **Date:** 2026-06-17

## Solution

```cpp
class Solution {
  public:
    void helper(vector<int>& nums, vector<int>& ans, int sum, int i){
        if(i==nums.size()){
            ans.push_back(sum);
            return;
        }
        helper(nums, ans, sum+nums[i], i+1);
        helper(nums, ans, sum, i+1);
    }
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> ans;
        helper(arr, ans, 0,0);
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
