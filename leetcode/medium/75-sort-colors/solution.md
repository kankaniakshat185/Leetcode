# 75. Sort Colors

**Link:** https://leetcode.com/problems/sort-colors/submissions/1763826139/

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue. We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively. You must solve this problem without using the library's sort function.

```cpp
            else if(nums[mid]==1){
                mid++;
            }
            else {
            }
                mid++;
                low++;
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
```
