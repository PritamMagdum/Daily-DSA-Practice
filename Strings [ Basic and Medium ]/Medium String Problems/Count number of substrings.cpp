class Solution
{
public:
    long long maxi(string str, int k)
    {
        vector<int> v(26, 0);
        int l = 0;
        int r = 0;
        int ans = 0;
        int cnt = 0;
        while (r < str.length())
        {
            v[str[r] - 'a']++;

            if (v[str[r] - 'a'] == 1)
            {
                cnt++;
            }

            while (cnt > k)
            {
                v[str[l] - 'a']--;
                if (v[str[l] - 'a'] <= 0)
                {
                    cnt--;
                }
                l++;
            }

            ans += r - l + 1;
            r++;
        }
        return ans;
    }
    long long int substrCount(string s, int k)
    {
        return maxi(s, k) - maxi(s, k - 1);
    }
};