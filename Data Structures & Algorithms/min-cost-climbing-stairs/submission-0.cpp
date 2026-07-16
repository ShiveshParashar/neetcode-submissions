class Solution {
public:
    int minCostClimbingStairs(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i-1]+nums[i-1],dp[i-2]+nums[i-2]);
        }
        return dp[n];
        
    }
};
