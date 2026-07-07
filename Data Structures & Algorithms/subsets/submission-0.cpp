class Solution {
public:
    void fun(vector<int>nums,int index,int n,vector<int>current,vector<vector<int>>&result){
        if(index>=n){
            result.push_back(current);
            return ;
        }
        current.push_back(nums[index]);
        fun(nums,index+1,n,current,result);
        current.pop_back();
        fun(nums,index+1,n,current,result);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>cur;
        int n=nums.size();
        fun(nums,0,n,cur,answer);
        return answer;
    }
};
