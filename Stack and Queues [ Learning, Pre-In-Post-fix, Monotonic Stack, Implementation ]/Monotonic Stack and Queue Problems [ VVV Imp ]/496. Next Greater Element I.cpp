class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mpp;
        stack<int> st;
        vector<int> ans(nums1.size());

        for (int element : nums2) {
            while (!st.empty() && st.top() < element) {
                mpp[st.top()] = element;
                st.pop();
            }
            st.push(element);
        }

        int index = 0;
        for (int i : nums1) {
            ans[index++] = mpp.count(i) ? mpp[i] : -1;
        }
        return ans;
    }
};