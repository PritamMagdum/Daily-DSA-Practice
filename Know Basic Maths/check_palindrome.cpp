#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dupNumber = n;
    int revNumber = 0;
    while (n>0)
    {
        int ld = n % 10;
        revNumber = (revNumber * 10) + ld;
        n = n / 10;
    }
    if (revNumber == dupNumber) cout << "true";
    else cout << "false";
}