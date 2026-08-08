class Solution {
public:
    int helper(vector<vector<int>>& grid, vector<vector<int>>& vis, int row, int col, int n, int m){
        vis[row][col]=1;

        int dRow[]={-1, 0, +1, 0};
        int dCol[]={0, +1, 0, -1};
        int area=1;

        for(int k=0;k<4;k++){
            int nr=row+dRow[k];
            int nc=col+dCol[k];

            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && !vis[nr][nc]){
                area+=helper(grid, vis, nr, nc, n, m);
            }
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size(), maxcount=0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    maxcount=max(maxcount, helper(grid, vis, i, j, n, m));
                }
            }
        }
        return maxcount;
    }
};