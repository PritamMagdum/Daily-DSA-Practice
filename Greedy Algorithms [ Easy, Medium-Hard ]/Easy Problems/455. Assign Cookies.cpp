class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cookies = s.size();
        if(cookies == 0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int maxNum = 0;
        int cookieIndex = cookies -1;
        int childIndex = g.size() -1;
        while(cookieIndex >= 0 && childIndex >= 0){
            if(g[childIndex] <= s[cookieIndex]){
            maxNum++;
            cookieIndex--;
            childIndex--;
            }else{
            childIndex--;
            }
        }
        return maxNum;
    }
};