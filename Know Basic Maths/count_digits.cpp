#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    // Method 1
    int cnt = 0;
    while (n > 0)
    {
        // int lastdigit = n % 10;
        cnt += 1;
        n = n / 10;
    }
    return cnt;

    // Method 2
    // int cnt = (int)(log10(n)+1);
    // return cnt;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    count(n);
}