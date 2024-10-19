#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestSubstring(string s,int k){
        int l = 0;
        int r = 0;
        int maxLen = 0;
        map<char,int> mpp;
        
        while(r<s.size()){
            mpp[s[r]]++;
            if(mpp.size() > k){
                mpp[s[l]]--;
                if(mpp[s[l]]==0){
                    mpp.erase(s[l]);
                }
                l++;
            }
            if(mpp.size()<=k){
                maxLen = max(maxLen,r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};

int main(){
    string s;
    int k;
    cout << "Enter your string" << endl;
    getline(cin,s);
    cout << "Enter your k number" << endl;
    cin >> k;
    Solution ob;
    int ans = ob.longestSubstring(s,k);
    cout << ans;
}