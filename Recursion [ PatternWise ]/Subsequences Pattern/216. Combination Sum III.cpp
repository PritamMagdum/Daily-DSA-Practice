class Solution
{
public:
    void findCombinationSum(int ind, int sum, int n, vector<int> &sumAns,
                            vector<vector<int>> &ans, int k)
    {
        if (sum == n && k == 0)
        {
            ans.push_back(sumAns);
            return;
        }
        if (sum > n)
        {
            return;
        }
        for (int i = ind; i <= 9; i++)
        {
            if (i > n)
            {
                break;
            }
            sumAns.push_back(i);
            findCombinationSum(i + 1, sum + i, n, sumAns, ans, k - 1);
            sumAns.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> sumAns;
        vector<vector<int>> ans;
        findCombinationSum(1, 0, n, sumAns, ans, k);
        return ans;
    }
};