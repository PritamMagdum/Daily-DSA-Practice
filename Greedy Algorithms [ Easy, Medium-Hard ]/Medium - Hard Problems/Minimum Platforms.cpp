class Solution {
    public:
      // Function to find the minimum number of platforms required at the
      // railway station such that no train waits.
      int findPlatform(vector<int>& arr, vector<int>& dep) {
          int n = arr.size();
          sort(arr.begin(),arr.end());
          sort(dep.begin(),dep.end());
          int maxCount = 0;
          int count = 0;
          int i=0;
          int j=0;
          while(i < n && j < n){
            // platform needed
            if(arr[i] <= dep[j]){
                count += 1;
                i += 1;
            }else{
                count -= 1;
                j += 1;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};
  