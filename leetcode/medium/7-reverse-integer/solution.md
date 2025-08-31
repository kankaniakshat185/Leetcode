# 7. Reverse Integer

**Link:** https://leetcode.com/problems/reverse-integer/submissions/1754759914/

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0. Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

```cpp
class Solution {
public:
    int reverse(int x) {
        while(x!=0){
            n=x%10;
            num=num*10+n;
            x=x/10;
        }
        if(x>=0) return num;
        else return -1*num;
    }
        int n,num=0;
        if(num>INT_MAX/10 || num==(INT_MAX/10) && n==7) return 0;
        if(num<INT_MIN/10 || num==(INT_MIN/10) && n==8) return 0;
};
```
