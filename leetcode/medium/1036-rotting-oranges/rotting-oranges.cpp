class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size(), tm=0;
        vector<vector<int>> vis(n, vector<int> (m, 0));
        queue<pair<pair<int, int>, int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm, t);
            int dRow[]={-1, 0, 1, 0};
            int dCol[]={0, 1, 0, -1};
            for(int k=0;k<4;k++){
                int nr=row+dRow[k];
                int nc=col+dCol[k];
                if(nr>=0 && nr<n &&
                   nc>=0 && nc<m &&
                   !vis[nr][nc] && grid[nr][nc]==1){
                    q.push({{nr, nc}, t+1});
                    vis[nr][nc]=1;
                   }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (vis[i][j]!=1 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return tm;
    }
};