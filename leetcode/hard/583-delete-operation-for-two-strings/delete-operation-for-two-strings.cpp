class Solution {
public:
    int minDistance(string word1, string word2) {
        int s1=word1.length(), s2=word2.length();
        vector<vector<int>> dp(s1+1, vector<int> (s2+1, 0));
        for(int i=s1-1;i>=0;i--){
            for(int j=s2-1;j>=0;j--){
                if(word1[i]==word2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return (s1+s2-2*dp[0][0]);
    }
};