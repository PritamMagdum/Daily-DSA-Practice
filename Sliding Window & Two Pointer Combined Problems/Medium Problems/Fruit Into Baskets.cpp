class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        int n = arr.size();
        int l = 0;
        int r = 0;
        int maxLen = 0;
        map<int,int> mpp;
        
        while(r<n){
            mpp[arr[r]]++;
            if(mpp.size() > 2){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0) mpp.erase(arr[l]);
                l++;
            }
            if(mpp.size()<=2){
                maxLen = max(maxLen,r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};