class Solution {
public:
    int fun(vector<int>piles,int k,int h){
        int hours=0;
        for(auto x:piles){
           if(x%k==0) hours+=x/k;
           else{
            hours+=(k+x-1)/k;
           }
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int answer;
        int temp=INT_MIN;
        for(auto x:piles){
            if(x>temp)temp=x;
        }
        int low=1;
        int high=temp;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(fun(piles,mid,h)<=h){
                answer=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return answer;
    }
};
