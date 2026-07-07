class KthLargest {
public:
    priority_queue<int>pq;
    int value;
    KthLargest(int k, vector<int>& nums) {
        for(auto x:nums){
            pq.push(x);
        }
        value=k;
        
    }
    
    int add(int val) {
        pq.push(val);
        priority_queue<int>temp;
        temp=pq;
        int answer=0;
        int temp2=value;
        while(temp2--){
            if(temp.empty()) return answer;
            auto x=temp.top();
            answer=x;
            temp.pop();
        }
        return answer;
        
    }
};
