class Solution {
public:
    int helper(int m, int n, int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(i==m-1 && j==n-1) return grid[m-1][n-1];
        if(i>=m || j>=n) return 1e9;

        if(dp[i][j]!=-1) return dp[i][j];
        int down=grid[i][j]+helper(m, n, i+1, j, grid, dp);
        int right=grid[i][j]+helper(m, n, i, j+1, grid, dp);

        return dp[i][j]=min(down, right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>> dp(m, vector<int> (n, -1));
        return helper(m, n, 0, 0, grid, dp);
    }
};