# Max Consecutive Ones III

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/max-consecutive-ones-iii/description/
- **Date:** 2026-06-03

## Solution

```cpp
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, r=0, n=nums.size(), zeros=0, maxlen=0;
        while(r<n){
            if(nums[r]==1){
                maxlen = max(maxlen, r-l+1);
                r++;
            }
            else if(nums[r]==0){
                zeros++;
                while(zeros>k){
                    while(nums[l]!=0) l++;
                    l++;
                    zeros--;
                }
                maxlen = max(maxlen, r-l+1);
                r++;
            }
        }
        return maxlen;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
