#include <bits/stdc++.h>
using namespace std;

/*

1
01
101
0101
10101

*/

void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
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
        pattern11(n);
    }
}