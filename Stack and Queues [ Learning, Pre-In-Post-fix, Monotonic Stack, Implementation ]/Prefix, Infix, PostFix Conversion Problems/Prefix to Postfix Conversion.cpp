class Solution
{
public:
    string preToPost(string pre_exp)
    {
        int n = pre_exp.length();
        stack<string> st;
        int i = n - 1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (isalpha(pre_exp[i]))
            {
                st.push(string(1, pre_exp[i]));
            }
            else
            {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string conn = t1 + t2 + pre_exp[i];
                st.push(conn);
            }
        }
        return st.top();
    }
};