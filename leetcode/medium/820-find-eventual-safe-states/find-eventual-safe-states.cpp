class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<int>& vis, vector<int>& pathvis, vector<int>& safe, int node){
        if(safe[node]==1) return true;
        vis[node]=1;
        pathvis[node]=1;


        for(auto neighbour : graph[node]){
            if(pathvis[neighbour]) return false;

            if(!vis[neighbour]){
                if(dfs(graph, vis, pathvis, safe, neighbour)==false){
                    return false;
                }
            }
            else if(!safe[neighbour]) return false;
        }
        pathvis[node]=0;
        safe[node]=1;
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n, 0);
        vector<int> pathvis(n, 0);
        vector<int> safe(n, 0);
        for(int i=0;i<n;i++){
            if(graph[i].empty()) safe[i]=1;
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(graph, vis, pathvis, safe, i);
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(safe[i]==1) ans.push_back(i);
        }
        return ans;
    }
};