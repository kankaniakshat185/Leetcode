# Combination Sum III

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/combination-sum-iii/submissions/2036283965/
- **Date:** 2026-06-17

## Solution

```cpp
class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int>& temp, vector<int>& nums, int k, int n, int i, int sum){
        if(temp.size()==k){
            if(sum==n){
                ans.push_back(temp);
            }
            return;
        }
        if(i==nums.size()) return;

        temp.push_back(nums[i]);
        helper(ans, temp, nums, k, n, i+1, sum+nums[i]);
        temp.pop_back();
        helper(ans, temp, nums, k, n, i+1, sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums={1,2,3,4,5,6,7,8,9};
        vector<int> temp;
        vector<vector<int>> ans;
        helper(ans, temp, nums, k, n, 0, 0);
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
