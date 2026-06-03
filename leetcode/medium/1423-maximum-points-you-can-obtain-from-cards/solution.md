# Maximum Points You Can Obtain from Cards

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Medium
- **URL:** https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/submissions/2021063497/
- **Date:** 2026-06-03

## Solution

```cpp
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(), l=0, r=n-k-1;
        int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        int sum = accumulate(cardPoints.begin(), cardPoints.begin()+n-k, 0);
        int minSum = sum;

        while(r<n-1){
            sum-=cardPoints[l];
            l++;
            r++;
            sum+=cardPoints[r];
            minSum = min(minSum, sum);
        }
        return total-minSum;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
