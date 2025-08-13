# 29. Divide Two Integers

**Link:** https://leetcode.com/problems/divide-two-integers/submissions/1734058839/

Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

```cpp
class Solution {
public:
    int divide(int dividend, int divisor) {
        if((long long)dividend/divisor>INT_MAX) return INT_MAX;
    }
        if((long long)dividend/divisor<INT_MIN) return INT_MIN;
        else return int((dividend/divisor));
};
```
