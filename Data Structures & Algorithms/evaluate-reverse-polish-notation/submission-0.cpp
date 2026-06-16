class Solution {
public:
    int calculate(int b, int a, char op) {
        if(op == '*') return b * a;
        if(op == '+') return b + a;
        if(op == '/') return b / a;
        return b - a;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string c : tokens) {

            if(c != "+" && c != "-" &&
               c != "*" && c != "/") {

                st.push(stoi(c));
            }
            else {

                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                st.push(calculate(b, a, c[0]));
            }
        }

        return st.top();
    }
};