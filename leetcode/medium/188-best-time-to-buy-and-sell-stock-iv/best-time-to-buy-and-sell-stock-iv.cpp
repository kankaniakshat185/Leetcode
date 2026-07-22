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
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>> (2, vector<int> (k+1, 0)));
        for(int i=n-1;i>=0;i--){
            for(int cap=1;cap<=k;cap++){
                dp[i][0][cap]=max(dp[i+1][1][cap]-prices[i], dp[i+1][0][cap]);
                dp[i][1][cap]=max(dp[i+1][0][cap-1]+prices[i], dp[i+1][1][cap]);
            }
        }
        return dp[0][0][k];
    }
};