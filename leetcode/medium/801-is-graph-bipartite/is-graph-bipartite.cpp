class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<int>& vis, int node){

        for(auto neighbor : graph[node]){
            if(vis[neighbor]==-1){
                vis[neighbor]=!vis[node];
                if(dfs(graph, vis, neighbor)==false) return false;
            }
            else if(vis[neighbor]==vis[node]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n, -1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                vis[i]=0;
                if(dfs(graph, vis, i)==false) return false;
            }
        }
        return true;
    }
};