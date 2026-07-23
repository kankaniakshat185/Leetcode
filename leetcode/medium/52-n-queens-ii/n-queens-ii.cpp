class Solution {
public:
    int count=0;
    bool isSafe(vector<vector<char>>& board, int row, int col, int n){
        int r=row, c=col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q') return false;
            r--; c--;
        } 
        r=row, c=col;
        while(c>=0){
            if(board[r][c]=='Q') return false;
            c--;
        }
        r=row, c=col;
        while(r<n && c>=0){
            if(board[r][c]=='Q') return false;
            r++; c--;
        }
        return true;
    }
    void solve(vector<vector<char>>& board, int col, int n){
        if(col==n){
            count++;
            return;
        }

        for(int r=0;r<n;r++){
            if(isSafe(board, r, col, n)){
                board[r][col]='Q';
                solve(board, col+1, n);
                board[r][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<char>> board(n, vector<char> (n, '.'));
        solve(board, 0, n);
        return count;
    }
};