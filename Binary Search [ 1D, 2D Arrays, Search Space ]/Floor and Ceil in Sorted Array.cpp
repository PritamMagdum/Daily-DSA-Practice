#include <bits/stdc++.h>
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    int low = 0, high = n - 1;
    pair<int, int> ans = {-1, -1};
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
        {
            ans.first = a[mid];
            ans.second = a[mid];
            return ans;
        }
        else if (a[mid] < x)
        {
            ans.first = a[mid];
            low = mid + 1;
        }
        else
        {
            ans.second = a[mid];
            high = mid - 1;
        }
    }
    return ans;
}