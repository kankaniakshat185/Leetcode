# 1752. Check if Array Is Sorted and Rotated

**Link:** https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/1756162534/

Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false. There may be duplicates in the original array.

```cpp
        sort(sorted.begin(), sorted.end());
            vector<int> B;
        }

        for (int x = 0; x < n; x++) {
            if (B == sorted) return true;  // check against sorted
            for (int i = 0; i < n; i++) {
                B.push_back(nums[(i + x) % n]);  // rotation
            }
        return false;  // no rotation matched
        vector<int> sorted(nums);
        int n = nums.size();
    bool check(vector<int>& nums) {
public:
class Solution {
```
