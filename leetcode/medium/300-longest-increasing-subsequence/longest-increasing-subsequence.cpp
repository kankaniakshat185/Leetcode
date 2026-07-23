class Solution {
public:
    int solve(vector<int>& nums, int idx, int prev, int n, vector<vector<int>>& dp){
        if(idx==n) return 0;
        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];

        int pick=0;
        if(prev==-1 || nums[idx]>nums[prev]) pick=1+solve(nums, idx+1, idx, n, dp);  
        int notpick=solve(nums, idx+1, prev, n, dp);

        return dp[idx][prev+1]=max(pick, notpick);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(), previ=-1;
        vector<vector<int>> dp(n+1, vector<int> (n+1, 0));
        for(int i=n-1;i>=0;i--){
            for(int previdx=i-1;previdx>=-1;previdx--){
                int pick=0;
                if(previdx==-1 || nums[i]>nums[previdx]) pick=1+dp[i+1][i+1];
                int notpick=dp[i+1][previdx+1];
                dp[i][previdx+1]=max(pick, notpick);
            }
        }
        return dp[0][0];
    }
};