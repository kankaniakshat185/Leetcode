class Solution {
public:
    int solve(vector<int>& prices, int n, int i, bool buy, vector<vector<int>>& dp){
        if(i==n) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];

        if(!buy) return dp[i][buy]=max(solve(prices, n, i+1, true, dp)-prices[i], solve(prices, n, i+1, false, dp));
        else return dp[i][buy]=prices[i]+max(solve(prices, n, i+1, true, dp)-prices[i], solve(prices, n, i+1, false, dp));
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+1, vector<int> (2, -1));
        return solve(prices, n, 0, false, dp);
    }
};