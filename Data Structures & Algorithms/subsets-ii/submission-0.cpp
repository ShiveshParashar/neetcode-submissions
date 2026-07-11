class Solution {
public:
    void fun(vector<int>nums,int index,int n,vector<int>&current,vector<vector<int>>&result){
        if(index>=n){
            result.push_back(current);
            return ;
        }
        current.push_back(nums[index]);
        fun(nums,index+1,n,current,result);
        current.pop_back();
        int indexx=index+1;
        while(indexx<n && nums[index]==nums[indexx] ){
            indexx++;
        }
        fun(nums,indexx,n,current,result);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>cur;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        fun(nums,0,n,cur,answer);
        return answer;

        
    }
};
