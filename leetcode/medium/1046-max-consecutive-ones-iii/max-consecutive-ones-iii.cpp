class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(), l=0, r=0, zeros=0, maxlen=0;
        while(r<=n-1){
            if(nums[r]==0){
                zeros++;
                while(zeros>k){
                    if(nums[l]==0){
                        zeros--;
                    }
                    l++;
                }
            }
            maxlen=max(r-l+1, maxlen);
            r++;
    }
    return maxlen;
    }
};