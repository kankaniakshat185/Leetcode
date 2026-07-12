class Solution {
public:
    int minDistance(string word1, string word2) {
        int s1=word1.length(), s2=word2.length();
        vector<vector<int>> dp(s1+1, vector<int> (s2+1, 0));
        for(int i=0;i<s1;i++){
            dp[i][s2]=0;
        }
        for(int i=0;i<s2;i++){
            dp[s1][i]=0;
        }
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
        if(dp[0][0]==s1){
            return s2-dp[0][0];
        }
        else if(dp[0][0]==s2){
            return s1-dp[0][0];
        }
        else return (s1+s2-2*dp[0][0]);
    }
};