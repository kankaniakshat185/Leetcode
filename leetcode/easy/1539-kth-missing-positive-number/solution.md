# 1539. Kth Missing Positive Number

**Link:** https://leetcode.com/problems/kth-missing-positive-number/submissions/1756879245/

Given an array arr of positive integers sorted in a strictly increasing order, and an integer k. Return the kth positive integer that is missing from this array.

```cpp
            num++;
            if (i < arr.size() && arr[i] == num) {
                i++;
                // num exists in arr
            } else {
                // num is missing
            }
                missing.push_back(num);
        }

        return missing[k-1];
    }
};

```
