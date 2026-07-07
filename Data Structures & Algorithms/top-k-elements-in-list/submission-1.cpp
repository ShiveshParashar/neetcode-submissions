bool comp(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
       vector<pair<int,int>>v;
       for(auto x:m){
        v.push_back({x.first,x.second});
       } 
       sort(v.begin(),v.end(),comp);
       for(auto [value,freq]:v){
        if(k<=0){
            break;
        }
        result.push_back(value);
        k--;
       } 
       return result;
    }
};