# 1. Two Sum

**Link:** https://leetcode.com/problems/two-sum/submissions/1762286267/

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }
    }
        return {};
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()) return {i,mpp[rem]};
};
```
