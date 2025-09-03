# 75. Sort Colors

**Link:** https://leetcode.com/problems/sort-colors/submissions/1758116146/

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue. We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively. You must solve this problem without using the library's sort function.

```cpp
            mpp[nums[i]]++;
        }
        for(int i=0;i<mpp[0];i++){
            nums[i]=0;
        }
        for(int i=0;i<mpp[1];i++){
            nums[i+(mpp[0])]=1;
        }
        for(int i=0;i<mpp[2];i++){
        for(int i=0;i<nums.size();i++){
            nums[i+(mpp[0]+mpp[1])]=2;
        map<int,int> mpp;
    void sortColors(vector<int>& nums) {
public:
        }
```
