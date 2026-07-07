class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {  
        int n=nums.size();
         vector<int>suffix(n,1);
        vector<int>prefix(n,1);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=nums[i]*suffix[i+1];
        }
       prefix.erase(prefix.begin()+n-1);
       prefix.insert(prefix.begin()+0,1);
       suffix.erase(suffix.begin()+0);
       suffix.insert(suffix.begin()+n-1,1);
       for(int i=0;i<n;i++){
        prefix[i]=prefix[i]*suffix[i];
       }
       return prefix;

      


    }
};
