class Solution {
    public:
        int jump(vector<int>& nums) {
            int size = nums.size();
            int near = 0;
            int far = 0;
            int jumps = 0;
    
            while(far < size-1){
                int farthest = 0;
                for(int i=near; i<=far; i++){
                    farthest = max(i+nums[i],farthest);
                }
                near = far+1;
                far = farthest;
                jumps++;
            }
            return jumps;
        }
    };