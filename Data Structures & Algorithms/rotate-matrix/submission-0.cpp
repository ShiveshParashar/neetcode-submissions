class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>temp(n);
        int k=0;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                temp[k].push_back(matrix[i][j]);
            }
            k++;
        }
        vector<vector<int>>temp2;
        for(auto v:temp){
            int i=0;
            int j=v.size()-1;
            while(i<j){
                int q=v[i];
                v[i]=v[j];
                v[j]=q;
                i++;
                j--;
            }
            temp2.push_back(v);
        }
        matrix=temp2;
    }
};
