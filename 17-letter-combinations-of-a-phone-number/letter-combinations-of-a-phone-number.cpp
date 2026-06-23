class Solution {
public:
    void helper(string& digits, vector<string>& map, int n, vector<string>& ans, string &temp, int idx){
        if(temp.length()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<map[digits[idx]-'0'].length();i++){
            temp+=map[digits[idx]-'0'][i];
            helper(digits, map, n, ans, temp, idx+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string temp;
        helper(digits, map, digits.length(), ans, temp, 0);
        return ans;
    }
};