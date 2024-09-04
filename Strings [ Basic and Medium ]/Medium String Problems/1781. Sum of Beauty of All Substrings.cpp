// Approach 1 - using map (Beats - 18%) not faster
class Solution
{
public:
    int beautySum(string s)
    {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            map<char, int> mp;
            for (int j = i; j < n; j++)
            {
                mp[s[j]]++;

                int leastFrequent = INT_MAX;
                int mostFrequent = INT_MIN;
                for (auto it : mp)
                {
                    leastFrequent = min(leastFrequent, it.second);
                    mostFrequent = max(mostFrequent, it.second);
                }
                ans += mostFrequent - leastFrequent;
            }
        }
        return ans;
    }
};

// Approach 2 - using vector (Beats - 82%) faster
class Solution
{
public:
    int beautySum(string s)
    {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> freq(26, 0);

            int mostFrequent = 0;
            for (int j = i; j < n; j++)
            {
                int idx = s[j] - 'a';
                freq[idx]++;

                mostFrequent = max(mostFrequent, freq[idx]);

                int leastFrequent = n;
                for (int k = 0; k < 26; k++)
                {
                    if (freq[k] > 0)
                    {
                        leastFrequent = min(leastFrequent, freq[k]);
                    }
                }
                ans += mostFrequent - leastFrequent;
            }
        }
        return ans;
    }
};
