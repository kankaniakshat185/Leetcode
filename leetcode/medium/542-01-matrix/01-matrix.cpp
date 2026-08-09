class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i, j}, 0});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int idx=q.front().second;
            q.pop();
            ans[r][c]=idx;

            int dRow[]={-1, 0, 1, 0};
            int dCol[]={0, 1, 0, -1};

            for(int k=0;k<4;k++){
                int nr=r+dRow[k];
                int nc=c+dCol[k];

                if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc]){
                    q.push({{nr, nc}, idx+1});
                    vis[nr][nc]=1;
                }
            }
        }
        return ans;
    }
};