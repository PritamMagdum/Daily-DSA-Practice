#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr : given arry
    // k : find the kth largest element and return using this function
    int kthLargest(vector<int> &arr,int k){
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int i = 0;i<k;i++){
            pq.push(arr[i]);
        }

        for(int i = k;i<arr.size();i++){
            if(arr[i] > pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }

        int ans = pq.top();
        return ans;
    }
}

int main(){
    Solution s;
    int vector<int> arr = {7,20,4,10,15};

    int ans = s.kthLargest(arr,3);
    cout << ans << endl;
}