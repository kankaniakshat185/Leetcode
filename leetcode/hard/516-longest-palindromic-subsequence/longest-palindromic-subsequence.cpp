class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string text2(s.rbegin(), s.rend());
        int s1=s.length(), s2=text2.length();
        vector<vector<int>> dp(s1+1, vector<int> (s2+1, 0));
        for(int i=0;i<s1;i++){
            dp[i][s2]=0;
        }
        for(int i=0;i<s2;i++){
            dp[s1][i]=0;
        }
        for(int i=s1-1;i>=0;i--){
            for(int j=s2-1;j>=0;j--){
                if(s[i]==text2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};