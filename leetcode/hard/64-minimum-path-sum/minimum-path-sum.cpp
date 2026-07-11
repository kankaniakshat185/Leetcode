class Solution {
public:
    int solve(vector<vector<int>>& grid, int m, int n, int i, int j){
        if(i==m-1 && j==n-1) return grid[m-1][n-1];
        if(i>=m || j>=n) return 1e9;

        int down=grid[i][j]+solve(grid, m, n, i+1, j);
        int right=grid[i][j]+solve(grid, m, n, i, j+1);

        return min(down, right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<int>> dp(m+1, vector<int> (n+1, -1));
        for(int i=0;i<m;i++){
            dp[i][n]=1e9;
        }
        for(int j=0;j<n;j++){
            dp[m][j]=1e9;
        }
        dp[m-1][n-1]=grid[m-1][n-1];
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i==m-1 && j==n-1) continue;
                dp[i][j]=grid[i][j]+min(dp[i][j+1], dp[i+1][j]);
            }
        }
        return dp[0][0];
    }
};