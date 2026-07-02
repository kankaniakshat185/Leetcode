class Solution {
public:
    int helper(vector<int>& coins, int amount, int idx, int n, vector<vector<int>>& dp){
        if(amount==0) return 1;
        if(idx==n) return 0;
        
        if(dp[idx][amount]!=-1) return dp[idx][amount];

        int pick=0;
        if(coins[idx]<=amount) pick=helper(coins, amount-coins[idx], idx, n, dp);
        int notpick=helper(coins, amount, idx+1, n, dp);

        return dp[idx][amount]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1, vector<int> (amount+1, -1));
        return helper(coins, amount, 0, n, dp);
    }
};