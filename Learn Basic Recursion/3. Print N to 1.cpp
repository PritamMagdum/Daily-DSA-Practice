#include <bits/stdc++.h>
using namespace std;

// print in terms of N -to-> 1

void print(int i, int n)
{
    if (i < 1)
        return;
    cout << (i) << endl;
    print(i - 1, n);
}

int main()
{
    int n;
    cin >> n;
    print(n, n);
}