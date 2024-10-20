class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        int l = 0;
        int r = 0;
        int minLen = 1e9;
        int sIndex = -1;
        int count = 0;
        int hash[256] = {0};

        for (int i = 0; i < m; i++) {
            hash[t[i]]++;
        }

        while (r < n) {
            hash[s[r]]--;
            if (hash[s[r]] >= 0) {
                count++;
            }

            while (count == m) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    sIndex = l;
                }
                hash[s[l]]++;
                if (hash[s[l]] > 0)
                    count = count - 1;
                l++;
            }
            r++;
        }
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};