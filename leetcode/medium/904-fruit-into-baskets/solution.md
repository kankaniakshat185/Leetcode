# Fruit Into Baskets

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/fruit-into-baskets/submissions/2021214283/
- **Date:** 2026-06-03

## Solution

```cpp
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0, r=0, n=fruits.size(), maxlen = 0;
        map<int, int> mpp;

        while(r<n){
            mpp[fruits[r]]++;
            while(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
                l++;
            }
            maxlen = max(maxlen, r-l+1);
            r++;
            }
            return maxlen;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
