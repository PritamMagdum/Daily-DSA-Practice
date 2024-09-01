// Approach 1 - Binary Search [ Time Complexity => O(n*m)]
int lowerBound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int cnt_max = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt_ones = m - lowerBound(matrix[i], m, 1);
        if (cnt_ones > cnt_max)
        {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

// Approach 2 - using loop [ Time Complexity => O(n)]
class Solution
{

public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        int row = arr.size();
        int column = arr[0].size();
        int cnt = 0;

        while (cnt < column)
        {
            for (int i = 0; i < row; i++)
            {
                if (arr[i][cnt] == 1)
                    return i; // return row number
            }
            cnt++;
        }
        return -1;
    }
};