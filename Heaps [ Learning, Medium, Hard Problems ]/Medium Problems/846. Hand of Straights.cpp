class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
    // check array size is divisible with groupsize
    int n = hand.size();
    if(n % groupSize){
        return false;
    }

    // declare ordered map
    map<int,int> mp;

    // insert elements into the map
    for(int &handNumber : hand){
        mp[handNumber]++;
    }

    // iterate map until all elements erased or empty
    while(!mp.empty()){
        int curr = mp.begin()->first;

        for(int i = 0;i<groupSize;i++){
            if(mp[curr+i]==0){
                return false;
            }

            mp[curr+i]--;
            if(mp[curr+i] < 1){
                mp.erase(curr+i);
            }
        }
    }
    return true;
    }
};