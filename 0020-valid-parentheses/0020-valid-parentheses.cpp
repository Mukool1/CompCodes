class Solution {
public:
    bool isValid(string s) {
        if (s[0] == ')' || s[0] == '}' || s[0] == ']')
            return false;
        stack<char> st;
        for (int c : s) {

            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty())
                    return false;
                if (c == ')' && st.top() == '(') {
                    st.pop();
                } else if (c == '}' && st.top() == '{') {
                    st.pop();
                } else if (c == ']' && st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};