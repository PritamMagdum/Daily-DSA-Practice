struct Meeting{
    int start;
    int end;
};

bool Compare(Meeting a, Meeting b){
    return a.end < b.end;
}

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        
        vector<Meeting> meetings(n);
        
        // store into vector
        for(int i=0; i<n; i++){
            meetings[i] = {start[i],end[i]};
        }
        
        sort(meetings.begin(), meetings.end(), Compare);
        
        int count = 1;
        int lastEnd = meetings[0].end;
        
        for(int i=1; i<n; i++){
            if(meetings[i].start > lastEnd){
                count++;
                lastEnd = meetings[i].end;
            }
        }
        
        return count;
    }
};