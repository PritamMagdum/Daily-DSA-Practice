class Solution {
public:
    int calculateEqualToGoal(vector<int>& nums, int goal){
        int l = 0;
        int r = 0;
        int sum = 0;
        int count = 0;
        while(r<nums.size()){
            if(goal<0) return 0;
            sum += nums[r];
            while(sum > goal){
                sum = sum - nums[l];
                l++;
            }
            count = count + (r-l+1);
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return calculateEqualToGoal(nums,goal)-calculateEqualToGoal(nums,goal-1);
    }
};