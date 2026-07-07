class Solution {
public:
    string multiply(string num1, string num2) {
        long int temp=stoi(num1);
        long int temp2=stoi(num2);
        long int ans=temp*temp2;
        string q=to_string(ans);
        return q;
        
    }
};
