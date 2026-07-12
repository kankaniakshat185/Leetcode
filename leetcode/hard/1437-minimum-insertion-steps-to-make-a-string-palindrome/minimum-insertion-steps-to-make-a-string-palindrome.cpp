class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        string r(s.rbegin(), s.rend());
        vector<vector<int>> dp(n+1, vector<int> (n+1, 0));
        for(int i=0;i<n;i++){
            dp[i][n]=0;
        }
        for(int i=0;i<n;i++){
            dp[n][i]=0;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(s[i]==r[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return n-dp[0][0];
    }
};