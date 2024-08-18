#include <bits/stdc++.h>
using namespace std;

/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

void pattern13(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a += 1;
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
        pattern13(n);
    }
}