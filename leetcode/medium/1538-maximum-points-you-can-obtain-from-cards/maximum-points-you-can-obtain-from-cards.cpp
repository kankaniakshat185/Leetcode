class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total=accumulate(cardPoints.begin(), cardPoints.end(), 0), n=cardPoints.size(), win=n-k, r=win-1, l=0;
        int tempsum=accumulate(cardPoints.begin(), cardPoints.begin()+win, 0), mini=tempsum;
        while(r<n-1){
            r++;
            tempsum+=cardPoints[r];
            tempsum-=cardPoints[l];
            l++;
            mini=min(mini, tempsum);
        }
        return total-mini;
    }
};