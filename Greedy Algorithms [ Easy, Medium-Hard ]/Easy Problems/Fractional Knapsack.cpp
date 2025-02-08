class Solution {
    public:
      // Function to get the maximum total value in the knapsack.
      double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
          int n = val.size();
          
          vector<pair<double,int>> v;
          
          // store value and index into vector
          for(int i = 0; i<n;i++){
              double x = (val[i]*1.0)/(wt[i]*1.0);
              v.push_back({x,i});
          }
          
          sort(v.begin(),v.end(),greater<pair<double,int>>());
          
          double totalVal = 0;
          int size = 0;
          
          // iterate vector
          for(int i=0; i<v.size(); i++){
              int index = v[i].second;
              if(size+wt[index] <= capacity){
                  totalVal += val[index];
                  size += wt[index];
              }else{
                  double x = (capacity - size)*1.0;
                  totalVal += (x*v[i].first);
                  break;
              }
          }
          return totalVal;
      }
  };