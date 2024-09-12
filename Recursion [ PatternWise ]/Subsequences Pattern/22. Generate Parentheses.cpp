class Solution
{
public:
    void helper(int n, vector<string> &v, int op, int cp, string str)
    {
        if (op == n && cp == n)
        {
            v.push_back(str);
            return;
        }

        if (op < n)
        {
            helper(n, v, op + 1, cp, str + "(");
        }

        if (cp < op)
        {
            helper(n, v, op, cp + 1, str + ")");
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> v;
        int op = 0, cp = 0;
        helper(n, v, op, cp, "");
        return v;
    }
};