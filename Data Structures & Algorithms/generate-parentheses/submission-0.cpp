class Solution {
public:
    void generate(int n,int open,int closed,vector<string>&result,string current){
        if(2*n==(open+closed) && open==closed){
            result.push_back(current);
            return;
        }
        if(open<n){
            generate(n,open+1,closed,result,current+"(");
        }
        if(closed<open){
            generate(n,open,closed+1,result,current+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>answer;
        string current="";
        generate(n,0,0,answer,current);
        return answer;
    }
};
