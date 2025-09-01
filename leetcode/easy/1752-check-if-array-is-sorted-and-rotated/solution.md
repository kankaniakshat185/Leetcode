# 1752. Check if Array Is Sorted and Rotated

**Link:** https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/1756298224/

Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false. There may be duplicates in the original array.

```cpp
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());

        for (int x = 0; x < n; x++) {
            vector<int> B;
            for (int i = 0; i < n; i++) {
                B.push_back(nums[(i + x) % n]);  // rotation
            }
            if (B == sorted) return true;  // check against sorted
        }
        return false;  // no rotation matched
```
