class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>result(n,0);
        stack<int>s;
        s.push(n-1);
        for(int i=n-2;i>=0;i--){
            int k=temperatures[i];
            while(!s.empty()){
              
                if(temperatures[s.top()]>k){
                    result[i]=s.top()-i;
                    break;
                }
                s.pop();
            }
            s.push(i);
        }
        return result;

        
    }
};
