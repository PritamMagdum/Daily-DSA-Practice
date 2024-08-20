#include <bits/stdc++.h>
using namespace std;

// Print the name N times

void print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Pritam" << endl;
    print(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    print(1, n);
}