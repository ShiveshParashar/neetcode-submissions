class Solution {
public:
  static  bool cmp(vector<int> &a, vector<int> &b){
    return a[0] < b[0];
}
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>answer;
        vector<vector<int>>temp(points.size());
        int i=0;
        for(auto v:points){
            int x=v[0];
            int y=v[1];
            int d1=x*x;
            int d2=y*y;
            int d4=d1+d2;
            temp[i].push_back(d4);
            temp[i].push_back(x);
            temp[i].push_back(y);
            i++;
        }
        sort(temp.begin(),temp.end(),cmp);
        i=0;
        while(k--){
            vector<int>temp2;
            temp2.push_back(temp[i][1]);
            temp2.push_back(temp[i][2]);
            i++;
            answer.push_back(temp2);

            
        }
        return answer;
    }
};
