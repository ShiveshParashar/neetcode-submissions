class Solution {
public:
    void function(vector<vector<int>>& matrix,int i,int j){
        int m=matrix[0].size();
        int n=matrix.size();
        for(int k=0;k<m;k++){
            matrix[i][k]=0;
        }
        for(int k=0;k<n;k++){
            matrix[k][j]=0;
        }
        return ;

    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<pair<int,int>>index;
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    index.push_back({i,j});
                    
                }
            }
        }
        for(auto v:index){
            int i=v.first;
            int j=v.second;
            function(matrix,i,j);
        }
        
    }
};
