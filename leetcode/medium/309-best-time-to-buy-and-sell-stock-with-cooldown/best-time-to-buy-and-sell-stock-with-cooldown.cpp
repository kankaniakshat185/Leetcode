class Solution {
public:
    int solve(vector<int>& prices, int idx, int n, bool buy, vector<vector<int>>& dp){
        if(idx==n) return 0;
        if(idx==n+1) return 0;
        if(dp[idx][buy]!=-1) return dp[idx][buy];

        if(!buy) return dp[idx][buy]=max(solve(prices, idx+1, n, 1, dp)-prices[idx],
         solve(prices, idx+1, n, 0, dp));
        else return dp[idx][buy]=max(solve(prices, idx+2, n, 0, dp)+prices[idx], solve(prices, idx+1, n, 1, dp));
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+2, vector<int> (2, -1));
        return solve(prices, 0, n, 0, dp);
    }
};