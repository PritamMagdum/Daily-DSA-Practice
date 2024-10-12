class Solution
{
public:
    string postToInfix(string exp)
    {
        int n = exp.length();
        stack<string> st;

        for (int i = 0; i < n; i++)
        {
            if (isalpha(exp[i]))
            {
                st.push(string(1, exp[i]));
            }
            else
            {
                // string t1 = st.top();
                // st.pop();
                // string t2 = st.top();
                // st.pop();

                // For optimized code use std::move(st.top())
                string t1 = std::move(st.top());
                st.pop();
                string t2 = std::move(st.top());
                st.pop();
                // for concatnation use ostringstream oss
                // ostringstream oss;
                // oss << '('<< t2 << exp[i] << t1 << ')';
                // st.push(oss.str());
                string conn = '(' + t2 + exp[i] + t1 + ')';
                st.push(std::move(conn));
            }
        }
        return st.top();
    }
};