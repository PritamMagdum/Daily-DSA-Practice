#include <bits/stdc++.h>
using namespace std;

/*

****
****
****
****

*/

int pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "Enter the number you want to print " << endl;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern1(n);
    }
}