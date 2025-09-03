# 485. Max Consecutive Ones

**Link:** https://leetcode.com/problems/max-consecutive-ones/submissions/1758043287/

Given a binary array nums, return the maximum number of consecutive 1's in the array.

```cpp
            count=0;
        }
                count++;
                i++;
            }
            maxCount=max(count,maxCount);
            while(i<nums.size() && nums[i]!=0) {
            while(i<nums.size() && nums[i]!=1) i++;
        while(i<nums.size()){
        return maxCount;
    }
};
```
