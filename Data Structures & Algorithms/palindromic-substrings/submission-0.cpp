class Solution {
public:
    int fun(string s,int left,int right){
        int count=0;
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            ans += fun(s, i, i);       
            ans += fun(s, i, i + 1);   
        }

        return ans;
        
    }
        
        
    
};
