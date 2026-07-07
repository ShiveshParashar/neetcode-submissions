class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto x:stones){
            pq.push(x);
        }
        while(pq.size()>1){
            int high=pq.top();
            pq.pop();
            int low=pq.top();
            pq.pop();
            if(high-low!=0) pq.push(high-low);
        }
        if(pq.size()>0) return pq.top();
        return 0;
    }
};
