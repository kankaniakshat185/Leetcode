class Solution {
public:
    int helper(int i, int j, int size, vector<vector<int>>& triangle, vector<vector<int>>& dp){
        if(i==size-1) return triangle[i][j];
        if(i>=size || j>=size) return 1e9;

        if(dp[i][j]!=1e9) return dp[i][j];

        int down=triangle[i][j]+helper(i+1, j, size, triangle, dp);
        int right=triangle[i][j]+helper(i+1, j+1, size, triangle, dp);

        return dp[i][j]=min(down, right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int size=triangle.size();
        vector<vector<int>> dp(size, vector<int> (size, 1e9));
        return helper(0, 0, size, triangle, dp);
    }
};