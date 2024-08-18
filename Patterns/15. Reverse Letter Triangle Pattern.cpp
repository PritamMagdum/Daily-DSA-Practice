#include <bits/stdc++.h>
using namespace std;

/*

ABCDE
ABCD
ABC
AB
A

*/

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "Enter test cases count" << endl;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern15(n);
    }
}