class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        int left, right;
        int start = 0, maxLen = 1;
        for (int i = 1; i < n; i++)
        {
            // For Even length string
            left = i - 1;
            right = i;
            while (left >= 0 && right < n && s[left] == s[right])
            {
                if ((right - left + 1) > maxLen)
                {
                    maxLen = right - left + 1;
                    start = left;
                }
                right++;
                left--;
            }
            // for Odd length string
            left = i - 1;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right])
            {
                if ((right - left + 1) > maxLen)
                {
                    maxLen = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start, maxLen);
    }
};