class Solution {
public:
  void permu(vector<int>nums,int index,int n,vector<vector<int>> &result){
    if(index==n){
        result.push_back(nums);
        return ;
    }
    for(int i=index;i<n;i++){
        swap(nums[index],nums[i]);
        permu(nums,index+1,n,result);
        swap(nums[index],nums[i]);
    }
  }  
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        int n=nums.size();
        permu(nums,0,n,result);
        return result;
    }
};
