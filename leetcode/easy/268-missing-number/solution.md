# 268. Missing Number

**Link:** https://leetcode.com/problems/missing-number/submissions/1746999100/

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

```cpp
        int sum=(size*(size+1))/2;
        for(int i=0;i<size;i++){
            sum2+=nums[i];
        }
    }
        return sum-sum2;
};
```
