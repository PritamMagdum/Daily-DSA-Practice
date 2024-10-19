class Solution {
public:
    int calculateSubArrays(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        long long int count = 0;
        map<int, int> mpp;
        while (r < nums.size()) {
            mpp[nums[r]]++;
            while (mpp.size() > k) {
                    mpp[nums[l]]--;
                 if (mpp[nums[l]] == 0) {
                    mpp.erase(nums[l]);
                }
                l++;
            }
            count = count + (r - l + 1);
            r++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return calculateSubArrays(nums, k) - calculateSubArrays(nums, k - 1);
    }
};