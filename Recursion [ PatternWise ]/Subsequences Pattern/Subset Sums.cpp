class Solution
{
public:
    void findSubsets(int ind, int sum, vector<int> &arr, int n, vector<int> &sumSubset)
    {
        if (ind == n)
        {
            sumSubset.push_back(sum);
            return;
        }
        //   Pick the element
        findSubsets(ind + 1, sum + arr[ind], arr, n, sumSubset);

        //   Not Pick the element
        findSubsets(ind + 1, sum, arr, n, sumSubset);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int> sumSubset;
        findSubsets(0, 0, arr, n, sumSubset);
        (sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }
};