# 342. Power of Four

**Link:** https://leetcode.com/problems/power-of-four/submissions/1747005305/

Given an integer n, return true if it is a power of four. Otherwise, return false. An integer n is a power of four, if there exists an integer x such that n == 4x.

```cpp
class Solution {
public:
    bool isPowerOfFour(int n) {
        float num = (log(n)/log(4));
    }
        if(floor(num)==num) return true;
        else return false;
        if (n==0) return false;
};
```
