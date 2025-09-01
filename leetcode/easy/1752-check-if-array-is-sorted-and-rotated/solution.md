# 1752. Check if Array Is Sorted and Rotated

**Link:** https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/1756159865/

Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false. There may be duplicates in the original array.

```cpp
       int count=0;
       for(int i =1;i<nums.size();i++){
        if(nums[i-1]>nums[i]){
       }
        
            count++;
        }
       return count<=1;
    bool check(vector<int>& nums) {
public:
class Solution {
       if(nums[nums.size()-1]>nums[0]){
        count++;
       }
    }
```
