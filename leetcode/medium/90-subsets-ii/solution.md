# Subsets II

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/subsets-ii/submissions/2036229700/
- **Date:** 2026-06-17

## Solution

```cpp
class Solution {
public:
    void helper(vector<vector<int>>& ans, vector<int>& nums, vector<int>& temp, int start){

        ans.push_back(temp);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;

            temp.push_back(nums[i]);
            helper(ans, nums, temp, i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans, nums, temp, 0);
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
