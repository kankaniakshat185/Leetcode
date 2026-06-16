# Subsets

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/subsets/submissions/2034855510/
- **Date:** 2026-06-16

## Solution

```cpp
class Solution {
public:
    void helper(vector<vector<int>> &ans, vector<int> &nums, vector<int> &temp, int i){
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        helper(ans, nums, temp, i+1);
        temp.pop_back();
        helper(ans, nums, temp, i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans, nums, temp, 0);
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
