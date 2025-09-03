# 485. Max Consecutive Ones

**Link:** https://leetcode.com/problems/max-consecutive-ones/submissions/1758040801/

Given a binary array nums, return the maximum number of consecutive 1's in the array.

```cpp
            count=0;
        }
                count++;
                i++;
            }
            countArr.push_back(count);
        int max=countArr[0];
            while(i<nums.size() && nums[i]!=0) {
            while(i<nums.size() && nums[i]!=1) i++;
        vector<int> countArr;
        while(i<nums.size()){
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,i=0;
        for(int i=1;i<countArr.size();i++){
            if(countArr[i]>max) max=countArr[i];
        }
```
