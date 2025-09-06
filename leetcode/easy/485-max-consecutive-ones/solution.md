# 485. Max Consecutive Ones

**Link:** https://leetcode.com/problems/max-consecutive-ones/submissions/1761356301/

Given a binary array nums, return the maximum number of consecutive 1's in the array.

```cpp
        for(i=0;i<n;i++){
            if(nums[i]==1) {
        }
            maxCount=max(count,maxCount);
            count++;
        }   
            else {
                count=0;
    }
    return maxCount;
    }
};
        int count=0,i,maxCount=0;
        int n=nums.size();
    int findMaxConsecutiveOnes(vector<int>& nums) {
```
