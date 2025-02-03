class Solution {
public:
typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int &num : nums){
            mp[num]++;
        }

        // min heap
        priority_queue<P,vector<P>, greater<P>> pq;

        // push elements in min-heap
        for(auto &it : mp){
            int value = it.first;
            int freq = it.second;

            pq.push({freq,value}); // log(k)

            if(pq.size() > k){
                pq.pop();
            }
        }

        // result
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        } 

        return res;
    }
};