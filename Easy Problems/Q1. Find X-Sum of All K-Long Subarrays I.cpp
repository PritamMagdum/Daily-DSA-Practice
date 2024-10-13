class Solution
{
public:
    vector<int> findXSum(vector<int> &nums, int k, int x)
    {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i <= n - k; ++i)
        {
            unordered_map<int, int> freq;
            for (int j = i; j < i + k; ++j)
            {
                freq[nums[j]]++;
            }

            vector<pair<int, int>> freqList;
            for (const auto &e : freq)
            {
                freqList.push_back({e.second, e.first});
            }

            sort(freqList.begin(), freqList.end(), [](const pair<int, int> &a, const pair<int, int> &b)
                 {
                if(a.first !=b.first) return a.first > b.first;
                return a.second > b.second; });

            int sum = 0;
            int cnt = 0;
            for (const auto &e : freqList)
            {
                if (cnt >= x)
                    break;
                sum += e.first * e.second;
                cnt++;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};