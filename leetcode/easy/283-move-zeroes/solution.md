# 283. Move Zeroes

**Link:** https://leetcode.com/problems/move-zeroes/submissions/1757426080/

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements. Note that you must do this in-place without making a copy of the array.

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
            j=i;
           }
        } 
            break;
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;;
           if(i==nums.size()-1 && nums[nums.size()-1]!=0) return;
```
