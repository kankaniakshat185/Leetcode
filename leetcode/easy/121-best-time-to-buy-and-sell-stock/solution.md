# 121. Best Time to Buy and Sell Stock

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1764068802/

You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice=INT_MAX;
       int maxProfit=0;
       for(int i=1;i<prices.size();i++){
        minPrice=min(prices[i-1], minPrice);
       } return maxProfit;
    }
        maxProfit=max(maxProfit, prices[i]-minPrice);
};
```
