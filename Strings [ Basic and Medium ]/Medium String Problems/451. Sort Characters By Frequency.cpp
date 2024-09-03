// Approach 1 - Sorting 10% Beats (not recommended)
class Solution
{
public:
    string frequencySort(string s)
    {
        vector<int> freq(128, 0);
        for (auto ch : s)
        {
            freq[ch]++;
        }

        auto cmp = [&](char a, char b)
        {
            if (freq[a] == freq[b])
                return a < b;
            return freq[a] > freq[b];
        };
        sort(s.begin(), s.end(), cmp);

        return s;
    }
};

// Approach 2 - Proirity Queue 65% Beats (recommended)
class Solution
{
public:
    string frequencySort(string s)
    {
        auto cmp = [](const pair<char, int> &a, const pair<char, int> &b)
        {
            return a.second < b.second;
        };

        priority_queue<pair<char, int>, vector<pair<char, int>>, decltype(cmp)> pq(cmp);

        unordered_map<char, int> hm;

        for (char c : s)
        {
            hm[c]++;
        }

        for (const auto &entry : hm)
        {
            pq.push(make_pair(entry.first, entry.second));
        }

        string result = "";
        while (!pq.empty())
        {
            pair<char, int> p = pq.top();
            pq.pop();
            result.append(p.second, p.first);
        }

        return result;
    }
};
