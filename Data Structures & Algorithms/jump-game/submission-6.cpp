class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxlen=nums[0];
        for(int i=0;i<n;i++){
            int temp=nums[i]+i;
            if(maxlen<temp && maxlen>=i){
                maxlen=temp;
            }
            else if(i>maxlen){
                return false;
            }
        }
        return true;
        
        
    }
};
