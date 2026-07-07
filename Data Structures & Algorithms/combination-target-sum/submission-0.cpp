class Solution {
public:
       void s(int index,vector<int>nums,vector<int>current,vector<vector<int>>&result,int target){
    if(index==nums.size()){
        if(target==0){
        result.push_back(current);}
        return ;
    }
    if(nums[index]<=target){
    current.push_back(nums[index]);
    s(index,nums,current,result,target-nums[index]);
    current.pop_back();
   }
    s(index+1,nums,current,result,target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>c;
        s(0,candidates,c,result,target);
        return result;
    }
};
