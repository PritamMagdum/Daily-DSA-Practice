#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dupNumber = n;
    int sum = 0;
    while (n>0)
    {
        int ld = n % 10;
        sum = sum + (ld*ld*ld*ld);
        n = n / 10;
    }
    if (sum == dupNumber) cout << "Armstrong Number";
    else cout << "Not a Armstrong Number";
}