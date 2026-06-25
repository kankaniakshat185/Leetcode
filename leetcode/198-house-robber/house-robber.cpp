class Solution {
public:
    int solve(int i, int n, vector<int>& nums, vector<int>& dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        
        return dp[i]=max(nums[i]+solve(i+2, n, nums, dp),solve(i+1, n, nums, dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1, -1);
        return solve(0, n, nums, dp);
    }
};