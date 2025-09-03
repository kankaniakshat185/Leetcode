# 136. Single Number

**Link:** https://leetcode.com/problems/single-number/submissions/1758068127/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. You must implement a solution with a linear runtime complexity and use only constant extra space.

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        while(i<nums.size()){
            ans=ans^nums[i];
            i++;
        }
    }
        int i=0,ans=0;
        return ans;
};
```
