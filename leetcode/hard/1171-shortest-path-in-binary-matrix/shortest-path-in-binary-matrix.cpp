class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();

        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;

        queue<pair<int, pair<int, int>>> q;

        q.push({1, {0,0}});

        while(!q.empty()){
            int nodeRow=q.front().second.first;
            int nodeCol=q.front().second.second;
            int d=q.front().first;
            q.pop();

            if(nodeRow==n-1 && nodeCol==n-1) return d;

            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){

                    int newRow=nodeRow+i;
                    int newCol=nodeCol+j;

                    if(newRow<0 || newRow>=n || newCol<0 || newCol>=n) continue;
                    if(grid[newRow][newCol]==1) continue;
                    
                    grid[newRow][newCol]=1;
                    q.push({1+d, {nodeRow+i, nodeCol+j}});
                }
            }
        }
        return -1;
    }
};