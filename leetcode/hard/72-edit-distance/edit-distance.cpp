class Solution {
public:
    int solve(string& word1, string& word2, int i, int j, int n, int m, vector<vector<int>>& dp){
        if(i==n) return m-j;
        if(j==m) return n-i;

        if(dp[i][j]!=-1) return dp[i][j];

        if(word1[i]==word2[j]) return dp[i][j]=0+solve(word1, word2, i+1, j+1, n, m, dp);
        else if(word1[i]!=word2[j]) {
            int insert=1+solve(word1, word2, i, j+1, n, m, dp);
            int del=1+solve(word1, word2, i+1, j, n, m, dp);
            int replace=1+solve(word1, word2, i+1, j+1, n, m, dp);
            return dp[i][j]=min(insert, min(del, replace));
        }
        return n+m;
    }
    int minDistance(string word1, string word2) {
        int n=word1.length(), m=word2.length();
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        return solve(word1, word2, 0, 0, n, m, dp);
    }
};