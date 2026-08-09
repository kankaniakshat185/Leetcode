class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        queue<int> q;
        vector<int> vis(n, -1);
        for(int i=0;i<n;i++){
            if(vis[i]!=-1) continue;
        
        q.push(i);
        vis[i]=0;

        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto neighbour:graph[node]){
                if(vis[neighbour]==-1){
                    q.push(neighbour);
                    vis[neighbour]=!vis[node];
                }
                else if(vis[neighbour]==vis[node]) return false;
            }
        }
        }
        return true;
    }
};