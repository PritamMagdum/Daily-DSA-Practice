class Solution
{
public:
    string postToPre(string post_exp)
    {
        int n = post_exp.length();
        stack<string> st;
        int i = 0;
        while (i < n)
        {
            if (isalpha(post_exp[i]))
            {
                st.push(string(1, post_exp[i]));
            }
            else
            {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string conn = post_exp[i] + t2 + t1;
                st.push(conn);
            }
            i++;
        }
        return st.top();
    }
};