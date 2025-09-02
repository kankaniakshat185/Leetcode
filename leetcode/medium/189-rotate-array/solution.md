# 189. Rotate Array

**Link:** https://leetcode.com/problems/rotate-array/submissions/1757269611/

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

```cpp
        for(int i=nums.size()-k;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<(nums.size()-k);i++){
            temp2[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            temp2[i]=temp[i];
        }
        vector<int> temp2(nums.size());
        vector<int> temp;
    }
        nums=temp2;
};
```
