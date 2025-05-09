vector<int> Solution::prevSmaller(vector<int> &A)
{
    vector<int> ans(A.size());
    stack<int> st;
    for (int i = 0; i < A.size(); i++)
    {
        while (!st.empty() && st.top() >= A[i])
        {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(A[i]);
    }
    return ans;
}
