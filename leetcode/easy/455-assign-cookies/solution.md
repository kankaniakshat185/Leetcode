# Assign Cookies

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Easy
- **URL:** https://leetcode.com/problems/assign-cookies/submissions/2007502090/
- **Date:** 2026-05-19

## Solution

```cpp
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l=0, r=0, ans=0;
        while(l<s.size() && r<g.size()){
            if(s[l]>=g[r]){
                ans++;
                r++;
            }
            else{
                
            }
            l++;
        }
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
