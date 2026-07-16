class Solution {
public:
    int fun(vector<int>nums){
        int n=nums.size();
        if (n == 1) return nums[0];
        vector<int>dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        vector<int>temp1;
        vector<int>temp2;
        int n=nums.size();
        if (n == 1) return nums[0];
        for(int i=0;i<n-1;i++){
            temp1.push_back(nums[i]);
        }
        for(int i=1;i<n;i++){
            temp2.push_back(nums[i]);
        }
        return max(fun(temp1),fun(temp2));

        
    }
};
