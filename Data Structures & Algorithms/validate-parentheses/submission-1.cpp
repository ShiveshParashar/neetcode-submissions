class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s[0]==')' || s[0]=='}' || s[0]==']') return false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                char temp=st.top();
                if(s[i]==')'){
                    if(temp=='{') return false;
                    if(temp=='[') return false;
                }
                if(s[i]=='}'){
                    if(temp=='[') return false;
                    if(temp=='(') return false;
                }
                 if(s[i]==']'){
                    if(temp=='{') return false;
                    if(temp=='(') return false;
                }
                st.pop(); 
            }
        }
        return st.empty();

        
    }
};
