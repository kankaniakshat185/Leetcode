class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length(), l=0, r=0, maxlen=0;
        vector<int> hash (27, 0);
        while(r<n){
            hash[s[r]-'A']++;
            int len=r-l+1;
            int max_val = *max_element(hash.begin(), hash.end());
            while(len-max_val>k){
                hash[s[l]-'A']--;
                l++;
                len=r-l+1;
                max_val = *max_element(hash.begin(), hash.end());
            }
            maxlen=max(maxlen, len);
            r++;
        }
        return maxlen;
    }
};