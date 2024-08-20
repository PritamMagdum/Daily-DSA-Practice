#include <bits/stdc++.h>
using namespace std;

// Fibonacci Series with the help of Multiple Recursion

int fibo(int n)
{
    if (n <= 1)
        return n;
    int last = fibo(n - 1);
    int slast = fibo(n - 2);
    return last + slast;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}