# Combination Sum II

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/combination-sum-ii/submissions/2035420624/
- **Date:** 2026-06-16

## Solution

```cpp
class Solution {
public:
    void helper(vector<vector<int>>&ans, vector<int>&nums, vector<int>&temp, int sum, int target, int start){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target) return;
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;

            temp.push_back(nums[i]);
            helper(ans, nums, temp, sum+nums[i], target, i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans, candidates, temp, 0, target, 0);
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
