class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(auto x:s){
            if(x>='A' && x<='Z') t+=tolower(x);
            else if(x>='a' && x<='z') t+=x;
            else if(x>='0' && x<='9') t+=x;
        }
        int i=0;
        int j=t.size()-1;
        while(i<j){
            if(t[i]!=t[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
