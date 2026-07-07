class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<pair<int,int>>r;
        vector<vector<char>>result(m,vector<char>(n,'-1'));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    result[i][j]='O';
                    if(i==0 || j==0 || j==n-1 || i==m-1){
                        q.push({i,j});
                        r.push_back({i,j});
                    }
                }
            }
        }
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                auto [x,y]=q.front();
                result[x][y]='X';
                q.pop();
                for(int i=0;i<4;i++){
                    int nx=x+dx[i];
                    int ny=y+dy[i];
                    if(nx<m && ny<n && nx>=0 && ny>=0 && result[nx][ny]=='O'){
                        result[nx][ny]='X';
                        r.push_back({nx,ny});
                        q.push({nx,ny});
                    }
                }

            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result[i][j]='X';
            }
        }
        for(auto v:r){
            auto [x,y]=v;
            result[x][y]='O';
        }
        board=result;
    }
};