# 169. Majority Element

**Link:** https://leetcode.com/problems/majority-element/submissions/1760743836/

Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
        return nums[nums.size()/2];
};
```
