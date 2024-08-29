class Solution
{
private:
    long long int calDiv(vector<int> &nums, int div)
    {
        long long int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + ceil((double)nums[i] / (double)div);
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (calDiv(nums, mid) <= threshold)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};