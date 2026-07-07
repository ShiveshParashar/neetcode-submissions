class Solution {
public:
    vector<int> plusOne(vector<int>digits) {
        int carry=0;
        int n=digits.size()-1;
        for(int i=n;i>=0;i--){
            int temp;
            if(i==n){
         temp=1+digits[i]+carry;}
         else{
            temp=carry+digits[i];
         }
            if(temp<=9) {
                digits[i]=temp;
                carry=0;
                }
            else{
                digits[i]=temp%10;
                carry=1;
            }
        }
        if(carry==1) digits.insert(digits.begin(),1);
        return digits;
    }
};
