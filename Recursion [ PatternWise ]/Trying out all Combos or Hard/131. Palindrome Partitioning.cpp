class Solution {
public:
    void helper(int index, string s, vector<vector<string>>& res,
                vector<string>& list) {
        if (index == s.size()) {
            res.push_back(list);
            return;
        }

        for (int i = index; i < s.size(); ++i) {
            if (isPalindrome(s, index, i)) {
                list.push_back(s.substr(index, i - index + 1));
                helper(i + 1, s, res, list);
                list.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int start, int end) {
        while (start <= end) {
            if (s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> list;
        helper(0, s, res, list);
        return res;
    }
};