class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, -1);
        
        dp[n-1]=nums[n-1];

        for(int i=n-2;i>=0;i--){
            int pick=nums[i];
            if(i<n-2) pick+=dp[i+2];
            int notpick=dp[i+1];
            
            dp[i]=max(pick, notpick);
        }
        return dp[0];
    }
};