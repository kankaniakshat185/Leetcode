# N-Queens

## Problem Information
- **Platform:** Leetcode
- **Difficulty:** Hard
- **URL:** https://leetcode.com/problems/n-queens/submissions/2036384082/
- **Date:** 2026-06-17

## Solution

```cpp
class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col){
        int r=row, c=col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q') return false;
            r--;
            c--;
        }
        r=row, c=col;
        while(c>=0){
            if(board[row][c]=='Q') return false;
            c--;
        }
        r=row, c=col;
        while(r<board.size() && c>=0){
            if(board[r][c]=='Q') return false;
            r++;
            c--;
        }
        return true;
    }
    void solve(int col, int n, vector<vector<string>>& ans, vector<string>& board){ 
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(board, row, col)){
                board[row][col]='Q';
                solve(col+1, n, ans, board);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        if(n==2 || n==3) return ans;

        string s(n, '.');
        vector<string> board(n);
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0, n, ans, board);
        return ans;
    }
};
```

---
*Generated automatically by LeetFeedback Extension*
