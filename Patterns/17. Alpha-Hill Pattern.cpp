#include <bits/stdc++.h>
using namespace std;

/*

***A***
**ABA**
*ABCBA*
ABCDCBA

*/

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        // alphabets
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }
        // space
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
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
        pattern17(n);
    }
}