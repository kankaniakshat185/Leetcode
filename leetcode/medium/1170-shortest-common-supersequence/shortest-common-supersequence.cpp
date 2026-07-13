class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int s1=str1.length(), s2=str2.length();
        vector<vector<int>> dp(s1+1, vector<int> (s2+1, 0));
        for(int i=s1-1;i>=0;i--){
            for(int j=s2-1;j>=0;j--){
                if(str1[i]==str2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        string s(s1+s2-dp[0][0], '#');
        int i=0, j=0, k=0;
        while(i<s1 && j<s2){
            if(str1[i]==str2[j]){
                s[k++]=str1[i];
                i++; j++;
            }
            else{
                if(dp[i+1][j]>=dp[i][j+1]){
                    s[k++]=str1[i++];
                }
                else {
                    s[k++]=str2[j++];
                }
            }
        }
        while(i<s1){
            s[k++]=str1[i++];
        }
        while(j<s2){
            s[k++]=str2[j++];
        }
        //string ans(s.rbegin(), s.rend());
        return s;
    }
};