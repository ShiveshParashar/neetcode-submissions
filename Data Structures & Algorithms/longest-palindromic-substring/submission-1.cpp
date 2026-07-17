class Solution {
public:
    int fun(string s,int left,int right){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left+1-2;
    }
    string longestPalindrome(string s) {
        int start=0;
        int max_len=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int len1=fun(s,i,i);
            int len2=fun(s,i,i+1);
            int len=max(len1,len2);
            if(len>max_len){
                max_len=len;
                start=i-(len-1)/2;
            }
        }
        return s.substr(start,max_len);
        
    }
};
