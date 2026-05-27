# Max Consecutive Ones

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/max-consecutive-ones/submissions/2014577191/
- **Date:** 2026-05-27

## Solution

```cpp
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes=0;
        int ones=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                ones=0;
            }
            else ones++;
            maxOnes=max(ones, maxOnes);
        }
        return maxOnes;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
