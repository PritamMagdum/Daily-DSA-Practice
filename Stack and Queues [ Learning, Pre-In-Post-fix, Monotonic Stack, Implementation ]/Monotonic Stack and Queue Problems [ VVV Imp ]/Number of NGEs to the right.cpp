// Approach 1 => Without using Stack
class Solution
{
public:
    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices)
    {
        vector<int> ans(queries);
        int i = 0;
        while (i < queries)
        {
            for (int j = indices[i] + 1; j < n; j++)
            {
                if (arr[j] > arr[indices[i]])
                {
                    ans[i]++;
                }
            }
            i++;
        }

        return ans;
    }
};