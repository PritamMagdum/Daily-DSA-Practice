class Solution
{
public:
    string preToInfix(string pre_exp)
    {
        int n = pre_exp.length();
        int i = n - 1;
        stack<string> st;

        while (i >= 0)
        {
            if ((pre_exp[i] >= 'a' && pre_exp[i] <= 'z') || (pre_exp[i] >= 'A' && pre_exp[i] <= 'Z'))
            {
                st.push(string(1, pre_exp[i]));
            }
            else
            {
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string con = '(' + t1 + pre_exp[i] + t2 + ')';
                st.push(con);
            }
            i--;
        }
        return st.top();
    }
};