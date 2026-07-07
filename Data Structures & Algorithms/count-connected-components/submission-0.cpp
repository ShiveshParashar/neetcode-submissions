class Solution {
public:
    void dfs(vector<vector<int>>edges,int node,vector<int>&visited){
         visited[node]=1;
         for(auto x:edges[node]){
            if(!visited[x]){
                dfs(edges,x,visited);
            }
         }

    }    
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int>visited(n,0);
        int answer=0;
        vector<vector<int>>graph(n);
        for(auto e : edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(graph,i,visited);
                answer++;
            }
        }
        return answer;
        

    }
};
