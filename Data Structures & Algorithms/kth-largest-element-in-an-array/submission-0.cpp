class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto x:nums){
            pq.push(x);
        }
        int answer;
        while(k--){
            auto x=pq.top();
            pq.pop();
            answer=x;
        }
        return answer;
        
    }
};
