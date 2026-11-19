class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col, int m, int n, vector<vector<int>> &vis){
        vis[row][col]=1;

        int dRow[]={0,1,0,-1};
        int dCol[]={-1, 0, 1, 0};

        for(int k=0;k<4;k++){
            int nr=row+dRow[k];
            int nc=col+dCol[k];
            if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]=='1' && !vis[nr][nc]){
                dfs(grid, nr, nc, m, n, vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size(), cols=grid[0].size(), count=0;
        vector<vector<int>> vis(rows, vector<int> (cols, 0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(grid, i, j, rows, cols, vis);
                    count++;
                }
            }
        }
        return count;
    }
};