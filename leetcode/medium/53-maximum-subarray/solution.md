# 53. Maximum Subarray

**Link:** https://leetcode.com/problems/maximum-subarray/

Given an integer array nums, find the subarray with the largest sum, and return its sum.

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       long long sum=0;
       long long maxiSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxiSum) maxiSum=sum;
        }
            if(sum<0) sum=0;
        //if(maxiSum<0) return 0;
        return maxiSum;
    }
};
```
