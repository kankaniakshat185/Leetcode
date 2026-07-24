class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1), hash(n);
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int prev=0;prev<i;prev++){
                if(nums[i]%nums[prev]==0 && dp[i]<1+dp[prev]){
                    dp[i]=1+dp[prev];
                    hash[i]=prev;
                }
            }
       }
       int ind=max_element(dp.begin(), dp.end())-dp.begin();
       vector<int> ans;
       while(hash[ind]!=ind){
            ans.push_back(nums[ind]);
            ind=hash[ind];
       }
       ans.push_back(nums[ind]);
       reverse(ans.begin(), ans.end());
       return ans;
    }
};