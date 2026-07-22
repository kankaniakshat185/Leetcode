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
        int n=nums.size();
        vector<vector<int>> dp(n+1, vector<int> (n+2, -1));
        return solve(nums, 0, -1, n, dp);
    }
};