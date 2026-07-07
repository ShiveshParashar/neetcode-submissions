class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> s(nums.begin(), nums.end());
        vector<int> temp(s.begin(), s.end());

        int answer = 1;
        int count = 1;

        for (int i = 1; i < temp.size(); i++) {
            if (temp[i] == temp[i - 1] + 1) {
                count++;
            } else {
                count = 1;
            }
            answer = max(answer, count);  
        }

        return answer;
    }
};
