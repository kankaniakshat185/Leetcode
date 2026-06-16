# Combination Sum

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/combination-sum/submissions/2035108659/
- **Date:** 2026-06-16

## Solution

```cpp
class Solution {
public:
    void helper(vector<vector<int>>&ans, vector<int>&nums, vector<int>&temp, int target, int sum, int i){
        if(sum>target) return;
        if(i==nums.size()){
            if(sum==target){
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(nums[i]);
        helper(ans, nums, temp, target, sum+nums[i], i);
        temp.pop_back();
        helper(ans, nums, temp, target, sum, i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans, candidates, temp, target, 0, 0);
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
