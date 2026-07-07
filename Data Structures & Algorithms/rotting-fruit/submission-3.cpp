class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       
       int m=grid.size();
       int f=0;
       int n=grid[0].size();
       queue<pair<int,int>>q;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==2){
                q.push({i,j});
            }
            else if(grid[i][j]==1){
                f++;
            }
        }
       }
       int min=0;
       int dx[4]={-1,1,0,0};
       int dy[4]={0,0,-1,1};
       while(!q.empty()){
        int s= q.size();
        bool change=false;
        for(int i=0;i<s;i++){
             auto [x,y]=q.front();
             q.pop();
             for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx<m && nx>=0 && ny<n && ny>=0 && grid[nx][ny]==1){
                    grid[nx][ny]=2;
                    q.push({nx,ny});
                    change=true;
                    f--;
                }
             }
           

        }
          if(change){
                min++;
             }
             if(f==0){
                return min;
             }

       }
return (f == 0) ? min : -1;
    }
};