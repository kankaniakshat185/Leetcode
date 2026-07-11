class Solution {
public:
    int solve(string& text1, string& text2, int idx1, int idx2, vector<vector<int>>& dp){
        if(idx1<0 || idx2<0) return 0;
        if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];

        if(text1[idx1]==text2[idx2]) return dp[idx1][idx2]=1+solve(text1, text2, idx1-1, idx2-1, dp);
        if(text1[idx1]!=text2[idx2]) return dp[idx1][idx2]=max(solve(text1, text2, idx1, idx2-1, dp),
                                                solve(text1, text2, idx1-1, idx2, dp));
        return 0;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int s1=text1.length(), s2=text2.length();
        vector<vector<int>> dp(s1+1, vector<int> (s2+1, -1));
        return solve(text1, text2, s1-1, s2-1, dp);
    }
};