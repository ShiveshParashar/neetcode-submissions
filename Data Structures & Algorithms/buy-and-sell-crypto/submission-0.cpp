class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        pq.push(prices[0]);
        for(int i=1;i<prices.size();i++){
            int temp=pq.top();
            if(prices[i]-temp>0){
                answer=max(answer,prices[i]-temp);
            }
            pq.push(prices[i]);
        }
        return answer;
    }
};
