class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum = 0;
        priority_queue<int> pq(begin(nums),end(nums));
        
        while(k--){
            int maxElement = pq.top();
            pq.pop();

            sum += maxElement;
            maxElement = ceil(maxElement/3.0);
            pq.push(maxElement);
        }
        return sum;
    }
};