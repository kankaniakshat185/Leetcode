class Solution {
public:
    bool helper(vector<int>& nums, int target, int n, int idx, vector<vector<int>>& dp){
        if(idx==n || target<0) return false;
        if(target==0) return true;
        if(dp[idx][target]!=-1) return dp[idx][target];

        bool pick=helper(nums, target-nums[idx], n, idx+1, dp);
        bool notpick=helper(nums, target, n, idx+1, dp);

        return dp[idx][target]=pick || notpick;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int target=accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>> dp(n+1, vector<int> (target+1, -1));
        if(target%2!=0) return false;
        else return helper(nums, target/2, n, 0, dp);
    }
};