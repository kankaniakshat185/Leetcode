class Solution {
public:
    int solve(vector<int>& prices, int n, int i, int cap, bool buy, vector<vector<vector<int>>>& dp){
        if(i==n) return 0;
        if(cap==0) return 0;
        if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];

        if(!buy && cap!=0) return dp[i][buy][cap]=max(solve(prices, n, i+1, cap, true, dp)-prices[i], solve(prices, n, i+1, cap, false, dp));
        else return dp[i][buy][cap]=max(solve(prices, n, i+1, cap, true, dp), solve(prices, n, i+1, cap-1, false, dp)+prices[i]);
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>> (2, vector<int> (k+1, -1)));
        return solve(prices, n, 0, k, false, dp);
    }
};