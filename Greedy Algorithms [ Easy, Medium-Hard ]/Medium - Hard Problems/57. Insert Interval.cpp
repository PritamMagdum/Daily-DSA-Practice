class Solution {
    public:
        vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
            int n = intervals.size();
            int i = 0;
            vector<vector<int>> res;
    
            // case 1 : no overlapping case before the merge intervals
            while(i < n && intervals[i][1] < newInterval[0]){
                res.push_back(intervals[i]);
                i++;
            }
    
            // case 2 : overlapping case and merging of intervals
            while(i < n && newInterval[1] >= intervals[i][0]){
                newInterval[0] = min(newInterval[0],intervals[i][0]);
                newInterval[1] = max(newInterval[1],intervals[i][1]);
                i++;
            }
            res.push_back(newInterval);
    
    
            // case 3 : no overlapping of intervals after intervals being merged
            while(i < n){
                res.push_back(intervals[i]);
                i++;
            }
            return res;
        }
    };