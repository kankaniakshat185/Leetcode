# 2149. Rearrange Array Elements by Sign

**Link:** https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/1764595409/

You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers. You should return the array of nums such that the the array follows the given conditions: Every consecutive pair of integers have opposite signs. For all integers with the same sign, the order in which they were present in nums is preserved. The rearranged array begins with a positive integer. Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

```cpp
        for(int i=0,pos=0,neg=0;i<n;i++){
        }
            }
                negArr.push_back(nums[i]);
            }
            else{
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                posArr.push_back(nums[i]);
        vector<int> posArr;
        vector<int> negArr;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(),pos=0,neg=0;
```
