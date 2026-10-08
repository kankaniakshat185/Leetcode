class Solution {
public:
    void reverse(vector<int>& nums, int l, int r){
        if(l>=r) return;
        swap(nums[l], nums[r]);
        reverse(nums, l+1, r-1);
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return;
        k=k%n;
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
};