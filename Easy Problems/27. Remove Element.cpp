class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     
        int left = 0; // Pointer to the place where we want to put non-val elements
        int right = 0; // Pointer to traverse the array

        while (right < nums.size()) {
            if (nums[right] != val) {
                nums[left] =
                    nums[right]; // Place non-val element at the left pointer
                left++;
            }
            right++; // Always move the right pointer
        }
        return left; // Left pointer is now the length of the new array
    }
};