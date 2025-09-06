# 136. Single Number

**Link:** https://leetcode.com/problems/single-number/submissions/1761423342/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. You must implement a solution with a linear runtime complexity and use only constant extra space.

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans=ans^nums[i];
    }
    return ans;
    }
};
```
