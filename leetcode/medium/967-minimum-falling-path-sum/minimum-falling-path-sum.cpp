class Solution {
public:
    int helper(vector<vector<int>>& matrix, int i, int j, int n, vector<vector<int>>& dp){
        if(j<0 || j>=n) return 1e8;
        if(i==n-1) return matrix[i][j];
        if(dp[i][j]!=1e8) return dp[i][j];

        int one=matrix[i][j]+helper(matrix, i+1, j, n, dp);
        int two=matrix[i][j]+helper(matrix, i+1, j-1, n, dp);
        int three=matrix[i][j]+helper(matrix, i+1, j+1, n, dp);

        return dp[i][j]=min(one, min(two, three));

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size(), mini=1e8;
        vector<vector<int>> dp(n+1, vector<int>(n+1, 1e8));
        for(int i=0;i<n;i++){
            mini=min(mini, helper(matrix, 0, i, n, dp));
        }
        return mini;
    }
};