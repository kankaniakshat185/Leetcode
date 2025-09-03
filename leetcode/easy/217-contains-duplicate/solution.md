# 217. Contains Duplicate

**Link:** https://leetcode.com/problems/contains-duplicate/submissions/1758364278/

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            cout << mpp[nums[i]];
            if(mpp[nums[i]]>1) return true;
        }
        return false;
    }
};
```
