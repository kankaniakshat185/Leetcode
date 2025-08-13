# 35. Search Insert Position

**Link:** https://leetcode.com/problems/search-insert-position/submissions/1733811313/

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. You must write an algorithm with O(log n) runtime complexity.

```cpp
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int i,numsSize=nums.size();
    for(i=0;i<numsSize;i++){
        if(nums[i]>=target) return i;
        }
        return numsSize;
}
};
```
