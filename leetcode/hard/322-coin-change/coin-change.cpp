class Solution {
public:
    int helper(vector<int>& coins, int amount, int idx, int n, vector<vector<int>>& dp){
        if(amount==0) return 0;
        if(idx==n) return 1e9;
        
        if(dp[idx][amount]!=-1) return dp[idx][amount];

        int pick=1e9;
        if(coins[idx]<=amount) pick=1+helper(coins, amount-coins[idx], idx, n, dp);
        int notpick=helper(coins, amount, idx+1, n, dp);

        return dp[idx][amount]=min(pick, notpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1, vector<int> (amount+1, -1));
        int ans=helper(coins, amount, 0, n, dp);
        return ans!=1e9?ans:-1;
    }
};