class Solution {
public:

    int calculateSubArrays(vector<int>& nums, int k){
        int l = 0;
        int r = 0;
        int sum = 0;
        int count = 0;
        while(r<nums.size()){
            if(k<0) return 0;
            sum += (nums[r]%2);
            while(sum > k){
                sum = sum - (nums[l]%2);
                l++;
            }
            count = count + (r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return calculateSubArrays(nums,k)-calculateSubArrays(nums,k-1);
    }
};