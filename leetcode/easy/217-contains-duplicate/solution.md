# 217. Contains Duplicate

**Link:** https://leetcode.com/problems/contains-duplicate/submissions/1758367623/

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

```cpp
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int x : nums) {
            if (seen.count(x)) return true; // duplicate found
            seen.insert(x);
        }
        return false;
    }
};

class Solution {
```
