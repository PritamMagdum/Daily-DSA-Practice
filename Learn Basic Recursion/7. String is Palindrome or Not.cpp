#include <bits/stdc++.h>
using namespace std;

// String is Palindrome or Not

bool palindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return palindrome(i + 1, s);
}
int main()
{
    string s;
    cin >> s;
    cout << palindrome(0, s);
}