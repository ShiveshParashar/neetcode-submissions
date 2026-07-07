class Solution {
public:
    int function(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10)*(n%10);
            n=n/10;
        }
        return sum;
    } 
    bool function2(int n,vector<int>&hash){
        if(n==1) return true;
        int temp=function(n);
            if(find(hash.begin(),hash.end(),temp)!=hash.end()){
                return false;
            }
        hash.push_back(temp);
         return function2(temp,hash);
    }
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        int temp=function(n);
        vector<int>hash;
        if(function2(n,hash)){
            return true;
        }
        return false;
        
    }
};
