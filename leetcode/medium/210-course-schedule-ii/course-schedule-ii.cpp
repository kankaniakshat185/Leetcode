class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        vector<vector<int>> adjList(numCourses);
        vector<int> indeg(numCourses);
        for(int i=0;i<n;i++){
            adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indeg[prerequisites[i][0]]++;
        }
        queue<int> q;
        vector<int> ans;
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0) q.push(i);
        }
        if(q.empty()) return {};
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();

            for(auto it:adjList[node]){
                indeg[it]--;
                if(indeg[it]==0) q.push(it);
            }
        }
        if(ans.size()==numCourses) return ans;
        else return {};
    }
};