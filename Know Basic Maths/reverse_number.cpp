#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int revNumber = 0;
    while (n>0)
    {
        int ld = n % 10;
        revNumber = (revNumber * 10) + ld;
        n = n / 10;
    }
    cout << revNumber;
    
}