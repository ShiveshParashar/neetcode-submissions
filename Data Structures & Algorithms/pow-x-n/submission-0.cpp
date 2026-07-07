class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        int q=n;
        if(q>0){
        while(n--){
            ans*=x;
        }
        }
        else{
            n=-n;
            while(n--){
            ans*=x;
        }
        ans=1/ans;


        }
        return ans;
    }
};
