class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
    
    // create min heap
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    for(int i =0;i<N;i++){
        pq.push({arr[i],i}); // {element,index}
    }
    
    vector<int> ans(N,0);
    
    int rank = 0;
    int prev = 0;
    
    while(!pq.empty()){
        auto element = pq.top(); pq.pop();
        
        if(element.first != prev){
            rank += 1;
            prev = element.first;
        }
        ans[element.second] = rank;
    }
    return ans;
    }

};