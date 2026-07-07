class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int answer=0;
        int temp=0;
        int n=nums.size();
        for(auto x:nums){
            temp+=x;
        }
        int sum=n*(n+1)/2;
        return sum-temp;
    }
};
