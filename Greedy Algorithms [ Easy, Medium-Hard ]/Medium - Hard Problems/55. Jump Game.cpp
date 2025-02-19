class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int size = nums.size();
            int maxIndex = 0;
    
            // iterate elements
            for(int i=0; i<size; i++){
                if(i > maxIndex) return false;
                maxIndex = max(maxIndex,i+nums[i]);
            }
            return true;
        }
    };