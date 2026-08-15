class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string s : tokens){
            if (s == "+" || s == "-" || s == "*" || s == "/"){
                int n2 = st.top();
                st.pop();
                int n1 = st.top();
                st.pop();
                if (s == "+"){
                    int ans = n1 + n2;
                    st.push(ans);
                }
                else if (s == "-"){
                    int ans = n1 - n2;
                    st.push(ans);
                }
                else if (s == "*"){
                    int ans = n1 * n2;
                    st.push(ans);
                }
                else if (s == "/"){
                    int ans = n1 / n2;
                    st.push(ans);
                }
            }
            else {
                int num = stoi(s);
                st.push(num);
            }
        }
        return st.top();
    }
};
