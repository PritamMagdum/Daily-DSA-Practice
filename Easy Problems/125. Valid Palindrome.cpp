class Solution {
public:
    bool isPalindrome(string s) {
        string pal = "";
        for (char i : s) {
            i = tolower(i);
            if (isalpha(i) || isdigit(i)) pal.push_back(i);
        }

        int n = pal.size(), left = 0, right = n - 1;
        if (n == 0 || n == 1) return true;
        while (left <= right) {
            if (pal[left] == pal[right]) {
                left++;
                right--;
            } else return false;
        }
        return true;
    }
};