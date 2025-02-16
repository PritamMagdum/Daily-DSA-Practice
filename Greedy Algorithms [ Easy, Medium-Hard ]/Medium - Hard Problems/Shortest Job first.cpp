class Solution {
    public:
      long long solve(vector<int>& bt) {
        int n = bt.size();
        sort(bt.begin(),bt.end());
        long long waitTime = 0;
        long long time = 0;
        for(int i = 0; i<n; i++){
            // Add current waiting time to time
            waitTime += time;
            time += bt[i];
        }
        return waitTime/n;
    }
};