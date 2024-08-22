vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int j = 0; j < m; j++)
    {
        st.insert(arr2[j]);
    }

    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }
    return temp;
}