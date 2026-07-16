class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, int node, vector<int>& vis, vector<int>& ans, int n){
        vis[node]=1;
        ans.push_back(node);

        for(int i=0;i<n;i++){
            if(isConnected[node][i]==1 && !vis[i]){
                dfs(isConnected, i, vis, ans, n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(), count=0;
        vector<int> ans, vis(n, 0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(isConnected, i, vis, ans, n);;
            }
        }
        return count;
    }
};