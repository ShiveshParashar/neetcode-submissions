class Solution {
public:
    void dfs(vector<vector<int>>adj,int node,vector<int>&visited){
        visited[node]=1;
        for(auto x:adj[node]){
            if(!visited[x]){
                dfs(adj,x,visited);

            }
        }
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1) return false;
        vector<vector<int>>adj(n);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int answer=0;
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(adj,i,visited);
                answer++;
            }
        }
        if(answer==1) return true;
        return false;

    }
};
