# Left and Right Sum Differences

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/left-and-right-sum-differences/submissions/2024694855/
- **Date:** 2026-06-06

## Solution

```cpp
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftSum(n);
        vector<int> rightSum(n);
        vector<int> ans(n);

        leftSum[0]=0, rightSum[n-1]=0;

        for(int i=1;i<n;i++){
            leftSum[i]=leftSum[i-1]+nums[i-1];
            rightSum[n-i-1]=rightSum[n-i]+nums[n-i];
        }

        for(int i=0;i<n;i++){
            ans[i]=abs(leftSum[i]-rightSum[i]);
        }
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
