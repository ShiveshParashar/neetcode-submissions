class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (int i = 0; i < tokens.size(); i++) {

            if (tokens[i] == "+" || tokens[i] == "-" || 
                tokens[i] == "*" || tokens[i] == "/") {

                int b = s.top(); s.pop();
                int a = s.top(); s.pop();

                if (tokens[i] == "+") s.push(a + b);
                if (tokens[i] == "-") s.push(a - b);
                if (tokens[i] == "*") s.push(a * b);
                if (tokens[i] == "/") s.push(a / b);
            }
            else {
                int temp = stoi(tokens[i]);  // string → int
                s.push(temp);
            }
        }

        return s.top();
    }
};
