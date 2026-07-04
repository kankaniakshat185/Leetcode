class Solution {
public:
    void helper(vector<string>& map, string& digits, vector<string>& ans, string& temp, int idx, int n){
        if(idx==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<map[digits[idx]-'0'].size();i++){
            temp+=map[digits[idx]-'0'][i];
            helper(map, digits, ans, temp, idx+1, n);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string s;
        helper(map, digits, ans, s, 0, digits.length());
        return ans;
    }
};