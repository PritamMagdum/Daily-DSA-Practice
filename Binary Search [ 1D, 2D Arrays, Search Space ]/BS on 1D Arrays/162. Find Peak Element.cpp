class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return 0;
        if (nums[0] > nums[1])
            return 0;
        if (nums[n - 1] > nums[n - 2])
            return n - 1;

        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            bool isLeftValid = (mid - 1 >= 0);
            bool isRightValid = (mid + 1 < n);
            if ((!isLeftValid || nums[mid] > nums[mid - 1]) &&
                (!isRightValid || nums[mid] > nums[mid + 1]))
            {
                return mid;
            }
            else if (isRightValid && nums[mid] < nums[mid + 1])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};