#include <bits/stdc++.h>
using namespace std;

// print in terms of 1 -to-> N

void print(int i, int n)
{
    if (i > n)
        return;
    cout << (i) << endl;
    print(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    print(1, n);
}