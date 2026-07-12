class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         vector<vector<int>> adj(numCourses);
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }
        vector<int>indegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it :adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){q.push(i);}
        }
        vector<int>top;
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            top.push_back(x);
            for(auto it:adj[x]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }

        }
        if(top.size()==numCourses) return top;
        return {};
    }
};