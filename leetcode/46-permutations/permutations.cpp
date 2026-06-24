class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, vector<bool>& vis, int n){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                temp.push_back(nums[i]);
                vis[i]=true;
                helper(nums, ans, temp, vis, n);
                vis[i]=false;
                temp.pop_back();
            }
            else continue;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<bool> vis(n, false);
        vector<vector<int>> ans;
        vector<int> temp;
        helper(nums, ans, temp, vis, n);
        return ans;
    }
};