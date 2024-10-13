class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        int maxi = INT_MIN;
        for (int index = 0; index < k; index++) {
            pq.push(make_pair(nums[index][0], make_pair(index, 0)));
            maxi = max(maxi, nums[index][0]);
        }

        int mini = pq.top().first;
        int left = -1e5, right = 1e5;
        if (maxi - mini < right - left) {
            left = mini;
            right = maxi;
        }
        int cur_list = pq.top().second.first;
        int cur_ind = pq.top().second.second;

        pq.pop();
        while (cur_ind + 1 < nums[cur_list].size()) {
            pq.push(make_pair(nums[cur_list][cur_ind + 1],
                              make_pair(cur_list, cur_ind + 1)));
            maxi = max(maxi, nums[cur_list][cur_ind + 1]);
            mini = pq.top().first;
            if (maxi - mini < right - left) {
                left = mini;
                right = maxi;
            }
            cur_list = pq.top().second.first;
            cur_ind = pq.top().second.second;
            pq.pop();
        }
        vector<int> ans;
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }
};