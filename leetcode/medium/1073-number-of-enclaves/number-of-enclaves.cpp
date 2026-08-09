class Solution {
public:
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int r, int c, int n, int m){
        vis[r][c]=1;

        int dRow[]={-1, 0, 1, 0};
        int dCol[]={0, 1, 0, -1};
        for(int k=0;k<4;k++){
            int nr=r+dRow[k];
            int nc=c+dCol[k];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc]==1){
                dfs(grid, vis, nr, nc, n, m);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    if(grid[i][j]==1) dfs(grid, vis, i, j, n, m);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1) count++;
            }
        }
        return count;
    }
};