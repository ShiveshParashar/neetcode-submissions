class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>answer;

        set<vector<int>>check;
        for(int i=0;i<nums.size();i++){
                vector<int>temp;
            for(int j=i+1;j<nums.size();j++){
                int result=-(nums[i]+nums[j]);
                if(find(temp.begin(),temp.end(),result)!=temp.end()){
                    vector<int>temp2;
                    temp2.push_back(nums[i]);
                    temp2.push_back(nums[j]);
                    temp2.push_back(result);
                    sort(temp2.begin(),temp2.end());
                    check.insert(temp2);
                }
                else{
                    temp.push_back(nums[j]);
                }

            }
        }
        for(auto v:check){
            answer.push_back(v);
        }
        return answer;

    }
};
