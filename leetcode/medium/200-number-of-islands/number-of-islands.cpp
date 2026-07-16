class Solution {
public:
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i, int j, int n, int m){
        vis[i][j]=1;
        
        int dRow[]={-1,0,1,0};
        int dCol[]={0,1,0,-1};

        for(int k=0;k<4;k++){
                int neighbourRow=i+dRow[k];
                int neighbourCol=j+dCol[k];
                if(neighbourRow>=0 && neighbourRow<n &&
                   neighbourCol>=0 && neighbourCol<m &&
                   !vis[neighbourRow][neighbourCol] &&
                   grid[neighbourRow][neighbourCol]=='1'){
                    dfs(grid, vis, neighbourRow, neighbourCol, n, m);
                }
            }
        }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size(), count=0;
        vector<vector<int>> vis(n, vector<int> (m, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    dfs(grid, vis, i, j, n, m);
                }
            }
        }
        return count;
    }   
};