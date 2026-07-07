class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int answer=0;
        int n=grid.size();
        queue<pair<int,int>>q;
        int m=grid[0].size();
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    answer++;
                    q.push({i,j});
                    while(!q.empty()){
                        auto [x,y]=q.front();
                        q.pop();
                          grid[x][y]='0';
                        for(int i=0;i<4;i++){
                            int nx=x+dx[i];
                            int ny=y+dy[i];
                            if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]=='1'){
                                q.push({nx,ny});
                               
        
                            }
                        }
                    }
                    
                }
            }
        }
        return answer;
        }
    
};
