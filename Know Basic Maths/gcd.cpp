#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        cout << n2;
    cout << n1;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    gcd(n1, n2);
}