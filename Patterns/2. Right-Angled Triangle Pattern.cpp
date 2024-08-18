#include <bits/stdc++.h>
using namespace std;

/*

*
**
***
****
*****

*/
int pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "Enter test cases number" << endl;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern2(n);
    }
}