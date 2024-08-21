#include <bits/stdc++.h>
using namespace std;

// Number(Hash) - Program to show the appears of number

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pre compute
    int hash[256] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int number;
        cin >> number;

        // fetch
        cout << hash[number] << endl;
    }
}